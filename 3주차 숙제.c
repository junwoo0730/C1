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
	printf ("학년, 반, 번호를 입력하세요.\n");-
	
	scanf ("%d %d %d", &a, &b, &c);
	printf ("%d학년 %d반 %d번\n", a, b, c);
	printf ("오늘 년, 월, 일을 입력하세요.\n");
	scanf ("%d %d %d", &a, &b, &c);
	printf ("%d년 %d월 %d일\n", a, b, c);
	printf ("털실의 길이와 사과 상자의 무게를 입력하세요.\n");
	scanf ("%lf %lf", &d, &e);
	printf ("털실의 길이 : %.3lf m, 사과 상자의 무게 : %.3lf kg\n", d, e);
	printf ("기온을 입력하세요.\n");
	scanf ("%lf", &f); 
	printf ("소리가 1초에 %.5lfm씩 전달됩니다.", f*1.725);
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
	printf ("문자 하나를 입력하세요.\n");
	scanf ("%c", &a);
	printf ("%c\n", a);
	printf ("5개의 알파벳으로 구성된 단어를 입력하세요.\n");
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

