#define _CRT_SECURE_NO_WARNINGS 1
//ʵ��һ�����������������ַ����е�k���ַ���
//ABCD����һ���ַ��õ�BCDA  ���������ַ��õ�CDBA
#include<stdio.h>
#include<string.h>

char* left_move(char* arr, int sz, int k)
{
	int i = 0;
	int j = 0;
	char tmp;
	for (i = 0; i < k; i++)
	{   
		tmp = arr[0];
		for (j = 0; j < sz - 1; j++)
		{
			arr[j] = arr[j + 1];
		}
		arr[sz - 1] = tmp;
	}
}

int main()
{
	char arr[] = "ABCDEFG";
	int sz = strlen(arr);
	int k;
	printf("�������ƶ��ĸ���");
	scanf("%d", &k);
	left_move(arr, sz, k);
	printf("%s\n", arr);
	return 0;
}
