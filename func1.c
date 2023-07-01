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

/**
  * factoring_number - factoring number
  * @n: number
  */
void factoring_number(long long int n)
{
	long long int p, a, b;

	p = prime_n(n);
	if (p != -1)
	{
		a = p;
		b = n / p;
	} else
	{
		a = 1;
		b = n;
	}
	printf("%lld=%lld*%lld\n", n, b, a);
}
