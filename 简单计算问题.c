#include<stdio.h>
int main()
{
	double i = 0.0;
	double temp = 1.0;
	double sum = 1.0;
	for (i = 2.0; i <= 100.0; i++)
	{
		temp = (-1)*temp;           //��һ���������䵱���ţ�
		sum = sum + temp*(1.0 / i);  //i��temp�ڶ����ʱ��ҲӦ����double���� 
	}
	printf("%lf", sum);
     return 0;
}