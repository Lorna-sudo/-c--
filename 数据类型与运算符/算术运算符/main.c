#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	int a = 4 + 5 * 2 - 6 / 3 + 11 % 4;
	printf("%d\n", a);
	scanf("%d", &a);
	while (a != 0) {
		printf("%d\n", a % 10);
		a = a / 10;
	}
	
}