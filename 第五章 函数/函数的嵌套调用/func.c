#include "func.h"

//printstarδ������Ǻ���ʵ��
int printstar(int i)//i���β�
{
	printf("*****************\n");
	printf("printstar %d\n", i);
	return i + 3;
}
//print_message��������
void print_message()//���Ե���printstar
{
	printf("how do you do\n");
	printstar(3);
}