#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int a,b,tmp;
	while (scanf("%d",&a)!=EOF)
	{
		tmp = a % 10;
		b = b * 10 +tmp;
		a = a / 10;
	}
	if (a == b) {
		printf("yes!");
	}
}