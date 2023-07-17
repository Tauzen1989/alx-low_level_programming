#include "dog.h"
#include <stdlib.h>

/**
 * _strlen - determines the length of a string
 * @s: string to be checked
 * Return: length of a string
 */
int _strlen(char *s)
{
	int l = 0;

	while (*s != '\0')
	{
		l++;
		s++;
	}

	return (l);
}

/**
 * _strcpy - a function that copies a string
 * @dest: Destination string
 * @src: Source string
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	dest[i++] = '\0';

	return (dest);
}

/**
 * new_dog - a function tha creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: pointer to the new dog structure
 * NULL if the function fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *n_dog;
	int len1, len2;

	if (name != NULL && owner != NULL)
	{
		len1 = _strlen(name) + 1;
		len2 = _strlen(owner) + 1;
		n_dog = malloc(sizeof(dog_t));

		if (n_dog == NULL)
			return (NULL);

		(*n_dog).name = malloc(sizeof(char) * len1);

		if ((*n_dog).name == NULL)
		{
			free(n_dog);
			return (NULL);
		}

		(*n_dog).owner = malloc(sizeof(char) * len2);

		if ((*n_dog).owner == NULL)
		{
			free((*n_dog).name);
			free(n_dog);
			return (NULL);
		}

		(*n_dog).name = _strcpy((*n_dog).name, name);
		(*n_dog).owner = _strcpy((*n_dog).owner, owner);
		(*n_dog).age = age;
	}

	return (n_dog);
}
