#define _CRT_SECURE_NO_WAENINGS
#include<stdio.h>

void print(char d[])//c��ֵ��ֵ��d��c��ʵ�Σ�d���β�
{
	int i = 0;
	while (d[i] != '\0')//�ж��ַ��Ƿ����
	{
		printf("%c", d[i]);
		i++;
	}
}
int main()
{
	char c[10] = "hello";//�ַ�����һ��������
	print(c);
	return 0;
}