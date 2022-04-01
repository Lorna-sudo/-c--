#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
//char strcpy(char to ocnst chat from)
//有const修饰的，可以放一个字符串常量
int main()
{
	char c[20] = "luona";
	printf("数组c内的字符串长度等于%d\n", strlen(c));
	char d[20];
	strcpy(d, "study");//有const修饰的，可以放一个字符串常量
	puts(d);
	//strcmp 两个字符串比较时，比的是Ascll码值
	int ret = strcmp("how", "hello");
	printf("两个字符串比较后的结果=%d\n",ret);
	//strcat,后面的字符填到前面的字符串里面，且目标数组能够容纳拼接后的字符串
	strcat(c, d);
	puts(c);
	return 0;
}