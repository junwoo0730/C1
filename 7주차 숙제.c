/*
#include <stdio.h>
#include <stdlib.h>


int main() 
{
	int a, b;
	printf("정수 두개를 입력하세요\n");
	scanf ("%d, %d", &a, &b);
	if (a%2 == 0 && b%2 == 0)
	{
		printf ("%d", a*b);
	}
	else if (a%2 != 0 && b%2 != 0)
	{
		printf ("%d", a+b);
	}
	else
	{
		printf ("%d", a-b);
	}
	return 0;
}
*/
/*
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a, b, c;
	printf ("학년, 반, 번호를 순서대로 입력하세요\n");
	scanf ("%d, %d, %d", a, b, c);
	if (c-9 < 1)
	{
		printf ("%d%d0%d", a, b, c);
	}
	else
	{
		printf ("%d%d%d%d", a, b, c);
	}
}
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a, b;
	printf ("1부터 20까지의 정수중 2개를 한개 입력하세요\n");
	scanf ("%d, %d", &a, &b);
	if (20-a > 20-b)
	{
		printf ("A엘리베이터");
	}
	else if (20-b > 20-a)
	{
		printf ("B엘리베이터");
	}
}
