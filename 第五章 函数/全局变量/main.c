#include<stdio.h>
#include<stdlib.h>

int i = 10;//�ں�����ı�����ȫ�ֱ��������Ը��Կɲ���ȫ�ֱ���
void print(int a)
{
	printf("printf i=%d\n", i);
}
int main()
{
	printf("main i=%d\n", i);
	i = 5;
	system("pause");
	return 0;
}
