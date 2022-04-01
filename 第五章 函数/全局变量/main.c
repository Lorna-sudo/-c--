#include<stdio.h>
#include<stdlib.h>

int i = 10;//在函数外的变量叫全局变量，初试复试可不用全局变量
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
