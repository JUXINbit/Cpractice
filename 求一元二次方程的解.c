#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
#define EXP  0.000000001
int main()
{
	double a = 0.0;
	double b = 0.0;
	double c = 0.0;
	scanf("%lf%lf%lf", &a, &b, &c);
	double delt = b*b - 4 * a*c;
	if ((a >= -EXP) && (a <= EXP))
	{
		printf("�ⲻ��һԪ���η���\n");
	}
	else                  //�@��ΪʲôҪ��else��Ϊ�˶���a=0���������Ϊa=0֮������е������Ȼ����
		                                                //����������г���
	{
		if ((delt >= -EXP) && (delt <= EXP))
		{
			printf("��������ȵĸ�\n");
			printf("x1=x2=%lf\n", -b / (2 * a));
		}
		if (delt > EXP)
		{
			printf("����������ȵ�ʵ��\n");
			printf("x1=%lf,x2=%lf\n", (-b + sqrt(delt)) / (2 * a), (-b - sqrt(delt)) / (2 * a));
		}
		if (delt < -EXP)
		{
			printf("���������ȵĸ���\n");
		}
	}
	return 0;
}