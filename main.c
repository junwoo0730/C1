/*
#include <stdio.h>
#include <stdlib.h>



int main() {
	if (0)
	{
		printf ("True \t 참\n");
		printf ("응\t맞아\n");
	}
	else 
	{
		printf ("False\t거짓\n");
		printf ("아니\t아니야\n");
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
		printf ("%d는 %d보다 크다\n", a, b);
	}
	else
	{
		printf ("%d는 %d보다 크지 않다\n", a, b);
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
		printf ("조건식1 실행\n");
	}
	else if (rnd > 750)
	{
		printf ("조건식2 실행\n");
	}
	else if (rnd > 900)
	{
		printf ("조건식3 실행\n");
	}
	else if (rnd > 1000)
	{
		printf ("조건식4 실행\n");
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
	
	printf ("10000 미만 정수 입력 : ");
	scanf ("%d", &num);
	
	if (num < 10)
	{
		printf ("한 자리 수\n");
	}
	else if (num < 100)
	{
		printf ("두 자리 수\n");
	}
	else if (num < 1000)
	{
		printf ("세 자리 수\n");
	}
	else if(num < 10000)
	{
		printf ("네 자리 수\n");
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
	
	printf ("정수를 입력하세요 : ");
	scanf ("%d", &a);
	if (a > 0)
	{
		printf ("%d : 양수\n", a);
	}
	else if (a == 0)
	{
		printf ("%d : 0\n", a);		
	}
	else
	{
		printf ("%d : 음수\n", a);
	}
	if (a%2 == 0)
	{
		printf ("%d : 짝수\n", a);
	}
	else
	{
		printf ("%d : 홀수\n", a);
	}
	if (a == 0)
	{
		printf ("%d : 3의 배수가 아니다\n\n", a);
	}
	else if (a%3 == 0)
	{
		printf ("%d : 3의 배수\n\n", a);
	}
	else
	{
		printf ("%d : 3의 배수가 아니다\n\n", a);	
	}
	
	printf ("실수를 입력하세요 : ", b);
	scanf ("%lf", &b);
	if (a > 0)
	{
		printf ("절대값 : %lf", b);
	}
	else
	{
		printf ("절대값: %lf", -1.0 * b);
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
	
	
	printf ("정수 두 개를 입력하세요 : ");
	scanf ("%d, %d", &a, &b);
	if (a > b)
	{
		if (a%b == 0)
		{
			printf ("나누어 떨어진다\n");
		}
		else
		{
			printf ("나누어 떨어지지 않는다\n");
		}
	}
	else
	{
		if (b%a == 0)
		{
			printf ("나누어 떨어진다\n");
		}
		else
		{
			printf ("나누어 떨어지지 않는다\n");
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
	
	printf ("실수 세 개를 입력하세요 : ");
	scanf ("%lf, %lf, %lf, %lf, %lf", &a, &b, &c, &d, &e);
	if (a > b && a > c && a > d && a > e)
	{
		printf ("%lf가 가장 크다", a);
	}
	else if (b > a && b > c && b > d && b > e)
	{
		printf ("%lf가 가장 크다", b);
	}
	else if (c > a && c > b && c > d && c > e)
	{
		printf ("%lf가 가장 크다", c);
	}
	else if (d > a && d > b && d > c && d > e)
	{
		printf ("%lf가 가장 크다", d);
	}
	else if (e > a && e > b && e > c && e > d)
	{
		printf ("%lf가 가장 크다", e);	
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
	printf ("자동차 좌석 수를 입력하세요 : ");
	scanf ("%d", &a);
	if (a == 2 || a == 5 || a == 7 || a == 9 || a == 12)
	{
		if (a == 2)
		{
			printf ("스포츠카");
	    }
	    else if (a == 5)
	    {
	    	printf ("승용차");
		}
		else if (a == 7)
		{
			printf ("SUV");
		}
		else if (a == 9)
		{
			printf ("승합차");
		}
		else if (a == 12)
		{
			printf ("미니버스");
		}
	}
	else
	{
		printf ("입력 오류");
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
	printf ("정수 2개를 입력하세요 : ");
	scanf ("%d, %d", &a, &b);
	if (a%2 == 0 && a%3 == 0)
	{
		printf ("공배수가 맞다\n");
	}
	else 
	{
		printf ("공배수가 아니다\n");
	}
	if (12%a == 0 && 30%a == 0)
	{
		printf ("공약수가 맞다");
	}
	else 
	{
		printf ("공약수가 아니다");
	}
	return 0;
}
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a, b;
	printf ("정수 2개를 입력하세요 : ");
	scanf ("%d, %d", &a, &b);
	if (a%2 == 0 && b%2 == 0)
	{
		printf ("두 수의 곱 = %d", a*b);
	}
	else if (a%2 != 0 && b%2 != 0)
	{
		printf ("두 수의 합 = %d", a+b);
	}
	else 	
	{
		if (a > b)
		{
			printf ("두 수의 차 = %d", a-b);
		}
		else
		{
			printf ("두 수의 차 = %d", b-a);
		}
	}
	return 0;
}
