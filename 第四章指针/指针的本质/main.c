#include<stdio.h>

int main()
{
	int i = 5;
	int *p = &i;//*ȡֵ &ȡ��ַ
	printf("i=%d\n", i);
	printf("*p=%d\n", *p);
	return 0;
}