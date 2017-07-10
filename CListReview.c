#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<assert.h>
#include<stdlib.h> 

//Cʵ�ּ���ͷ������ͻ����Ĳ���
typedef int Datatype;
typedef struct ListNode
{
	Datatype _data;
	struct ListNode* _next;
}Node;

Node* _head = NULL;

Node* CreatNode(Datatype data)
{
	Node* NewNode = (Node*)malloc(sizeof(Node));
	if (NewNode == NULL)
	{
		perror("malloc");
		return;
	}
	NewNode->_data = data;
	NewNode->_next = NULL;
	return NewNode;
}

void PushBack(Datatype data)
{
	if (_head == NULL)
		_head = CreatNode(data);
	else
	{
		Node* cur = _head;
		while (cur->_next)
		{
			cur = cur->_next;
		}
		cur->_next = CreatNode(data);
	}
}

void PushFront(Datatype data)
{
	if (_head == NULL)
		_head = CreatNode(data);
	else
	{
		Node* NewNode = CreatNode(data);
		Node* NextNode = _head;
		_head = NewNode;
		NewNode->_next = NextNode;
	}
}

void PopBack()
{
	if (_head == NULL)         //û��Ԫ��
	{
		printf("����Ϊ��\n");
		return;
	}
	else if (_head->_next == NULL)    //ֻ��һ��Ԫ��
	{
		free(_head);
		_head = NULL;
	}
	else
	{
		Node* cur = _head;
		Node* prev = NULL;
		while (cur->_next)
		{
			prev = cur;
			cur = cur->_next;
		}
		prev->_next = NULL;
		free(cur);
	}
	return;
}
void PopFront()
{
	if (_head == NULL)
	{
		printf("����Ϊ��\n");
		return;
	}
	else if (_head->_next == NULL)
	{
		_head = NULL;
		return;
	}
	else
	{
		Node* tmp = _head;
		Node* newhead = _head->_next;
		_head = newhead;
		free(tmp);
	}
	return;
}
Node* Find(Datatype data)         //����ĳ������
{
	if (_head == NULL)
	{
		printf("����Ϊ��\n");
		return NULL;
	}
	else
	{
		Node* cur = _head;
		while (cur)
		{
			if (cur->_data == data)
				return cur;
			cur = cur->_next;
		}
		printf("δ�ҵ�\n");
		return NULL;
	}
}
void Insert(Node* pos, Datatype data)       //ָ��λ��ǰ����   ע��Ҫ���ǵ����ָ��λ�ò����ڵ����
{
	if (_head == NULL)
	{
		printf("����Ϊ��\n");
		return;
	}
	if (pos == _head)      //ͷ��
	{
		PushFront(data);
		return;
	}
	Node* cur = _head;
	Node* prev = NULL;
	while (cur)
	{
		if (cur == pos)
		{
			Node* newnode = CreatNode(data);
			prev->_next = newnode;
			newnode->_next = cur;
			return;
		}
		prev = cur;
		cur = cur->_next;
	}
	printf("δ�ҵ�ָ��λ��\n");
	return;
}
void Erase(Node* pos)       //ָ��λ��ɾ��
{
	if (_head == NULL)
	{
		printf("����Ϊ��\n");
		return;
	}
	if (pos == _head)
	{
		PopFront();
		return;
	}
	Node* cur = _head;
	Node* prev = NULL;
	//Node* nextnode = pos->_next;
	while (cur)
	{
		if (cur == pos)
		{
			prev->_next = pos->_next;
			free(pos);
			return;
		}
		prev = cur;
		cur = cur->_next;
	}
	printf("δ�ҵ�ָ��λ��\n");
	return;
}

void Remove(Datatype data)        //ɾ���������һ�γ��ֵĸ���
{
	Erase(Find(data));
}
void DestoryList()     //ɾ����������
{
	if (_head == NULL)
		return;
	if (_head->_next == NULL)
	{
		free(_head);
		_head = NULL;
		return;
	}
	Node* cur = _head;
	Node* tmp = NULL;
	while (cur)
	{
		tmp = cur;
		cur = cur->_next;
		free(tmp);
	}
	_head = NULL;
	return;
}
//***************�����������ⲿ��*******************

//��Ŀһ����β��ͷ��ӡ������
//1.�ݹ�
void _RPrintList(Node* cur)
{
	if (cur == NULL)
		return;
	_RPrintList(cur->_next);
	printf("%d ", cur->_data);
}
//2.�ǵݹ飺 ����ջ����C��������û��ջ�������@���@�ַ�������ʵ�֣�

//��Ŀ����ɾ��һ����ͷ������ķ�β���
void TestErase(Node** pplist)           //�������ָ��
{
	assert(pplist);
	if (*pplist == NULL)
	{
		printf("����Ϊ��");
		return;
	}
	//һ�����
	if ((*pplist)->_next == NULL)
	{
		printf("������Ҫ��\n");
		return;
	}
	//ֻ���������
	if ((*pplist)->_next->_next == NULL)
	{
		Node* tmp = *pplist;
		Node* endnode = (*pplist)->_next;
		*pplist = endnode;
		free(tmp);
	}
	//������
	else
	{
		Node* cur = *pplist;
		Node* prev = NULL;
		while (cur->_next->_next)
		{
			prev = cur;
			cur = cur->_next;
		}
		Node* endnode = cur->_next;
		prev->_next = endnode;
		free(cur);
	}
}
//��Ŀ����ͷ������ķ�ͷ�ڵ�֮ǰ����һ�����
void TestInsert(Node** pplist,Datatype data)
{
	assert(pplist);
	if (*pplist == NULL)
	{
		printf("����Ϊ��\n");
		return;
	}
	//ֻ��һ�����
	if ((*pplist)->_next == NULL)
	{
		printf("����������\n");
		return;
	}
	//��ֹһ����㣬�ڵ�һ�����͵ڶ������֮�����
	else
	{
		Node* next = (*pplist)->_next;
		Node* newnode = CreatNode(data);
		(*pplist)->_next = newnode;
		newnode->_next = next;
	}
}
//��Ŀ�ģ�������ʵ��Լɪ��


//��Ŀ�壺 ���õ�����[*]
void ReverseList(Node** pplist)
{
	assert(pplist);
	if ((*pplist) == NULL)
		return;
	if ((*pplist)->_next == NULL)
		return;
	else
	{
		Node* newList = NULL;
		Node* cur = *pplist;
		Node* prev = NULL;
		prev = cur;
		newList = prev;
		prev->_next = NULL;
		cur = cur->_next;
		while (cur)
		{
			Node* tmp = newList;
			prev = cur;
			cur = cur->_next;
			newList = prev;
			prev->_next = tmp;
		}
		*pplist = newList;
	}
}


void PrintList()         //��ӡ
{
	if (_head == NULL)
	{
		printf("����Ϊ��\n");
		return;
	}
	else
	{
		Node* cur = _head;
		while (cur)
		{
			printf("%d ",cur->_data);
			cur = cur->_next;
		}
	}
	printf("\n");
}

//-----------------------test------------------------
void TestList()
{
	/*PushBack(1);
	PushBack(2);
	PushBack(3);
	PushBack(4);
	PushBack(5);
	PushBack(6);
	PushFront(0);
	PushFront(6);
	PushFront(5);
	PushFront(4);
	PushFront(3);
	PopBack();
	PopBack();
	PopBack();
	PopBack();
	PopBack();
	PopFront();
	PopFront();*/
	/*PopFront();
	PopFront();
	PopFront();
	PopFront();*/
	//printf("%p ",Find(7));
	/*Insert(Find(0), 1);
	Insert(Find(5), 1);
	Insert(Find(2), 1);
	Erase(Find(0));
	Erase(Find(1));
	Erase(Find(1));
	Erase(Find(1));
	Erase(Find(1));
	Erase(Find(1));
	Remove(5);
	Remove(6);
	PrintList();
	PushBack(1);
	PushBack(2);
	PushBack(3);
	PushBack(4);
	PushBack(5);
	PushBack(6);
	PushBack(7);
	PushBack(8);
	PrintList();*/
	//DestoryList();
	//PrintList();
	// *******���������******
	//_RPrintList(_head);
	/*TestErase(&_head);
	PrintList();
	TestErase(&_head);
	PrintList();
	TestErase(&_head);
	PrintList();
	TestErase(&_head);
	PrintList();
	TestErase(&_head);
	PrintList();
	TestErase(&_head);
	PrintList();
	TestErase(&_head);
	PrintList();
	TestErase(&_head);*/
	//PrintList();
	/*PushBack(5);
	PushBack(4);
	PushBack(3);
	PushBack(2);
	PrintList();
	TestInsert(&_head, 1);
	TestInsert(&_head, 1);
	PrintList();*/

	PushBack(0);
	PushBack(1);
	PushBack(2);
	PushBack(3);
	PushBack(4);
	PushBack(5);
	PrintList();
	ReverseList(&_head);
	PrintList();

}
int main()
{ 
	TestList();
	return 0;
}