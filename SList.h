
#ifndef __SLIST_H__
#define __SLIST_H__

#endif //__SLIST_H__

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<assert.h>

typedef int DataType;

typedef struct Node
{
	DataType data;
	struct Node* next;

}Node,*pNode ,*pList;

void Init_slist(pList* pplist);
pNode BuyNode(DataType d);
void PushBack(pList* pplist, DataType d);           //������ò��ÿ�ζ���Ҫ��ͷָ��Ϊ���� ò���ڹ����޹�  ����Ҫ֪��ֻ��֪����ͷָ��
void PopBack(pList* pplist);
void PushFront(pList* pplist, DataType d);
void PopFront(pList* pplist);
void Print(pList plist);                          //���ǲ����ҵ��������еĽڵ���в���
void Getslistlength(pList plist);
pNode Find(pList plist,DataType d);
void Remove(pList* pplist, DataType d);
void RemoveAll(pList* pplist);
void Insert(pList* pplist, pNode pos, DataType d);     //ָ��λ�ò���
void Erase(pList* pplist, pNode pos);                 //ָ��λ��ɾ��    pos λ��
void Destoryslist(pList* pplist);