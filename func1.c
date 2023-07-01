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
  * prime_n - prime numbers
  * @n: int l l
  * Return: return n
  */
long long int prime_n(long long int n)
{
	long long int list[] = {2, 3, 5, 7, 11};
	long long int i = 0;

	for (i = 0; i < 5; i++)
	{
		if (n % list[i] == 0)
		{
			return (list[i]);
		}
	}
	return (-1);
}
/**
  * factoring_number - factoring number
  * @n: number
  */
void factoring_number(long long int n)
{
	long long int i = 0, p, a, b;

	p = prime_n(n);
	if (p != -1)
	{
		a = p;
		b = n / p;
	} else
	{
		for (i = 0; (prime_n(i) == -1) && (i < n / 11); i++)
		{
			if (n % i == 0)
			{
				a = i;
				b = n / i;
				break;
			}
		}
	}
	printf("%lld=%lld*%lld\n", n, b, a);
}
