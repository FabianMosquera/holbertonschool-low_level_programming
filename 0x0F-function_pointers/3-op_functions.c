#include "3-calc.h"

/**
 * op_add - mathematic for add
 * @a: integer
 * @b: integer
 * Return: integer
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - mathematic for sub
 * @a: integer
 * @b: integer
 * Return: integer
 */

int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - mathematic for mul
 * @a: integer
 * @b: integer
 * Return: integer
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - mathematic for div
 * @a: integer
 * @b: integer
 * Return: integer
 */
int op_div(int a, int b)
{
	if (!b)
	{
		puts("Error");
		exit(100);
	}
	return (a / b);
}
/**
 * op_mod - mathematic for mod
 * @a: integer
 * @b: integer
 * Return: integer
 */
int op_mod(int a, int b)
{
	if (!b)
	{
		puts("Error");
		exit(100);
	}
	return (a % b);
}
