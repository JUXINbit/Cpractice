#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
 
//�ݹ�ķ�ʽ
//void print(int num)
//{  
//	if (num > 9)
//	{
//		print(num / 10);
//	}
//	printf("%d ", num % 10);
//}



int main()
{
	int num=123456;        //��ȡһ��������ÿһλ ģ10��10
	int p;                //��ȡ����������ÿһλ ģ2��2��
	scanf("%d", &num);
	while (num)
	{
		p = n % 10;
		n = n / 10;
		printf("%d", p);
	}
	/*print(num);*/
	return 0;
}