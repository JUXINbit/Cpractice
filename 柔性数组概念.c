#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

typedef struct M
{
	int num;                        //����������һ����Сδ֪������  ���������Ϊ�ṹ������һ��Ԫ��  ����֮ǰҲ����Ҫ������Ԫ��
	int arr[];                      //struct M���ýṹ�壩�Ĵ�С��������������Ĵ�С
}M;
int main()
{
	int i = 0;
	M* m = (M*)malloc(sizeof(int)+100 * sizeof(int));
	m->num = 100;
	for (i = 0; i < m->num; i++)
	{
		m->arr[i] = i;
	}
	for (i = 0; i < m->num; i++)
	{
		printf("%d\n", m->arr[i]);
	}
	return 0;
}

//��������������ڴ濪�ٵĴ���  Ҳ�������ڴ���Ƭ�Ĳ���