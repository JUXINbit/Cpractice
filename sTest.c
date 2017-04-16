#define _CRT_SECURE_NO_WARNINGS 1

#include"SeqList.h"

void menu()
{
	printf("***************           SeqList       **************\n");
	printf("***************1. PushBack  2.PushFront **************\n");
	printf("***************3. PopBack   4.PopFront  **************\n");
	printf("***************5. Find      6.Remove    **************\n");
	printf("***************7. RemoveAll 8.Sort      **************\n");
	printf("***************9. BinarySearch  0.EXIT  **************\n");
	printf("***************         10.  Show       **************\n");

}
void Test()
{   
	int input;
	SeqList mylist;
	Init_SeqList(&mylist);

	do{
		menu();
		printf("������ѡ��>: ");
		scanf("%d",&input);
		switch (input)
		{
		case 1:
		{
				  DataType d;
				  printf("������Ҫβ������֣� ");
				  scanf("%d", &d);
				  PushBack(&mylist, d);
		}
			break;
		case 2:
		{
				  DataType d;
				  printf("������Ҫͷ������֣� ");
				  scanf("%d", &d);
				  PushFront(&mylist, d);		
		}
			break;
		case 3:
			PopBack(&mylist);
			break;
		case 4:
			PopFront(&mylist);
			break;
		case 5:
		{        
				  DataType d;
				  int ret=0;
				  printf("������Ҫ���ҵ����֣� ");
				  scanf("%d", &d);
				  ret=Find(&mylist, d);
				  if (-1 == ret)
					  printf("δ�ҵ�\n");
				  else
					  printf("���ҵ������±�Ϊ��%d\n", ret);
		}
			break;
		case 6:
		{
				  DataType d;
				  printf("������Ҫɾ�������֣� ");
				  scanf("%d", &d);
				  Remove(&mylist,d);
		}
			break;
		case 7:
			RemoveAll(&mylist);
			break;
		case 8:
			Sort(&mylist);
			break;
		case 9:
		{         DataType d;
		          int ret = 0;
				  printf("������Ҫ���ֲ��ҵ����֣� ");
				  scanf("%d", &d);
				  ret= BinarySearch(&mylist, d);
				  if (-1 == ret)
					  printf("�Ҳ���\n");
				  else
					  printf("�ҵ��ˣ��±���:%d\n", ret);
		}
			
			break;
		case 10:
			Show(&mylist);
			break;
		case 0:
			return;
		default:
			printf("��������\n");
			break;
		}
	 } while (input);
}
int main()
{   
	Test();
	return 0;
}