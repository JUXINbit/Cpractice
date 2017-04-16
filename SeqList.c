#define _CRT_SECURE_NO_WARNINGS 1

#include"SeqList.h"

void Init_SeqList(pSeqList p)
{
	assert(p); 
	p->count = 0;
	memset(p->arr, 0, sizeof(DataType)*MAX);
}

void PushBack(pSeqList p, DataType d)
{
	assert(p);
	p->arr[p->count] = d;
	p->count++;
}

void PushFront(pSeqList p, DataType d)
{  
	assert(p);
	int i = 0;
	for (i = p->count; i > 0; i--)
	{
		p->arr[i] = p->arr[i-1];
	}
	p->arr[0] = d;
	p->count++;
}
void PopBack(pSeqList p)
{   
	assert(p);
	p->count--;
}

void PopFront(pSeqList p)
{
	assert(p);
	int i = 0;
	for (i = 0; i < p->count-1; i++)
	{
		p->arr[i] = p->arr[i+1];
	}
	p->count--;

}

int  Find(pSeqList p, DataType d)
{   
	assert(p);
	int i = 0;
	for (i = 0; i < p->count; i++)
	{
		if (p->arr[i] == d)
			return i;
	}
	return -1;
}

void Remove(pSeqList p, DataType d)
{   
	assert(p);
	int ret = Find(p,d);
	int i = 0;
	if (-1 == ret)
		printf("δ�ҵ�\n");
	else
	for (i = ret; i < p->count-1; i++)
	{
		p->arr[i] = p->arr[i + 1];
	}
	p->count--;
}

void RemoveAll(pSeqList p)    //���@��д	����������   ����͵����
{  
	assert(p);
	p->count = 0;
}

void Sort(pSeqList p)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < p->count - 1; i++)
	{
		for (j = 0; j < p->count - 1 - i; j++)
		{
			if (p->arr[j] >  p->arr[j + 1])
			{
				DataType tmp = p->arr[j];
				p->arr[j] = p->arr[j + 1];
				p->arr[j + 1] = tmp;            //ע���@���i��ѭ������   �@���j���±�
			}
		}
	}

}

int  BinarySearch(pSeqList p, DataType d)
{   
	Sort(p);
	int left = 0;
	int right = p->count - 1;
	while (left <= right)
	{
		int mid = left - ((left - right) >> 1);     //����ڴ����   ע�⣺  (left+right)/2  �Լ� (left+right)>>1  ���ǲ��ܽ���ڴ������
		if (p->arr[mid] < d)
		{
			left = mid + 1;
		}
		else if (p->arr[mid] > d)
		{
			right = mid - 1;
		}
		else
			return mid;
	}
	return -1;
}
void Show(pSeqList p)
{   
	assert(p);
	int i = 0;
	if (p->count == 0)
	{
		printf("˳���Ϊ��\n");
		return;
	}
	for (i = 0; i < p->count; i++)
	{
		printf("%d ", p->arr[i]);
	}
	printf("\n");
}
