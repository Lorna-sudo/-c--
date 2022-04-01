#include<stdio.h>


//数组名作为实参传递给子函数时，是弱化为指针的
void change(char *d)
{
	*d = 'H';
	*(d+1) = 'E';
	d[2] = 'L';
}
int main() {
	char c[10] = "hello";
	change(c);
	puts(c);
	return 0;
}