#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//malloc可以帮助实现动态数组
int main() {
	int i;
	scanf("%d", &i);//申请多大空间
	char* p;//读取一个整型数
	p = (char*)malloc(i);//malloc申请空间的单位是字节，不进行强制类型转换会有警告
	char c;
	scanf("%c", &c);//为了去除缓冲区里\n
	gets(p);
	puts(p);
	return 0;
}