/*
#include <stdio.h>
#include <stdlib.h>



int main() 
{
	double a;
	double b;
	scanf ("몸무게 : %lf, 키 :  %lf", &a, &b);
	printf ("체질량 지수 : %.3lf", "(a-5)/(b+0.1)*(b+0.1)");
	return 0;
}
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n = 0;
	
	printf ("%d\n", n);
	printf ("%d\n", n += 3);
	printf ("%d\n", n *= 0);
	printf ("%d\n", n += 5);
	printf ("%d\n", n++);
	printf ("%d\n", ++n);
	printf ("%d\n", n % 5);
	printf ("%d\n", --n);
	printf ("%d\n", n--);
	printf ("%d\n", n);
	return 0;
}
