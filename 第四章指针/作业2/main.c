#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


//������д
int main()
{
	int n;
	scanf("%d\n", &n);//������Ҫ������ٸ�Ԫ��
	int arr[100];
	int i;
	for (int i = 0; i < n; i++) {
		
		scanf("%d\n", &arr[i]);//������������������
	}
	int count = 0;
	for (i = 0; i < n; i++) {//ͳ��2���ֵĴ���
		if (arr[i] = 2)
		{
			count++;
		}
	}
	printf("%d\n", count);
}