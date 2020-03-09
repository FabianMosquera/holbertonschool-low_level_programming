#include "dog.h"
/**
 * _strdup - Function that returns a pointer
 * @str: char
 * Return: char
 */
char *_strdup(char *str)
{
	char *a;
	unsigned int size = 0;

	if (str)
	{
		while (str[size++])
			;

		a = malloc(sizeof(char) * size);
		if (a)
		{
			while (size--)
				a[size] = str[size];

			return (a);
		}
	}
	return (NULL);
}
/**
 * new_dog - function that creates a new dog.
 * @name: char
 * @age: float
 * @owner: char
 * Return: dog_t
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;

	d = malloc(sizeof(dog_t));
	if (!d)
		return (NULL);

	if (name)
	{
		d->name = _strdup(name);
		if (!(d->name))
		{
			free(d);
			return (NULL);
		}
	}
	else
		d->name = NULL;
	d->age = age;
	if (owner)
	{
		d->owner = _strdup(owner);
		if (!d->owner)
		{
			free(d->name);
			free(d);
			return (NULL);
		}
	}
	else
		d->owner = NULL;
	return (d);
}
