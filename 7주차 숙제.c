/*
#include <stdio.h>
#include <stdlib.h>


int main() 
{
	int a, b;
	printf("���� �ΰ��� �Է��ϼ���\n");
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
	printf ("�г�, ��, ��ȣ�� ������� �Է��ϼ���\n");
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
	printf ("1���� 20������ ������ 2���� �Ѱ� �Է��ϼ���\n");
	scanf ("%d, %d", &a, &b);
	if (20-a > 20-b)
	{
		printf ("A����������");
	}
	else if (20-b > 20-a)
	{
		printf ("B����������");
	}
}
