#include"func.h"

int main()
{
	int a = 10;
	a = printstar(a);//printstar函数调用
	print_message(a);//调用print_message函数调用
	printstar(a);
	return 0;
}