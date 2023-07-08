#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - create a new dog
 * @name: char string name
 * @age: int age
 * @owner: char string owner
 * Return: pointer to new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog *doge;
	int i, j, k;
	char *nom, *dueño;

	doge = malloc(sizeof(struct dog));
	if (doge == NULL)
		return (NULL);

	for (i = 0; name[i] != '\0'; i++)
		;
	for (j = 0; owner[j] != '\0'; j++)
		;

	nom = malloc(sizeof(char) * i + 1);
	if (nom == NULL)
	{
		free(doge);
		return (NULL);
	}
	dueño = malloc(sizeof(char) * j + 1);
	if (dueño == NULL)
	{
		free(nom);
		free(doge);
		return (NULL);
	}
	for (k = 0; k <= i; k++)
		nom[k] = name[k];
	for (k = 0; k <= j; k++)
		dueño[k] = owner[k];

	doge->name = nom;
	doge->age = age;
	doge->owner = dueño;

	return (doge);
}
