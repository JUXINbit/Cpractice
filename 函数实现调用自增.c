#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int Plus(int *num)
{
	(*num)++;

}
int main()
{
	int i = 0;
	Plus(&i);            //˼���@��ʹ�õ��ǵ�ַ���ݶ�����ֵ���ݣ�
	Plus(&i);
	Plus(&i);
	Plus(&i);
	printf("%d\n", i);       //Plus�������ö��ٴ� �����ʾ�������֣�
	return 0;
}