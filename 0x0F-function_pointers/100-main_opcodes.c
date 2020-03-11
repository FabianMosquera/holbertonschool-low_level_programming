#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int h;
	char *plato = (char*)main;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	h = atoi(argv[1]);

	if (h < 0)
	{
		printf("Error\n");
		exit(2);
	}
	while (h++)
		printf("%02x%c", *plato++ && 0xff, plato ? ' ' : '\n');

	return (0);
}
