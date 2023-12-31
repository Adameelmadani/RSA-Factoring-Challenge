#include "main.h"

/**
  * main - main
  * @argc: arg counter
  * @argv: arg vector
  * Return: return 0 or 1
  */

int main(__attribute__((unused))int argc, char *argv[])
{
	char buff[1024];
	FILE *file;
	long long int n;

	file = fopen(argv[1], "r");
	while (fgets(buff, 1024, file))
	{
		if (strlen(buff) <= 20)
			n = convert_number(buff);
		factoring_number(n);
	}
	fclose(file);
	return (0);
}
