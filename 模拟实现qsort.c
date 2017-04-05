#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

void my_swap(char* p1, char* p2,int count)
{
	int i = 0;
	for (i = 0; i < count; i++)
	{
		char tmp = *(p1 + i);                 //ע���@���swap��һ���ֽ�һ���ֽڽ�����  �м����������Ϊchar һ���ֽڿռ�
		*(p1 + i) = *(p2 + i);               //Ҳ����д��  p1[i]=p2[i];
		*(p2 + i) = tmp;
	}
}

void bubble_sort(void *base,
	size_t num,                                   //size_t�൱�� unsigned int
	size_t width,
	int(*cmp)(const void *elem1, const void *elem2)
	)
{
	unsigned int i = 0;
	unsigned int j = 0;                              //�@�ﶨ���޷��� ����size_t����ͬ����
	for (i = 0; i < num; i++)
	{
		for (j = 0; j < num - i - 1; j++)
		{
			if (cmp((char*)base + j*width, (char*)base + (j + 1)*width)>0)         //ͨ��ָ�����cmp_int���� ���������ֱ��ǵ�һ���͵ڶ���Ԫ���׵�ַ
				                                                              //width�����˷��ʵĿ��
				my_swap( (char*)base + j*width, 
				        (char*)base + (j + 1)*width,                             //���ֽ�Ϊ��λ���н���
						 width
					   );
		}
	}

}

int cmp_int(const void *elem1, const void *elem2)      
{
	return (*(int*)elem1) - (*((int*)elem2));                    //����������  ǿ������ת������ָ������ĸ��ֽ����Ƚ�����Ԫ�صĴ�С  
}  

int main()
{    
	int arr[] = { 3, 2, 1, 4, 5, 6, 7, 8, 9, 10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int i = 0;
	bubble_sort(arr, sz, sizeof(int), cmp_int);
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
    return 0;
}