#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


//增量编写
int main()
{
	int n;
	scanf("%d\n", &n);//接下来要输入多少个元素
	int arr[100];
	int i;
	for (int i = 0; i < n; i++) {
		
		scanf("%d\n", &arr[i]);//如何往数组里读入数据
	}
	int count = 0;
	for (i = 0; i < n; i++) {//统计2出现的次数
		if (arr[i] = 2)
		{
			count++;
		}
	}
	printf("%d\n", count);
}