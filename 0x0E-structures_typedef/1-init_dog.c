#include "dog.h"

/**
 * print_dog - function that initialize a variable of type
 * @d: struct dog
 * @name: char
 * @age: float
 * @owner: char
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
