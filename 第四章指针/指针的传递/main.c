#include<stdio.h>

void change(int *j) {//j���β�
	*j = 5;
}

int main(){
	int i = 10;//i�Ǿֲ�����
	printf("before change i=%d\n", i);
	change(&i);//��������ʱ����i��ʵ��
	printf("after change i=%d\n", i);
	return 0;
}