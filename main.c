/*
#include <stdio.h>
#include <stdlib.h>



int main() {
	if (0)
	{
		printf ("True \t ��\n");
		printf ("��\t�¾�\n");
	}
	else 
	{
		printf ("False\t����\n");
		printf ("�ƴ�\t�ƴϾ�\n");
	}
	return 0;
}
*/
/*
#include <stdio.h>
#include <Stdlib.h>

int main()
{
	int a, b, c;
	
	a = 12;
	b = 56;
	c = a > b;
	
	if (c)
	{
		printf ("%d�� %d���� ũ��\n", a, b);
	}
	else
	{
		printf ("%d�� %d���� ũ�� �ʴ�\n", a, b);
	}
	return 0;
}
*/
/*
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	srand (time(NULL));
	
	int rnd = 1100;
	
	printf ("%d\n", rnd);
	
	if (rnd > 500)
	{
		printf ("���ǽ�1 ����\n");
	}
	else if (rnd > 750)
	{
		printf ("���ǽ�2 ����\n");
	}
	else if (rnd > 900)
	{
		printf ("���ǽ�3 ����\n");
	}
	else if (rnd > 1000)
	{
		printf ("���ǽ�4 ����\n");
	}
	return 0;
}
*/
/*
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int num;
	
	printf ("10000 �̸� ���� �Է� : ");
	scanf ("%d", &num);
	
	if (num < 10)
	{
		printf ("�� �ڸ� ��\n");
	}
	else if (num < 100)
	{
		printf ("�� �ڸ� ��\n");
	}
	else if (num < 1000)
	{
		printf ("�� �ڸ� ��\n");
	}
	else if(num < 10000)
	{
		printf ("�� �ڸ� ��\n");
	}
}
*/
/*
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a;
	double b;
	
	printf ("������ �Է��ϼ��� : ");
	scanf ("%d", &a);
	if (a > 0)
	{
		printf ("%d : ���\n", a);
	}
	else if (a == 0)
	{
		printf ("%d : 0\n", a);		
	}
	else
	{
		printf ("%d : ����\n", a);
	}
	if (a%2 == 0)
	{
		printf ("%d : ¦��\n", a);
	}
	else
	{
		printf ("%d : Ȧ��\n", a);
	}
	if (a == 0)
	{
		printf ("%d : 3�� ����� �ƴϴ�\n\n", a);
	}
	else if (a%3 == 0)
	{
		printf ("%d : 3�� ���\n\n", a);
	}
	else
	{
		printf ("%d : 3�� ����� �ƴϴ�\n\n", a);	
	}
	
	printf ("�Ǽ��� �Է��ϼ��� : ", b);
	scanf ("%lf", &b);
	if (a > 0)
	{
		printf ("���밪 : %lf", b);
	}
	else
	{
		printf ("���밪: %lf", -1.0 * b);
	}
	return 0;
}
*/
/*
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a, b;
	
	
	printf ("���� �� ���� �Է��ϼ��� : ");
	scanf ("%d, %d", &a, &b);
	if (a > b)
	{
		if (a%b == 0)
		{
			printf ("������ ��������\n");
		}
		else
		{
			printf ("������ �������� �ʴ´�\n");
		}
	}
	else
	{
		if (b%a == 0)
		{
			printf ("������ ��������\n");
		}
		else
		{
			printf ("������ �������� �ʴ´�\n");
		}
	}
}
*/
/*
#include <stdio.h>
#include <stdlib.h>

int main()
{
	double a, b, c, d, e;
	
	printf ("�Ǽ� �� ���� �Է��ϼ��� : ");
	scanf ("%lf, %lf, %lf, %lf, %lf", &a, &b, &c, &d, &e);
	if (a > b && a > c && a > d && a > e)
	{
		printf ("%lf�� ���� ũ��", a);
	}
	else if (b > a && b > c && b > d && b > e)
	{
		printf ("%lf�� ���� ũ��", b);
	}
	else if (c > a && c > b && c > d && c > e)
	{
		printf ("%lf�� ���� ũ��", c);
	}
	else if (d > a && d > b && d > c && d > e)
	{
		printf ("%lf�� ���� ũ��", d);
	}
	else if (e > a && e > b && e > c && e > d)
	{
		printf ("%lf�� ���� ũ��", e);	
	}
	return 0;
}
*/
/*
#include <stdio.h>
#include <stdlib.h>

int main ()
{
	int a;
	printf ("�ڵ��� �¼� ���� �Է��ϼ��� : ");
	scanf ("%d", &a);
	if (a == 2 || a == 5 || a == 7 || a == 9 || a == 12)
	{
		if (a == 2)
		{
			printf ("������ī");
	    }
	    else if (a == 5)
	    {
	    	printf ("�¿���");
		}
		else if (a == 7)
		{
			printf ("SUV");
		}
		else if (a == 9)
		{
			printf ("������");
		}
		else if (a == 12)
		{
			printf ("�̴Ϲ���");
		}
	}
	else
	{
		printf ("�Է� ����");
	}
	return 0;
}
*/
/*
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a, b;
	printf ("���� 2���� �Է��ϼ��� : ");
	scanf ("%d, %d", &a, &b);
	if (a%2 == 0 && a%3 == 0)
	{
		printf ("������� �´�\n");
	}
	else 
	{
		printf ("������� �ƴϴ�\n");
	}
	if (12%a == 0 && 30%a == 0)
	{
		printf ("������� �´�");
	}
	else 
	{
		printf ("������� �ƴϴ�");
	}
	return 0;
}
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a, b;
	printf ("���� 2���� �Է��ϼ��� : ");
	scanf ("%d, %d", &a, &b);
	if (a%2 == 0 && b%2 == 0)
	{
		printf ("�� ���� �� = %d", a*b);
	}
	else if (a%2 != 0 && b%2 != 0)
	{
		printf ("�� ���� �� = %d", a+b);
	}
	else 	
	{
		if (a > b)
		{
			printf ("�� ���� �� = %d", a-b);
		}
		else
		{
			printf ("�� ���� �� = %d", b-a);
		}
	}
	return 0;
}
