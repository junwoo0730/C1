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
	printf ("숫자를 하나 입력해주세요. : ");
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
	printf ("양쪽 시력을 입력해주세요. : ");
	scanf ("%f, %f", &eye_r, &eye_l);
	printf ("오른쪽 시력 : %f\n왼쪽 시력 : %f\n", eye_r, eye_l);
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
	printf ("학년, 반, 번호: ");
	scanf ("%d, %d, %d", &a, &b, &c);
	printf ("%d학년 %d반 %d번\n", a, b, c);
	printf ("아파트 동,호수: ");
	scanf ("%d, %d", &d, &e);
	printf ("%d동 %d호\n", d, e);
	printf ("키, 몸무게, 혈액형: ");
	scanf ("%lf, %lf, %c", &f, &g, &h);
	printf ("%.1lfcm, %.1lfkg, %c형", f, g, h);
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
	printf ("나이를 입력하세요 : ");
	scanf ("%d", &a);
	printf ("당신의 나이는 %d살입니다.\n", a);
	printf ("학년을 입력하세요 : ");
	scanf ("%d", &b);
	printf ("당신의 학년은 %d학년 입니다.\n", b);
	printf ("키를 입력하세요 : ");
	scanf ("%lf", &c);
	printf ("당신의 키는 %.1lfcm 입니다.\n", c);
	printf ("마라톤의 코스의 길이 : ");
	scanf ("%f", &d);
	printf ("마라톤 코스의 길이는 %.3f km 입니다.", d);
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
	printf ("자연수를 입력하세요 : ");
	scanf ("%d", &a);
	scanf ("%d", &b);
	printf ("%d, %d\n", a, b);
	printf ("실수를 입력하세요 :  ");
	scanf ("%lf %lf", &c, &d);
	printf ("%lf, %lf\n", c, d);
	return 0;		
}
