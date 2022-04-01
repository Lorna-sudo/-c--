#include<stdio.h>

int main() {
	char* p = "hello";//把字符串常量"hello"的首地址赋给P
	char c[10] = "hello";//等价于strcpy(c,"hello")
	printf("c[0]=%c\n", c[0]);
	c[0] = 'H';
	printf("p[0]=%c\n", p[0]);
	//p[0] = 'H';//不可以对常量数据（只可读不可写)进行修改
	p = //将字符串world的地址赋给P
	//c = "world";//非法
	puts(p);
	return 0;
}