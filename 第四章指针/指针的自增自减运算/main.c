#include<stdio.h>

int main() {
	int a[3] = { 2,7,8 };
	int* p;
	int j;
	p = a;//��ָ�����Pָ������Ŀ�ͷ
	j = *p++;//j=*p,(*p)++,��һ�����κ�ʱ���ǰ�++ȥ�����ڶ����������ȼ��Ƿ����++
	printf("a[0]=%d,j=%d,*p=%d\n", a[0], j, *p);//2 2 7
	j = p[0]++;//j=p[0];p[0]++;
	printf("a[0]=%d,j=%d,*p=%d\n", a[0], j, *p);//2 7 8
	return 0;
}