#define _CRT_SECURE_NO_WARNINGS 1
//1. malloc��̬����һ������
#include<stdio.h>
#include<stdlib.h>
//int main()
//{
//	int* p = NULL;
//	int n = 0;
//	int i = 0;
//	scanf("%d", &n);
//	p = (int*)malloc(sizeof(int)*n);
//	if (p == NULL)                    //���malloc��ʼʧ�ܣ���˵��û���ڴ��ˣ� �ͻ᷵��һ����ָ�� һ�����ؿ�ָ�� ��Ҫ��������
//	{
//		printf("�ڴ��ȱ");
//		return 0;
//	}
//	for (i = 1; i <=n; i++)
//	{
//		p[i] = i;
//	}
//	for (i = 1; i <=n; i++)
//		printf("%d  ", p[i]);
//	free(p);                         //malloc ��free �ɶ�ʹ��
//	return 0;
//}//



//2.calloc ��free
//��ʵcalloc���൱��malloc�����˿ռ�֮������ٵĿռ丳��ֵ0
//int main()
//{   
//	int i = 0;
//	int* p = NULL;
//	p = (int*)calloc(10, sizeof(int));
//	if (p == NULL)
//	{
//		printf("�ڴ治��");
//		return 0;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", p[i]);          //calloc�ڶѿռ��п����˿ռ䲢��ȫ������ֵΪ0
//	}
//	free(p);
//	if (p != NULL)
//	{
//		printf("\n\p�ĵ�ַ��Ȼ����\n");
//	}
//	p = NULL;
//	return 0;
//}

// ������ĳ������֪��������freeһ�����п��ٵĿռ�֮�� ָ���ĸ��ռ��ָ����Ȼ����
//���������free(p)���ϣ�p=NULL;  ���ⴹ��ָ��;



//3.realloc��free   �޸�һ���Ѿ��ڶ��п��ٺõĿռ䣨����������
//������ʽ��void* realloc (void* ptr , size_t  new_size)  (��������ֵ��һ����������ռ���׵�ַ)

//int main()
//{
//	int* p = NULL;
//	p = (int*)malloc(5 * sizeof(int));
//	printf("%p\n", p);
//	p = (int*)realloc(  p , 100 * sizeof(int));
//	printf("%p\n", p);
//	return 0;
//}
//����ĳ��������ʾ��realloc���÷�   ����realloc�кܶ���Ҫע��ĵط� realloc�����¿��ٿռ��ʱ���п���������ԭ���Ŀռ�
//  Ҳ�п������ڶ������¿��ٿռ�   ����һ��Ҫע��realloc�ķ���ֵ�Ƿ����ı�

//��������ĳ�����ںܶ�ȱ��  ����Ӧ������д��
int main()
{
	int* p = NULL;
	p = (int*)malloc(5 * sizeof(int));
	if (p == NULL)
	{
		printf("�ڴ治��");
		return 0;
	}
	int* tmp = (int*)realloc(p, 10 * sizeof(int));   //�½�һ����ʱָ��ָ���µĿռ�  ԭ���ǣ�
	if (tmp != NULL)
	{
		p = tmp;
	}
	else
	{
		printf("����ʧ��");
		return 0;
	}
	free(p);
	p = NULL;         //��free�ͷ�p��ָ��Ŀռ�ʱ�� �ǵð�ָ����0����ֹҰָ�룻
	return 0;
}
//�����½�һ����ʱָ��������¿��ٵĿռ�����Ϊ���realloc���ٿռ�ʧ�� realloc�᷵��һ����ָ�� ��NULL��ֵ��p �����¿ռ䲻��
// ������ԭ���Ŀռ��ָ����0�ˣ�



//4.  һЩ�����ڴ���������׳���ĵط���
//1.��Ҫ�Կ�ָ�������

//2.��̬�ڴ����ڶ��Ͽ��ٿռ��   ��ջ�Ͽ��ٿռ�ľͲ�Ҫ��free()

//3.����ָ�����free�Ͳ�����ʲô����

//4.����malloc calloc realloc  ����Ҫע�⿪��ʧ�ܻ����޸�ʧ�ܵ����� if(p==NULL)�жϲ��ɻ�ȱ