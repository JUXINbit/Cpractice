#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//void qsort(void *base,
//	size_t num,
//	size_t width,
//	int(*cmp)(const void *elem1, const void *elem2)
//	)
//{
//
//}



//1. ����������qsort������������

//int cmp_int(const void *elem1, const void *elem2)        //ע�⣺������ָ����û�취�Ӽ������Լ������õ�
//{
//	return (*(int*)elem1) - (*((int*)elem2));            //�@��ΪʲôҪ���������ж�Ԫ���Ⱥ�˳��ʹ��int*ǿ������ת����ԭ���������Ϊ��������ֵ��int��
//}                                                        
//int main()
//{    
//	int arr[] = { 3, 2, 1, 4, 5, 6, 7, 8, 9, 10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	qsort(arr, sz, sizeof(int), cmp_int);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//    return 0;
//}


////2.�ַ�����ʹ��qsort������������
//int cmp_char(const void *elem1, const void *elem2)
//{
//	return (*(char*)elem1) - (*((char*)elem2));            //�@��ΪʲôҪ���������ж�Ԫ���Ⱥ�˳��
//}                                                      //�ɴ˿���֪��  �@���������صĽ�����������������Ϊ�˴ﵽҪ�� 
//                                                      //ǿ������ת����ʱ��Ҫ����main�����е�����Ԫ�����Ͷ��� 
//int main()
//{
//	char arr[] = { 'A','B','C','E','D' };
//	int sz = 5;
//	int i = 0;
//	qsort(arr, sz, sizeof(char), cmp_char);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%c ", arr[i]);
//	}
//	return 0;
//}




//3.�ṹ�����ʹ��qsort������������          //д�Ĳ��Ǻ�˳��


typedef struct Stu          //���û��typedef�����ض����ʶ���Ļ������涨��Ķ���ò�ƻᱨ��
{
	char name[10];
	int num;
	int score;
}Stu;

int cmp_stu(const void *elem1, const void *elem2)
{
	return strcmp((*(Stu*)elem1).name, (*(Stu*)elem2).name);
}

int main()
{
    Stu stu[3] = { { "zhang", 7, 66 },
              { "li", 10, 70 },
              { "wang", 12, 90 } };
  
	int i = 0;
	int sz = sizeof(stu) / sizeof(stu[0]);
	qsort(stu, sz, sizeof(Stu), cmp_stu);               //ע���@���sizeof���������е������� ���ڽṹ����˵���;���Stu��
	for (i = 0; i < sz; i++)
	{
		printf("%s\n", stu[i].name);                    //ע���@���Ƕ����е����ֽ�������
	}
    return 0;
}