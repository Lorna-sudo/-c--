#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//穷举法
int main()
{
	int a, b, c, d,e=0;//10元，5元，2元，1元分别有多少张
	for (a = 1; a <= 9; a++) {//最多9张10块钱
		for (b = 1; b <= 19; b++) {//最多19张5块钱
			for (c = 1; c <= 37; c++) {//最多39张2块，但是10块和5块各有一张，所以2块最多37张
				for (d = 1; d <= 37; d++) {
					if (10*a+5*b+2*c+d ==100&&a+b+c+d==40) {
						e++;
					}
				}
			}
		}
	}
	printf("%d\n", e);
}