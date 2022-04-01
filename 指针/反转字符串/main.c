#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
int main() {
	char c[100],d[100];
	gets(c);
	//fgets(c, sizeof(c), stdin);
	//int len = strlen(c);
	//c[len - 1] = '0';
	int i, j;
	for (i = strlen(c) - 1, j = 0; i >= 0; i--, j++) {
		d[j] = c[i];
	}
	d[j] = '\0';
	int result = strcmp(c, d);
	if(result < 0) {
		printf("%d\n", -1);
	}
	else if (result > 0) {
		printf("%d\n", 1);
	}
	else {
		printf("%d\n", 0);
	}
	return 0;
}