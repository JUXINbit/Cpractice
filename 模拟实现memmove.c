#define _CRT_SECURE_NO_WARNINGS 1

//memmove   �ڴ��ƶ�   �ƶ������ֽ�������ס �ڴ����� �������ǰ��ֽ���ģ�
//memmove( arr+4 , arr+1,4*sizeof(int)���ƶ��ĸ�����Ԫ�أ��ܼ�16���ֽڣ�);  ����int arr[10]={1,2,3,4,5,6,7,8,9,0};
#include<stdio.h>
#include<assert.h>
void* _memmove(void* str1, const void* str2, int count)       
{
	assert(str1);
	assert(str2);
	char* dest = (char*)str1;
	const char* pest = (char*)str2;         
	if (dest > pest)
	{                                    //��������   �����������ܽ������
		while (count)
		{
			*(dest + count) = *(pest + count);
			count--;
		}
	}
	else
	{
		while (count)
		{
			*dest++ = *pest++;
			count--;
		}
	}
	return str1;
}
int main()
{   
	int i = 0;
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
	_memmove(arr + 3, arr + 1, 4 * sizeof(int));
	for (i = 0; i < 10;i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}


