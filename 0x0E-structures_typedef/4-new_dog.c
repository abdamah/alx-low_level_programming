#include "dog.h"
/**
 * new_dog - creates copy of dog type
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: dog type
 */

dog_t *new_dog(char *name, float age, char *owner)
{

	int i = 0, j = 0, k;
	dog_t *mydog;

	while (name[i] != '\0')
		i++;
	while (owner[j] != '\0')
		j++;
	mydog = malloc(sizeof(dog_t));
	if (mydog == NULL)
	{
		free(mydog);
		return (NULL);
	}
	mydog->name = malloc(i * sizeof(mydog->name));
	if (mydog->name == NULL)
	{
		free(mydog->name);
		free(mydog);
		return (NULL);
	}
	for (k = 0; k <= i; k++)
		mydog->name[k] = name[k];
	mydog->age = age;
	mydog->owner = malloc(j * sizeof(mydog->owner));
	if (mydog->owner == NULL)
	{
		free(mydog->owner);
		free(mydog->name);
		free(mydog);
		return (NULL);
	}
	for (k = 0; k <= j; k++)
		mydog->owner[k] = owner[k];
	return (mydog);
}
