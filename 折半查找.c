#include<stdio.h>
#include<windows.h>
int main()
{
	char arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int key = 7;
	int left = 0;
	int right = sizeof(arr) / sizeof(arr[0]) - 1;
	int mid = (left + right) / 2;
	while (left <= right)            //�ֳ����˴���if�������
	{

		if (arr[mid] == key)
		{
			printf("�ҵ���\n");
			break;
		}
		else if (arr[mid] < key)
		{
			right = mid - 1;
		}
		else if (arr[mid] > key)
		{
			left = mid + 1;
		}

	}
	if (left > right)
	{
		printf("û�ҵ�\n");
	}
	return 0;
}