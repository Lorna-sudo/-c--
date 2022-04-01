#include<stdio.h>

int main() {
	int a[3] = { 2,7,8 };
	int* p;
	int j;
	p = a;//让指针变量P指向数组的开头
	j = *p++;//j=*p,(*p)++,第一步：任何时候都是把++去掉，第二步：看优先级是否高于++
	printf("a[0]=%d,j=%d,*p=%d\n", a[0], j, *p);//2 2 7
	j = p[0]++;//j=p[0];p[0]++;
	printf("a[0]=%d,j=%d,*p=%d\n", a[0], j, *p);//2 7 8
	return 0;
}