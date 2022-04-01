#include<stdio.h>
char* print_stack()
{
	char c[] = "i am print_stack";
	puts(c);
	return c;
}

char* print_malloc()
{
	char* p = (char*)malloc(20);
	strcpy(p, "i am print malloc");
	puts(p);
	return p;
}
int main()
{
	char* p;
	p = print_stack();//栈空间会随着函数的执行结束而释放
	//puts(p);//打印不出来
	p = print_malloc();
	puts(p);
	return 0;
}