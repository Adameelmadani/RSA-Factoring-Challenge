#include "main.h"

/**
  * main - main
  * @argc: arg counter
  * @argv: arg vector
  * Return: return 0 or 1
  */

int main(void)
{
	char *buff[1024];
	FILE *file;
	long long int n;

	fopen(argv[0], "r");
	while (fgets(buff, 1024, file))
	{
		n = convert_number(buff);
		printf("%lld\n", n);
	}
	fclose(file);
	return (0);
}
