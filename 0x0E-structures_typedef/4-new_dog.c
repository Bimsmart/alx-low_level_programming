#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strcpy - this function copies a sting
 * @dest: the destination
 * @src: the source
 * Return: a pointer to the destination
 */
char *_strcpy(char *dest, char *src)
{
	int l, c;

	l = 0;
	while (src[l] != '\0')
	{
		l++;
	}
	while (c < l)
	{
		dest[c] = src[c];
		c++;
	}
	dest[c] = '\0';
	return (dest);
}
/**
 * str_length - this returns the length of a string @str: the string whose
 * @str: length is to be evaluated
 * Return: string length
 */

int str_length(char *str)
{
	int c;

	c = 0;
	while (str[c] != '\0')
		c++;
	return (c);
}
/**
 * new_dog - this function creates a new dog
 * @name: this is the name of the new dog
 * @age: How old is the new dog
 * @owner: who owns the dog
 * Return: pointer to the new dog, NULL
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	int l1, l2;

	l1 = str_length(name);
	l2 = str_length(owner);

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);
	new_dog->name = malloc(sizeof(char) * l1 + 1);
	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	new_dog->owner = malloc(sizeof(char) * l2 + 1);
	if (new_dog->name == NULL)
	{
		free(new_dog);
		free(new_dog->name);
		return (NULL);
	}
	_strcpy(new_dog->name, name);
	_strcpy(new_dog->owner, owner);
	new_dog->age = age;
	return (new_dog);
}
