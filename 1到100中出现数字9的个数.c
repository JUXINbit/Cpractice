#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int i = 0;
	int count = 0;
	for (i = 0; i <= 100; i++)
	{
		if (9 == i % 10)    //ģ10���ܿ�����λ���������Ƕ���
			count++;
		if (9 == i / 10)     //ע�⻹�и�90
			count++;
	}
	printf("%d\n", count);
    return 0;
}