#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a, b, c;
	scanf("%d%d", &a, &b);
	c = a%b;          //����Ҫ���� a��b�Ĵ�С������治��Ҫ�жϣ�
	while (c != 0)
	{
		a = b;
		b = c;
		c = a%b;
    }
	printf("%d\n", b);
	system("pause");
    return 0;
}