//��Sn=a+aa+aaa+aaaa+aaaaa��ǰ����֮��  a��һ������ ����2+22+222+2222+22222

#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{  
	int a;
	int n;
	int p = 1;
	int i;
	int An = 0;
	int Sn = 0;
	int num;
	scanf("%d", &a);
	scanf("%d", &n);            //��Ҫ��'\n'��
	for (i = 0; i < n; i++)
	{
		num = a*p;
		An = An + num;         //���@���������Ҫ������߼��� ��һ��ʼд��Sn+=Sn+num���ֺ���Խ��Խ�ۻ�
		Sn = Sn + An;              //������Ҫ�ҵ������ۼӵ�ԭ�� 
		p = p * 10;
	}
	printf("%d\n", Sn);
    return 0;                 //������� 2 5   ��˼����2+22+222+2222+22222  ���Ϊ��24690
}