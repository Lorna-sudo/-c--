#include "func.h"

//printstar未定义就是函数实现
int printstar(int i)//i是形参
{
	printf("*****************\n");
	printf("printstar %d\n", i);
	return i + 3;
}
//print_message函数定义
void print_message()//可以调用printstar
{
	printf("how do you do\n");
	printstar(3);
}