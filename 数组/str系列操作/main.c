#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
//char strcpy(char to ocnst chat from)
//��const���εģ����Է�һ���ַ�������
int main()
{
	char c[20] = "luona";
	printf("����c�ڵ��ַ������ȵ���%d\n", strlen(c));
	char d[20];
	strcpy(d, "study");//��const���εģ����Է�һ���ַ�������
	puts(d);
	//strcmp �����ַ����Ƚ�ʱ���ȵ���Ascll��ֵ
	int ret = strcmp("how", "hello");
	printf("�����ַ����ȽϺ�Ľ��=%d\n",ret);
	//strcat,������ַ��ǰ����ַ������棬��Ŀ�������ܹ�����ƴ�Ӻ���ַ���
	strcat(c, d);
	puts(c);
	return 0;
}