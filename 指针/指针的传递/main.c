#include<stdio.h>

void change(int *j) {//j称形参
	*j = 5;
}

int main(){
	int i = 10;//i是局部变量
	printf("before change i=%d\n", i);
	change(&i);//函数调用时，把i称实参
	printf("after change i=%d\n", i);
	return 0;
}