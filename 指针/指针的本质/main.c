#include<stdio.h>

int main()
{
	int i = 5;
	int *p = &i;//*取值 &取地址
	printf("i=%d\n", i);
	printf("*p=%d\n", *p);
	return 0;
}