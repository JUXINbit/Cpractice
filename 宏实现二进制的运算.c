
//ʹ�ú궨��ʵ�ֶ�������������λ��ż��λ�Ľ���
#define _CRT_SECURE_NO_WARNINGS 1
#define CHANG(X)\
	((((X)& 0X5555555) << 1) | (((X)&(0Xaaaaaaaa)) >> 1))
#include<stdio.h>
int main()
{
		int a = 17;
		printf("%d\n", CHANG(a));
	    return 0;
}
