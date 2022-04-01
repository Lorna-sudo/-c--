#define _CRT_SECURE_NO_WAENINGS
#include<stdio.h>

void print(char d[])//c的值赋值给d，c是实参，d是形参
{
	int i = 0;
	while (d[i] != '\0')//判断字符是否结束
	{
		printf("%c", d[i]);
		i++;
	}
}
int main()
{
	char c[10] = "hello";//字符隐含一个结束符
	print(c);
	return 0;
}