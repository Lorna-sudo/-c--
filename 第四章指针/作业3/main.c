#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//malloc���԰���ʵ�ֶ�̬����
int main() {
	int i;
	scanf("%d", &i);//������ռ�
	char* p;//��ȡһ��������
	p = (char*)malloc(i);//malloc����ռ�ĵ�λ���ֽڣ�������ǿ������ת�����о���
	char c;
	scanf("%c", &c);//Ϊ��ȥ����������\n
	gets(p);
	puts(p);
	return 0;
}