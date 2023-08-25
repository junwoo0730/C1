/*
#include <stdio.h>
#include <stdlib.h>

int plus (int num1, int num2);
int minu (int num1, int num2);
int mult (int num1, int num2);
double divi (int num1, int num2);

void main() 
{
	int a, b, num;
	double num1;
	scanf ("%d, %d", &a, &b);
	num = plus (a, b);
	printf ("%d\n", num);
	num = minu (a, b);
	printf ("%d\n", num);
	num = mult (a, b);
	printf ("%d\n", num);
	num1 = divi (a, b);
	printf ("%lf\n", num1);
}

int plus (int num1, int num2)
{
	return num1 + num2;
}
int minu (int num1, int num2)
{
	return num1 - num2;
}
int mult (int num1, int num2)
{
	return num1 * num2;
}
double divi (int num1, int num2)
{
	return num1 * 1.0 / num2;
}
*/
/*
#include <stdio.h>
#include <stdlib.h>

int Sum (int n);

void main()
{
	int n;
	scanf ("%d", &n);
	int a = Sum (n);
	printf ("%d", a);
}

int Sum (int n)
{	
	int sum = 0, i;
	for (i = 1; i <= n; i++)
	{
		sum = sum + i;
	}
	return sum;
}
*/
/*
#include <stdio.h>
#include <stdlib.h>

void Divisor (int n);

void main ()
{
	int n;
	scanf ("%d", &n);
	Divisor (n);
}

void Divisor (int n)
{
	int i, sum;
	for (i = 1; i <= n; i++)
	{
		sum = n % i;
		if (sum == 0)
		{
			printf ("%d ", i);
		}
	}
}
*/
#include <stdio.h>
#include <stdlib.h>

int ReverseNum (int n);

void main()
{
	int n;
	scanf ("%d", &n);
	printf ("%d", ReverseNum (n));
}

int ReverseNum (int n)
{
	int sum;
	while (1)
	{
		sum += n % 10;
		n /= 10;
		if (n > 0)
			sum *= 10;
		else
			break;
		 
	}
	return sum;
}
