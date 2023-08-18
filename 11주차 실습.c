/*
#include <stdio.h>
#include <stdlib.h>


int main() {
	int i;
	int j;
	i = 6;
	while (i >= 1)
	{
		printf ("%d«–≥‚ ", i);
		i--;
		j = 1;
		while (j <= 7)
		{
			printf ("%dπ› ", j);
			j++;
		}
		printf ("\n");
	}
	return 0;
}
*/
/*
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i;
	int j;
	for (i = 1; i <= 5; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf ("%d ", j);
		}
		printf ("\n");
	}
	return 0;
}
*/
/*
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i;
	int j;
	for (i = 5; i >= 1; i--)
	{
		for (j = 1; j <= i; j++)
		{
			printf ("%d ", j);
		}
		printf ("\n");
	}
	return 0;
}
*/
/*
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i;
	int j;
	for (i = 5; i > 0; i--)
	{
		for (j = 1; j <= 5; j++)	
		{
			printf ("%d ", j);
		}
		printf ("\n");
	}
	return 0;
}
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i;
	int j;
	for (i = 5; i > 0; i--)
	{
		for (j = i; j > 0; i--)
			printf ("%d ", j);
		}
		printf ("\n");
	}
	return 0;
}
