#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{  
	int a = 10;
	short s = 2;
	printf("%d\n", sizeof(s = a + 2));      //sizeof�@�������������ῼ��������ģ���������ʲô���ʽ ��ֻ����ı���������Ȼ��˲���
	                                      //���ռ�  Ȼ��ȵ������ʱ�����������Ѿ������ˣ����Բ�Ҫָ��sizeof����ı��ʽ��ִ�м��㸳ֵ
	printf("%d\n", s);           
	printf("%d\n", a);
	system("pause");
	return 0;
}                       //����Ƕ����أ�