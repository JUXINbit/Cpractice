#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int is_prime(int num)
{
	int i; 
	for (i = 2; i <= num - 1; i++)
	{ 
		if (num%i == 0)
			return 0;  //��ֹѭ�� �Ѻ�������ֵ����������
	}
	return 1;
}

int main()
{
	int n; 
	printf("������һ������");
	scanf("%d", &n);
	printf("%d\n", is_prime(n));
    return 0;
}