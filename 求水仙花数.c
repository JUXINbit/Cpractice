#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int n = 0;
	int m = 0;
	int i = 0;
	int p = 0;
	int sum = 0;
	for (n = 100; n < 1000; n++)
	{
	    sum = 0;
		m = n;              //ͬ������ѭ�����m����ѭ�����n������ͬһ������  ֮ǰ�Ҷ����õ�n ��������һ��ѭ������n�Ѿ���Ŀȫ�ǣ�
		for (i = 0; i < 3; i++)           //��������λ���������@��ѭ����������ÿһλ�����ֽ������
		{                                //���Ƕ�δ�����  sum��ֵ��ÿ���ж��ǲ���ˮ�ɻ���֮����Ҫ������0����Ȼ��һ��һ���ۼӣ�
			p = m % 10;
			sum = sum + p*p*p;
			m = m / 10;
         }
		if (sum == n)
		{
			printf("%d\n", n);
		}
	}
         return 0;
}