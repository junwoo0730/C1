/*
#include <stdio.h>
#include <stdlib.h>

void main() {
	int a;
	double f1;
	float f2;
	char ch;
	
	a = 15;
	f1 = 123.456;
	f2 = 123.456;
	ch = 'A';
	printf ("%d\n", a);
	printf ("%lf\n", f1);
	printf ("%f\n", f2);
	printf ("%c\n", ch);
	return 0;
}
*/
/*
#include <stdio.h>
#include <stdlib.h>
int main ()
{
	int num;
	printf ("���ڸ� �ϳ� �Է����ּ���. : ");
	scanf ("%d", &num);
	printf ("%d\n", num);
	return 0;
}
*/
/*
#include <stdio.h>
#include <stdlib.h>
int main()
{
	float eye_r;
	float eye_l;
	printf ("���� �÷��� �Է����ּ���. : ");
	scanf ("%f, %f", &eye_r, &eye_l);
	printf ("������ �÷� : %f\n���� �÷� : %f\n", eye_r, eye_l);
	return 0;
}
*/
/*
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a;
	int b;
	int c;
	int d;
	int e;
	double f;
	double g;
	char h;
	printf ("�г�, ��, ��ȣ: ");
	scanf ("%d, %d, %d", &a, &b, &c);
	printf ("%d�г� %d�� %d��\n", a, b, c);
	printf ("����Ʈ ��,ȣ��: ");
	scanf ("%d, %d", &d, &e);
	printf ("%d�� %dȣ\n", d, e);
	printf ("Ű, ������, ������: ");
	scanf ("%lf, %lf, %c", &f, &g, &h);
	printf ("%.1lfcm, %.1lfkg, %c��", f, g, h);
	return 0;
}
*/
/*
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int m;
	int cm;
	int g;
	printf ("m : ");
	scanf ("%d", &m);
	cm = m * 100;
	printf ("cm : %d, mm : %d", cm, m*1000);
}
*/
/*
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a;
	int b;
	double c;
	float d;
	printf ("���̸� �Է��ϼ��� : ");
	scanf ("%d", &a);
	printf ("����� ���̴� %d���Դϴ�.\n", a);
	printf ("�г��� �Է��ϼ��� : ");
	scanf ("%d", &b);
	printf ("����� �г��� %d�г� �Դϴ�.\n", b);
	printf ("Ű�� �Է��ϼ��� : ");
	scanf ("%lf", &c);
	printf ("����� Ű�� %.1lfcm �Դϴ�.\n", c);
	printf ("�������� �ڽ��� ���� : ");
	scanf ("%f", &d);
	printf ("������ �ڽ��� ���̴� %.3f km �Դϴ�.", d);
	return 0;
}
*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a;
	int b;
	double c;
	double d;
	printf ("�ڿ����� �Է��ϼ��� : ");
	scanf ("%d", &a);
	scanf ("%d", &b);
	printf ("%d, %d\n", a, b);
	printf ("�Ǽ��� �Է��ϼ��� :  ");
	scanf ("%lf %lf", &c, &d);
	printf ("%lf, %lf\n", c, d);
	return 0;		
}
