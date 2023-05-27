#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - inputs a new dog
 * @name: name of new dog
 * @age: age of new dog
 * @owner: owner of new dog
 *
 * Return: pointer (Success), NULL otherwise
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int num1, num2;

	num1 = _strlen(name);
	num2 = _strlen(owner);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (num1 + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (num2 + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}
	_strcpy(dog->name, name);
	_strcpy(dog->owner, owner);
	dog->age = age;

	return (dog);
}

/**
 * _strlen - prints the length of a string
 * @s: string
 *
 * Return: string length
 */
int _strlen(char *s)
{
	int a;

	a = 0;

	while (s[a] != '\0')
	{
		a++;
	}

	return (a);
}

/**
 * *_strcpy - copies the string pointer
 * @dest: pointer to the buffer
 * @src: string
 *
 * Return: the pointer
 */
char *_strcpy(char *dest, char *src)
{
	int longi, m;

	longi = 0;

	while (src[longi] != '\0')
	{
		longi++;
	}

	for (m = 0; m < longi; m++)
	{
		dest[m] = src[m];
	}
	dest[m] = '\0';

	return (dest);
}

