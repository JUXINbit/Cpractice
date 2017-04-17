#define _CRT_SECURE_NO_WARNINGS 1

#include"SList.h"

void Init_slist(pList* pplist)
{
	assert(pplist);    //Ҫ�ж�   Ҫ֪��  ��ָ���ǲ��ܽ����õ�
	*pplist = NULL;    //��ʼ��ά�������ָ��plist��
}
pNode BuyNode(DataType d)                    //����ѽڵ㴴������  ����һ���ŵ������������Ȼ�󷵻��@���ڵ�ĵ�ַ
{
	pNode pnode = (pNode)malloc(sizeof(Node));       
	if (pnode == NULL)
	{
		perror("malloc");
		return	NULL;
	}
	pnode->data = d;
	pnode->next = NULL;
	return pnode;
}
void PushBack(pList* pplist, DataType d)    //β��
{
	assert(pplist);
	pNode pNewNode = BuyNode(d);
	if (*pplist == NULL)                  //��û�нڵ�ʱ
	{
		*pplist = pNewNode;
	}
	else
	{
		pNode cur =NULL;
		cur = *pplist;
		while (cur->next != NULL)      //�����ڽڵ�ʱ  �ҵ����һ���ڵ�Ȼ�����
		{
			cur = cur->next;
		}
		cur->next = pNewNode;
	}
}

void Print(pList plist)                  //��ӡ
{  
	pNode cur = NULL;
	if (plist == NULL)
	{
		printf("û�нڵ�\n");
		return;
	}
	cur = plist;
	while (cur != NULL)                  //ע�⣺�@�ﲻҪд��  cur->next != NULL   ��Ϊ�@���Ļ��������һ���ڵ�Ͳ����ӡ������
	{
		printf("%d -> ", cur->data);
		cur = cur->next;
	}
	printf("NULL\n");
}


void Destoryslist(pList* pplist)      //�ͷſռ�
{
	pNode cur = *pplist;          
	assert(*pplist);
	while (cur != NULL)
	{
		pNode tmp = cur;
		cur = cur->next;
		free(tmp);
	}
	*pplist = NULL;
}

void PopBack(pList* pplist)   //Ҫ����û�нڵ�������   ֻ��һ���ڵ�������   
{
	assert(*pplist);
	pNode cur = *pplist;
	if (*pplist == NULL)
	{
		printf("����Ϊ��\n");
		return;
	}
	else if (cur->next == NULL)
	{
		*pplist = NULL;
		return;
	}
	while (cur->next->next != NULL)
	{
		cur = cur->next;
	}
	free(cur->next);
	cur->next = NULL;
}

void PushFront(pList* pplist, DataType d)
{
	pNode pNewNode = BuyNode(d);
	assert(pplist);                         //assert  ��ʹ�÷��������ó����Լ�ѧ�Ĳ�������
	if (*pplist == NULL)
	{
		*pplist = pNewNode;
	}
	else
		pNewNode->next = *pplist;
	   *pplist = pNewNode;
}

void PopFront(pList* pplist)
{
	pNode cur = *pplist;
	pNode tmp = NULL;
	if (*pplist == NULL)
		return;
	else if (cur->next == NULL)
	{
		free(cur);
		*pplist = NULL;
	}
	else
	{
		tmp = *pplist;
		*pplist = cur->next;
		free(tmp);
		tmp = NULL;
     }
}

void Getslistlength(pList plist)
{
	int count = 0;
	pNode cur = plist;
	while (cur != NULL)
	{
		cur = cur->next;
		count++;
	}
	printf("����ĳ���Ϊ��%d\n",count);

}



pNode Find(pList plist,DataType d)   //����   ���ص��ǵ�ַ
{   
	pNode cur = plist;
	if (plist == NULL)
	{
		printf("����Ϊ��\n");
	}
	while (cur != NULL)
	{
		if (cur->data == d)
		{
			return cur;
		}
		cur = cur->next;
	}
	return NULL;
}
//ɾ���ڵ�
void Remove(pList* pplist, DataType d)    //���@����  ����Ψһ���ð��յľ����@������Ľڵ���
{
	assert(pplist);
	pNode cur = *pplist;
	pNode pnode = Find(*pplist, d);       //����Find���� �ҵ��ڵ�ĵ�ַ
	if (pnode == NULL)
	{
		printf("δ�ҵ�\n");
		return;
	}
	if (cur == pnode)    // ����ҵ����ǵ�һ��Ԫ��  ����ͷɾ 
	{
		PopFront(&cur);
		return;
	}
	else if (pnode->next == NULL)  //����ҵ��������һ��Ԫ��  ����βɾ 
	{
		PopBack(&pnode);
		return;
	}
	while (cur->next != pnode)    //��cur�ҵ�pnodeǰ��һ���ڵ� 
	{
		cur = cur->next;
	}
	cur->next = cur->next->next;  // pnode �������� 
	free(pnode);                //�ͷ�pnode
	pnode == NULL;
}
void RemoveAll(pList* pplist)
{


}
void Insert(pList* pplist, pNode pos, DataType d)    //ָ��λ�ò���
{
	assert(pplist);
	pNode pNewNode = BuyNode(d);
	pNode cur = *pplist;
	if (*pplist == NULL)
	{
		*pplist = pNewNode;
		return;
	}
	if (pos == *pplist)                        //���pos�ڵ�һ���ڵ㴦
	{
		pNewNode->next = pos->next;
		*pplist = pNewNode;
	}

	
	
}
void Erase(pList* pplist, pNode pos)                 //ָ��λ��ɾ��    pos��λ��
{
	assert(pplist);
	pNode cur = *pplist;
	if (cur == pos)    // ����ҵ����ǵ�һ��Ԫ��  ����ͷɾ 
	{
		PopFront(&cur);
		return;
	}
	else if (pos->next == NULL)  //����ҵ��������һ��Ԫ��  ����βɾ 
	{
		PopBack(&pos);
		return;
	}
	while (cur->next != pos)    //��cur�ҵ�posǰ��һ���ڵ� 
	{
		cur = cur->next;
	}
	cur->next = cur->next->next;  // pos �������� 
	free(pos);                //�ͷ�pos
	pos == NULL;
}
