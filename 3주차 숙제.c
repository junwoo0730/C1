/*
#include <stdio.h>
#include <stdlib.h>


int main() 
{	int a = 0;
	int b = 0;
	double c = 0;
	double d = 0;
	scanf ("%d", &a);
	scanf ("%d", &b);
	printf ("%d, %d\n", a, b);
	scanf ("%d %d", &a, &b);
	printf ("%d, %d\n", a, b);
	scanf ("%lf", &c);
	scanf ("%lf", &d);
	printf ("%.1lf %.1lf\n", c, d);
	scanf ("%lf %lf", &c, &d);
	printf ("%.1lf %.1lf\n", c, d);
	return 0;
}
*/
/*
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	double d = 0;
	double e = 0;
	double f = 0;
	printf ("�г�, ��, ��ȣ�� �Է��ϼ���.\n");-
	
	scanf ("%d %d %d", &a, &b, &c);
	printf ("%d�г� %d�� %d��\n", a, b, c);
	printf ("���� ��, ��, ���� �Է��ϼ���.\n");
	scanf ("%d %d %d", &a, &b, &c);
	printf ("%d�� %d�� %d��\n", a, b, c);
	printf ("�н��� ���̿� ��� ������ ���Ը� �Է��ϼ���.\n");
	scanf ("%lf %lf", &d, &e);
	printf ("�н��� ���� : %.3lf m, ��� ������ ���� : %.3lf kg\n", d, e);
	printf ("����� �Է��ϼ���.\n");
	scanf ("%lf", &f); 
	printf ("�Ҹ��� 1�ʿ� %.5lfm�� ���޵˴ϴ�.", f*1.725);
	return 0;
}
*/
/*
#include <stdio.h>
#include <stdlib.h>

int main()
{	
	char a;
	char b[5];
	char c = '|';
	char d = '\"';
	char e = '\%';
	printf ("���� �ϳ��� �Է��ϼ���.\n");
	scanf ("%c", &a);
	printf ("%c\n", a);
	printf ("5���� ���ĺ����� ������ �ܾ �Է��ϼ���.\n");
	scanf ("%s", &b);
	printf ("%s\n", b);
	printf ("\n\t"); 
	scanf ("%c %c %c", c, d, e);
	printf ("%c %c %c", c, d, e);
	return 0;
}
*/
#include <stdio.h>
#include <stdlib.h>
int main ()
{	
	char a;
	char g[5];
	char b;
	char c;
	char d;
	char e;
	char f;
	char h[10];
	char i[10];
		
	scanf ("%c", &a);
	scanf ("%s", &g);
	scanf ("%c", &b);
	scanf ("%c", &c);
	scanf ("%s", &h);
	scanf ("%c", &d);
	scanf ("%c", &e);
	scanf ("%s", &i);
	scanf ("%c", &f);
	printf ("%c%s%c\n%c%s%c\n%c%s%c", a, g, b, c, h, d, e, i, f );
	return 0;
}

