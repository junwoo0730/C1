/*
#include <stdio.h>
#include <stdlib.h>



int main() 
{	
	printf ("나의 이름은 %s 입니다.\n", "조준우");
	printf ("나는 %d살 입니다.\n", 13);
	printf ("나의 혈액형은 %c입니다.\n", 'O');
	printf ("나의 시력은 %.1f/%.1f입니다.\n", 0.5, 0.4);
	printf ("나는 %d살 입니다.\n", 2*10);
	printf ("나의 혈액형은 %d입니다.\n", 'A');
	return 0;
}
*/
/*
#include <stdio.h>
#include <stdlib.h>
void main ()
{
	int grade = 6;
	int class = 3;
	int number = 22;
	printf ("%d학년 %d반 %d번", grade, class, number);
	return 0;
}
*/
/*
#include <stdio.h>
#include <stdlib.h>
void main()
{
	int a = 2019;
	int b = 3;
	int c = 3;
	float d = 3.141592;
	float e = 42.195;
	printf ("%d년 %d월 알파고 승리\n", a, b);
	printf ("%dD 프린터로 집 짓기\n", c);
	printf ("원주율 = %.2f\n", d);
	printf ("%.3f km 마라톤", e);
	return 0;
}
*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a = 153;
	int b = -153;
	float c = 42.195;
	float d = -42.195;
	char e = 'A';
	char f = 'a';
	int g = 255;
	printf ("정수 %d과 %d\n", a, b);
	printf ("실수 %.3f 와 %.3f\n", c, d);
	printf ("문자 \'%c\'와 \'%c\'\n", e, f);
	printf ("문자열 \"%s\"와 \"%s\"\n", "Artificial Intelligence", "마빈 민스키");
	printf ("자연수 255를10진수로 %d, 8진수로 %o, 16진수로 %x", g, g, g);
	return 0;
}
