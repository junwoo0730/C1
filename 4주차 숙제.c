/*
#include <stdio.h>
#include <stdlib.h>



int main()
{	
	int a;
	printf ("두 자리 자연수를 입력하세요.\n");
	scanf ("%d", &a);
	printf ("%d\n", a/10+a%10);
	printf ("세 자리 자연수를 입력하세요.\n");
	scanf ("%d", &a);
	printf ("합 : %d, 곱 : %d", a%100/10, a/100*a/10*a%100);
	printf ("임의의 자연수를 입력하세요.\n");
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
	printf ("과일의 무게(g)를 입력하세요.\n");
	scanf ("%lf", &gram);
	printf ("kg : %lf, ton : %lf\n", gram/1000, gram/1000000);
	printf ("키(cm)를 입력하세요.\n");
	scanf ("%lf", &cm);
	printf ("%lf m\n", cm/100);
	printf ("사각형의 가로와 세로(mm)를 차례대로 입력하세요.\n");
	scanf ("%d %d", &a, &b);
	printf ("넓이 : %d cm², 둘레 : %d cm\n", a*b/10, 2*a+2*b);
	printf ("받은 쵸코파이 : %d, 남은 빈 병 : %d\n", 34/7, 34%7);
	printf ("현수막의 넓이 : %lf ㎡\n", 14.7);
	printf ("철근 100m의 무게 : %lf kg", 10000*1.35);
	return 0;
}
