/*
#include <stdio.h>
#include <stdlib.h>


int main( )
{
	printf ("153");
	printf ("\n");
	printf ("42.195");
	printf ("\n");
	printf ("J");
	printf ("\n");
	printf ("u");
	printf ("\n");
	printf ("Apple");
	printf ("\n");
	printf ("스티브 잡스");
	return 0;
}
*/
#include <stdio.h>
#include <stdlib.h>
int main ()
{	int a = 2023;
	int b = 6;
	int c = 15;
	int d = 9;
	int e = 45;
	int f = 40;
	int g = 6;
	float h = 20.25;
	int i = 9;
	float j = 12.378;
	int k = 34536;
	int l = 3;
	int m = 4;
	int n = 5;
	printf ("오늘 날짜는 %d년 %d월 %d일 입니다.\n", a, b, c);
	printf ("현재 시간은 %d시 %d분 %d초 입니다.\n", d, e, f);
	printf ("밑변이3cm, 높이가 4cm인 삼각형의 넓이는 %d%s입니다.\n", g, " cm²");
	printf ("지름이 9cm인 원의 넓이는 %.2f, 둘레는%d 입니다.\n ", h, i );
	printf ("12378m는 %.3f km입니다.\n",j );
	printf ("34.536 kg은%d g입니다.\n", k);
	printf ("34.5%%는%d할 %d푼 %d리 입니다. ", l, m, n);
	return 0;
}
