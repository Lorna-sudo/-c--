#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//��ٷ�
int main()
{
	int a, b, c, d,e=0;//10Ԫ��5Ԫ��2Ԫ��1Ԫ�ֱ��ж�����
	for (a = 1; a <= 9; a++) {//���9��10��Ǯ
		for (b = 1; b <= 19; b++) {//���19��5��Ǯ
			for (c = 1; c <= 37; c++) {//���39��2�飬����10���5�����һ�ţ�����2�����37��
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