#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
int main()
{
	int i = 0;
	char arr1[] = "19960314";
	char arr2[20];
	for (i = 0; i < 3; i++)
	{
		printf("���������룺");
		scanf("%s", arr2);
		if (strcmp(arr2, arr1) == 0)
		{
			printf("��¼�ɹ�\n");
			break;
        }
		if (3 == i)
		{
			printf("��¼ʧ��\n");
		}
     }
     return 0;
}