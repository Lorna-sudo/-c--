#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int i;//申请多大空间
	scanf("%d", &i);
	char* p;
	p = (char*)malloc(i);//malloc申请空间的单位是字节
	gets(p);
	strcpy(p, "malloc success");
	puts(p);
	free(p);//释放空间
	p = NULL;//如果不把p置为NULL，把p成为野指针
	return 0;
}
