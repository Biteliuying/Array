#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int i, a[10];
	for (i = 0; i <= 9; i++)
	{
		a[i] = i;
	}
	for (i = 0; i <= 9; i++)
	{
		printf("a[%d]=%d\n", a[i], i);
	}
}