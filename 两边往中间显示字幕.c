#include<stdio.h>
#include<string.h>
#include<windows.h>
int main()
{  
	char arr1[] = "##############";
	char arr2[] = "welcome to bit";
	int left = 0;
	int right = strlen(arr2) - 1;
	printf("%s\n", arr1);
	for (left = 0, right = strlen(arr2) - 1;       //�տ�ʼ�Ҵ���д����if��� if��䲻��ѭ���� ֻ��ִ��һ��
		                                         //��ȻҲ�����ӡ������
		left <= right;
		left++,
		right--)
	{
		arr1[left] = arr2[left];
		arr1[right] = arr2[right];
		Sleep(1000);                   //ע��SҪ��д
		printf("%s\n", arr1);
	}
    return 0;
}