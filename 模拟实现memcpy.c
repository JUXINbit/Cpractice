#define _CRT_SECURE_NO_WARNINGS 1

//������������֮ǰ����strcpy �����ַ���������������ȱ�ݵ�  ������'\0'ʱ �����ͻ���ֹ  ����������Ҫ
//���������ݰ���'\0'Ҳ���п���������Ҫ�ڴ濽��   memcpy  ���е��ص���ָ�����͵�ת��
//�ڴ濽�������ĵ��ø�ʽΪ�� memcpy( void* dest , const void* src , int count(�����ֽ���));
#include<stdio.h>
#include<assert.h>
void* _memcpy(void* str1, const void* str2, int count)
{    
	assert(str1);
	assert(str2);
	char* temp = (char*)str1;        
	char* dest = (char*)str2;            //˼�� �@���charǿ������ת��������˭�й�ϵ ����count���Ǳ��������Ǹ���������ַ�����
	while (count != 0)                  //��ʵ�Ҹı�ǿ������ת����Ŀ������ �ı����ʵ��ѭ��������Ч������
	{
		*temp++ = *dest++;
		count--;
	}
	return str1;                //����str1�ĵ�ַ
}
int main()
{
	int  arr1[20];
	int  arr2[10] = {1,2,3,4,5,6};
	int i = 0;
	_memcpy(arr1, arr2, 16);               //��ס��count���ǵ������ֽ��� ���ǿ���Ԫ����
	for (i = 0; i < 20; i++)
	{
		printf("%d\n", arr1[i]);
	}
    return 0;
}