#include<stdio.h>

int main() {
	char* p = "hello";//���ַ�������"hello"���׵�ַ����P
	char c[10] = "hello";//�ȼ���strcpy(c,"hello")
	printf("c[0]=%c\n", c[0]);
	c[0] = 'H';
	printf("p[0]=%c\n", p[0]);
	//p[0] = 'H';//�����ԶԳ������ݣ�ֻ�ɶ�����д)�����޸�
	p = //���ַ���world�ĵ�ַ����P
	//c = "world";//�Ƿ�
	puts(p);
	return 0;
}