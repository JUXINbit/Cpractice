#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	int a, b, c, temp;
//	scanf("%d%d%d", &a, &b, &c);//  ע��scanf��������%d�󲻼�\n���������ʱ���ס���ո� ��Ȼ�����
//	if (a > b)
//	{
//		temp = a;
//		a = b;
//		b = temp;
//    }
//	if (a > c)
//	{
//		temp = a;
//		a = c;
//		c = temp;
//	}
//	if (b > c)
//	{
//		temp = b;
//		b = c;
//		c = temp;
//	}
//	printf("%d%d%d\n", a, b, c);
//	return 0;
//}

//�ú������ã�
#include<stdio.h>
int main()
{
	int a, b, c;
	scanf("%d%d%d", &a, &b, &c);
	if (a > b)
	{
		swap(&a, &b);              //ע��ȡ��ַ
	} 
	if (a > c)
	{
		swap(&a, &c);
	}
	if (b > c)
	{
		swap(&b, &c);
	}
	printf("%d%d%d\n", a, b, c);
	return 0;
}
int swap(int* p1, int* p2)      //ʹ��ָ��
{
	int temp;
	temp=*p1;
	*p1 = *p2;
	*p2 = temp;
}