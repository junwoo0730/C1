/*
#include <stdio.h>
#include <stdlib.h>



int main() {
	int i;
	
	for (i=1; i<=10; i++)
	{
		printf ("%d 씨큐브코딩\n", i);
	}
	return 0;
}
*/
/*
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n;
	
	for (n=-10; n <= -1; n++)
	{
		printf ("n = %d\n", n);
	}
	printf ("마지막 n = %d\n", n);
	return 0;
}
*/
/*
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n;
	
	for (n=30; n > 20; n--)
	{
		printf ("n = %d\n", n);
	}
	printf ("마지막 n = %d\n", n);
	return 0;
}
*/
/*
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i;
	
	for (i = 0; i < 10; i++)
	{
		printf ("i = %d\n", i);
	}
	printf ("마지막 i = %d\n", i);
}
*/
/*
#include <stdio.h>
#include <stdlib.h>

int main()
{
	for (int i = 0; i < 10; i++)
	{
		printf ("i = %d\n", i);
	}
	printf ("마지막 i = %d\n", i);
	return 0;
}
*/
/*
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i;
	int a = -1;
	for (i = 0; i < 10; i++)
	{	
		a = a*-1;
		printf ("%d ", a);	
	}
}
*/
/*
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i;
	int a = 1;
	for (i = 0; i < 10; i++)
	{
		printf ("%d ", a%2);
		a = a+1;
	}
}
*/
/*
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i;
	int a = 1;
	int b = 1;
	for (i = 0; i < 10; i++)
	{
		printf ("%d ", a*b);
		a = a*-1;
		b = b+1;
	}
}
*/
/*
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i;
	int a;
	int b = 0;
	scanf ("%d", &a);
	for (i = 1; i <= a; i++)
	{
		b = b+i;
	}
	printf ("%d", b);
	return 0;
}
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i;
	int a;
	int b;
	
	scanf ("%d", &a);
	
	for (i = 2; i <= 9; i++)
	{
		b = a*i;
		printf ("%d X %d = %d\n", a, i, b);
	}
	return 0;
}
