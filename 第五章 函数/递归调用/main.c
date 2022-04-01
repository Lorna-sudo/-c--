#include<stdio.h>


int f(int n)
{
	return n* f(n - 1);
}
int main()
{
	int n = 5;
	int result = f(n);
	printf("result=%d\n", result);
}