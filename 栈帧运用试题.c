#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
//void fun()
//{
//	int tmp =10;
//	int* p = (int*)(*(&tmp + 1));
//	*(p - 1) = 20;
//}
//int main()
//{
//	int a = 0;                     //�ڸñ������»ᱨ��
//	fun();
//	printf("a=%d\n", a);             //�@��Ľ����20����ջ֡ͼ���Ժ����׵õ���
//	return 0;
//}


int main()
{
	int a = 0;
	char b[5];
	*(int*)(&b + 1) = '1';
	printf("%d\n", a);             //����ջ֡  ��ͼ���
	return 0;
}