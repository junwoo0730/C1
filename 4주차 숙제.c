/*
#include <stdio.h>
#include <stdlib.h>



int main()
{	
	int a;
	printf ("�� �ڸ� �ڿ����� �Է��ϼ���.\n");
	scanf ("%d", &a);
	printf ("%d\n", a/10+a%10);
	printf ("�� �ڸ� �ڿ����� �Է��ϼ���.\n");
	scanf ("%d", &a);
	printf ("�� : %d, �� : %d", a%100/10, a/100*a/10*a%100);
	printf ("������ �ڿ����� �Է��ϼ���.\n");
	scanf ("%d", &a);
	printf ("6");
	return 0;
}
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{	
	double gram;
	double cm;
	double cm2;
	double kg; 
	int a;
	int b;
	printf ("������ ����(g)�� �Է��ϼ���.\n");
	scanf ("%lf", &gram);
	printf ("kg : %lf, ton : %lf\n", gram/1000, gram/1000000);
	printf ("Ű(cm)�� �Է��ϼ���.\n");
	scanf ("%lf", &cm);
	printf ("%lf m\n", cm/100);
	printf ("�簢���� ���ο� ����(mm)�� ���ʴ�� �Է��ϼ���.\n");
	scanf ("%d %d", &a, &b);
	printf ("���� : %d cm��, �ѷ� : %d cm\n", a*b/10, 2*a+2*b);
	printf ("���� �������� : %d, ���� �� �� : %d\n", 34/7, 34%7);
	printf ("�������� ���� : %lf ��\n", 14.7);
	printf ("ö�� 100m�� ���� : %lf kg", 10000*1.35);
	return 0;
}
