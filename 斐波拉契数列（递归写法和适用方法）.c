#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//쳲���������   
//1���ݹ�ʵ�֣�

int fib(int n)
{
	if (n <= 2)
		return 1;
	else
		return fib(n - 1) + fib(n - 2);        //�@����ʵ�ַ�ʽЧ�ʵ���

}
int main()
{
	int n=10;
	int num;
	num=fib(n);
	printf("%d\n", num);
	return 0;
}

//2.ѭ��ʵ�֣�



int fib(int n)
{
	int a = 1;
	int b = 1;
	int c = 1;
	int i = 0;
	for (i = 3; i <= n; i++)
	{
		c = a + b;
		a = b;
		b = c;
	}
	return c;
}
int main()
{
	int n = 10;
	int sum;
	sum = fib(n);
	printf("%d\n", sum);
	return 0;
}
