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
	printf ("��Ƽ�� �⽺");
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
	printf ("���� ��¥�� %d�� %d�� %d�� �Դϴ�.\n", a, b, c);
	printf ("���� �ð��� %d�� %d�� %d�� �Դϴ�.\n", d, e, f);
	printf ("�غ���3cm, ���̰� 4cm�� �ﰢ���� ���̴� %d%s�Դϴ�.\n", g, " cm��");
	printf ("������ 9cm�� ���� ���̴� %.2f, �ѷ���%d �Դϴ�.\n ", h, i );
	printf ("12378m�� %.3f km�Դϴ�.\n",j );
	printf ("34.536 kg��%d g�Դϴ�.\n", k);
	printf ("34.5%%��%d�� %dǬ %d�� �Դϴ�. ", l, m, n);
	return 0;
}
