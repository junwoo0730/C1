/*
#include <stdio.h>
#include <stdlib.h>



int main() {
	int a = 20;
	
	a = a+10; 
	printf ("a = %d\n", a);
	a = a*10;
	printf ("a = %d\n", a);
	a = a-10;
	printf ("a = %d\n", a);
	a = a/10;
	printf ("a = %d\n", a);
	return 0;
}
*/
/*
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a, b;
	
	a = 20;
	b = 5;
	
	a += b;
	printf ("a = %d\n", a);
	a *= b;
	printf ("a = %d\n", a);
	a -= b;
	printf ("a = %d\n", a);
	a /= b;
	printf ("a = %d\n", a);
	a %= b;
	printf ("a = %d\n", a);
	return 0; 
}
*/
/*
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a = 10;
	
	a++;
	a++;
	printf ("a = %d\n", a);
	++a;
	++a;
	printf ("a = %d\n", a);
	
	a = 10;
	a--;
	printf ("a = %d\n", a);
	--a;
	printf ("a = %d\n", a);
	int b=10;
	b = a++;
	printf ("%d\n", b);
	b = ++a;
	printf ("%d\n", b);
	return 0;
}
*/
/*
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int num1 = 10;
	int num2 = 20;
	
	int num3 = ++num1 + num2++;
	
	printf ("num1 = %d\n", num1);
	printf ("num2 = %d\n", num2);
	printf ("num3 = %d\n", num3);
	return 0;
}
*/
/*
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a = 20;
	a += 4;
	printf ("a = %d\n", a);
	a /= 2;
	printf ("a = %d\n", a);
	--a;
	printf ("a = %d\n", a);
	a *= a;
	printf ("a = %d\n", a);
	return 0;	
}
*/
/*
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a = 10;
	int b = 2;
	a -= b;
	printf ("a = %d\n", a);
	a *= b;
	printf ("a = %d\n", a);
	a--;
	printf ("a = %d\n", a);
	a /= a;
	printf ("a = %d\n", a);
	a += b;
	printf ("a = %d\n", a);
	a++;
	printf ("a = %d\n", a);
	a -= b;
	printf ("a = %d\n", a);
	return 0;
}
*/
/*
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a, b;
	
	a = 10;
	b = a++;
	printf ("a = %d b = %d\n", a, b);
	b = ++a;
	printf ("a = %d b = %d\n", a, b);
	
	a = 20;
	b = a--;
	printf ("a = %d b = %d\n", a, b);
	b = --a;
	printf ("a = %d b = %d\n", a, b);
	return 0;
}
*/
/*
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int num = 3;
	
	printf ("%d\n", num -= 1);
	printf ("%d\n", --num);
	printf ("%d\n", num--);
	printf ("%d\n", num);
	return 0;
}
*/
/*
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a = 12;
	int b = 3;
	
	a -= b++; 
	printf ("a = %d b = %d\n", a, b);
	a /= --b;
	printf ("a = %d b = %d\n", a, b);
	a += b++;
	printf ("a = %d b = %d\n", a, b);
	a -= ++b;
	printf ("a = %d b = %d\n", a, b);
	a += --b;
	printf ("a = %d b = %d", a, b);
	return 0;
	
}
*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int s;
	int m;
	int h;
	scanf ("%d", &s);
	h = s/3600;
	m = (s-3600*h)/60;
	s %= 60;
	printf ("%d½Ã %dºÐ %d\n", h, m, s);
	return 0;
}
