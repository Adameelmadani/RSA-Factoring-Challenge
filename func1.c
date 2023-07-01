#include "main.h"

/**
  * convert_number - convert it
  * @buff: buff
  * Return: long long int
  */
long long int convert_number(char *buff)
{
	int len = strlen(buff);
	long long int n = 0, i = 0, a = 1;

	a = pow(10, len - 2);
	while (buff[i] != '\n')
	{
		n = n + (buff[i] - '0') * a;
		a = a / 10;
		i++;
	}
	return (n);
}
