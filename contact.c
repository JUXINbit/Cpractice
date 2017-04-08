#define _CRT_SECURE_NO_WARNINGS 1

#include"contact.h"
// ��ʼ������
void init_contact(contact* n)         //��ʼ��con ������������ȫ����ʼ��Ϊ0
{   
	int i = 0;
	n->num = 0;
	memset(n->contact, 0, sizeof(people)*MAX);

}

//������ϵ��
void add_contact(contact* n)
{
	if (n->num >= MAX)
	{
		printf("�绰������");
		return;
	}

		printf("������������");
		scanf("%s", n->contact[n->num].name);
		printf("���������䣺");
		scanf("%5d", &(n->contact[n->num].age));
		printf("�������Ա�");
		scanf("%s", n->contact[n->num].sex);
		printf("������סַ��");
		scanf("%s", n->contact[n->num].addr);
		printf("������绰��");
		scanf("%s", n->contact[n->num].tele);
	n->num++;
	printf("��ӳɹ�\n");
}

//��λ����
static int find_contact(contact* n,  char name[])
{  
	int i = 0;
	for (i = 0; i < n->num; i++)
	{
		if (strcmp(name, n->contact[i].name) == 0)
			return i;
	}
	return -1;

}

//ɾ����ϵ��
void dele_contact(contact* n)
{   
	char name[MAX_NAME] = {0};
	int pos;
	int i=0;
	if (n->num == 0)
	{
		printf("ͨѶ¼��Ϊ��");
		return;
	}
	printf("������Ҫɾ���˵����֣� ");
	scanf("%s", name);
	pos=find_contact(n, name);
	if (pos == -1)
	{
		printf("���޴���\n");
		return;
	}
	for (i = pos; i < n->num-1; i++)
	{
		n->contact[i] = n->contact[i + 1];
	}
	n->num--;
}

//Ѱ����ϵ��
void srch_contact(contact* n)
{   
	char name[MAX_NAME] = { 0 };
	int pos;
	if (n->num == 0)
	{
		printf("ͨѶ¼Ϊ��");
		return;
	}
	printf("��������Ҫ���ҵ��Ǹ���");
	scanf("%s", name);
	pos = find_contact(n, name);
	if (pos == -1)
	{
		printf("���޴���");
		return;
	}
	printf("������ %s     ���䣺%5d\n�Ա�%s     סַ��%s\n       �绰��   %s\n",
		n->contact[pos].name,
		n->contact[pos].age,
		n->contact[pos].sex,
		n->contact[pos].addr,
		n->contact[pos].tele);
}

//�޸���ϵ��
void modf_contact(contact* n)
{    
	char name[] = { 0 };
	int pos;
	if (n->num == 0)
	{
		printf("ͨѶ¼Ϊ��");
		return;
	}
	printf("��������Ҫ�޸ĵ���ϵ�ˣ� ");
	scanf("%s", name);
	pos = find_contact(n, name);
	if (pos == -1)
	{
		printf("���޴���");
		return;
	}
	printf("���޸�������");
	scanf("%s", n->contact[pos].name);
	printf("���޸����䣺");
	scanf("%5d", &(n->contact[pos].age));
	printf("���޸��Ա�");
	scanf("%s", n->contact[pos].sex);
	printf("���޸�סַ��");
	scanf("%s", n->contact[pos].addr);
	printf("���޸ĵ绰��");
	scanf("%s", n->contact[pos].tele);

}

//��ʾ��ϵ��
void show_contact(contact* n)
{   
	if (n->num != 0)
	{

		int i = 0;
		printf("*****  ��ϵ��  **************\n");
		for (i = 0; i < n->num; i++)
		{
			printf("������ %s     ���䣺%5d\n�Ա�%s     סַ��%s\n       �绰��   %s\n",
				n->contact[i].name,
				n->contact[i].age,
				n->contact[i].sex,
				n->contact[i].addr,
				n->contact[i].tele);
		}
	}
	else
		printf("ͨѶ¼Ϊ��\n");
}

//�����ϵ��
void emty_contact(contact* n)
{
	int i = 0;
	n->num = 0;
	memset(n->contact, 0, sizeof(people)*MAX);
	printf("ͨѶ¼�����\n");
}


int cmp_contact(const void *elem1, const void *elem2)       //qsort���õĺ���
{
	return strcmp((*(people*)elem1).name, (*(people*)elem2).name);
}

//��ϵ������
void sort_contact(contact* n)
{
	int i = 0;
	qsort(n->contact, n->num, 
		 sizeof(people)  ,  cmp_contact);                                    //ʹ��qsort��������
	for (i = 0; i < n->num; i++)
	{
		printf("%s\n", n->contact[i].name);
	}
}

