#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	char c[5] = { "how" };
	char d[6] = { 'h','e','l','l','o' };
	printf("%s-----%s\n", c, d);//printf��%s�����д�����ַ���������ַ�������
	char e[20],f[20];
	scanf("%s%s", e,f);
	printf("%s----%s\n", e,f);
}