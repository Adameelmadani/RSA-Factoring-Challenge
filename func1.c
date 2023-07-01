#include "main.h"

long long int convert_number(char *buff)
{
	/*len = strlen(buff);*/
	long long int n = 0, i = 0, a = 1;
	/*
	char *my_str = malloc(sizeof(char) * 2);

	my_str[0] = 'a';
	my_str[1] = '\0';*/

	while (buff[i] != '\n')
	{
		/*my_str[0] = buff[i];*/
		n = n + (buff[i] + '0') * a;
		a = a * 10;
		i++;
	}
	free(my_str);
	return (n);
}
