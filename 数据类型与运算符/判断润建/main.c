#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//��ջ�����
int main() {
	int i,ret;
	while (rewind(stdin),(ret=scanf("%d", &i))!=EOF)
	{
		printf("i=%d\n", i);
	}
	return 0;
}