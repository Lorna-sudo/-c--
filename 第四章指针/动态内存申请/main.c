#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int i;//������ռ�
	scanf("%d", &i);
	char* p;
	p = (char*)malloc(i);//malloc����ռ�ĵ�λ���ֽ�
	gets(p);
	strcpy(p, "malloc success");
	puts(p);
	free(p);//�ͷſռ�
	p = NULL;//�������p��ΪNULL����p��ΪҰָ��
	return 0;
}
