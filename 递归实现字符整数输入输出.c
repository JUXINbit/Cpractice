#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>


void binary_sign(unsigned int n)
{
	if (n != 0)
	{
		binary_sign(n / 10);
		printf("%c ", n % 10 + '0');           //�ݹ�ʵ����������  ����ַ�
	}
	if (n == 0)
		return 0;
}
int main()
{
	int num;
	printf("���������֣� ");
	scanf("%d", &num);
	binary_sign(num);
	return 0;
}

void binary_num(char arr[],int len)
{
	int i = 0;
	int sum = 0;
	int num=10000;
	for (i = 0; i < len; i++)
	{
		sum = sum + (arr[i]-'0') * num;      //�����ַ���  �������
		num = num / 10;
	}
	printf("%d\n", sum);
}
int main()
{
	char arr[] = "12345";
	int len = strlen(arr);
	binary_num(arr, len);
	return 0;
}