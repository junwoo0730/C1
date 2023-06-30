/*
#include <stdio.h>
#include <stdlib.h>


int main() {
	int a, b;
	
	a = 23;
	b = 24;
	printf ("%d\n", a>b);
	printf ("%d\n", a<b);
	
	return 0;
}
*/
/*
#include <stdio.h>
#include <stdlib.h>
int main()
{
	printf ("%d\n", 10 > 5 && 8 < 3);
	printf ("%d\n", 10 > 5 || 8 < 3);
	printf ("%d\n", !(10>8));
	return 0;
}
*/
/*
#include <stdio.h>
#include <stdlib.h>
int main ()
{
	int res;
	
	res = 0 && 0;
	printf ("%d\n", res);
	res = 0 && 1;
	printf ("%d\n", res);
	res = 1 && 0;
	printf ("%d\n", res);
	res = 1 && 1;
	printf ("%d\n", res);
	
	res = 0 || 0;
	printf ("%d\n", res);
	res = 0 || 1;
	printf ("%d\n", res);
	res = 1 || 0;
	printf ("%d\n", res);
	res = 1 || 1;
	printf ("%d\n", res);
	scanf ("%d", &res);
	printf ("%d", res%2 == 0);
	return 0;
}
*/
/*
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a;
	scanf ("%d", &a);
	printf ("%d\n", a/7 == 5);
	printf ("%d\n", a%3 == 0);
	printf ("%d\n", !(a%5 == 0));
	printf ("%d\n", a%3 == 0 && a%2 == 0);
	printf ("%d\n", a%4 == 0 || a%7 == 0);
	return 0;
}
*/
/*
#include <stdio.h>
#include <stdlib.h>
int main ()
{	
	int a;
	int b;
	int c;
	printf ("\"천재는 1%%의 영감과 99%%의 노력으로 이루어진다.\"\n\t-토머스 에디슨\n");
	printf ("정수 1 : ");
	scanf ("%d", &a);
	printf ("정수 2 : ");
	scanf ("%d", &b);
	printf ("\n%d+%d = %d\n%d-%d = %d\n%d*%d = %d\n%d/%d = %d\n", a, b, a+b, a, b, a-b, a, b, a*b, a, b, a/b);
	printf ("세자리 정수를 입력하세요.\n");
	scanf ("%d", &c);
	printf ("%d+%d+%d = %d\n", c/100, (c/10)-(c/100)*10, c%10, c/100+((c/10)-(c/100)*10)+c%10);
	printf ("%d*%d*%d = %d", c/100, (c/10)-(c/100)*10, c%10, (c/100)*((c/10)-(c/100)*10)*(c%10));
	return 0;
}
*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
	printf ("%d\n", 5000*2 > 1000*15);
	printf ("%d\n", 1000/1 + 100 == 1000/3);
	printf ("%d\n", 5000 >= 500*5 + 1000*2);
	printf ("%d", 10000 > 2000*4 || 5000>2000*3);
}
