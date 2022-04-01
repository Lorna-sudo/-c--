#include<stdio.h>

void print(int b[],int len) {
	int i;
	for (i = 0; i < len; i++)
	{
		printf("a[%d]=%d\n", i, b[i]);
	}
	b[4] = 20;
}
int main() {
	int  j = 10;
	int a[5] = { 1,2,3,4,5 };
	int i = 3;
	//a[5] = 20;
	print(a,5);
	printf("a[4]=%d\n", a[4]);
}