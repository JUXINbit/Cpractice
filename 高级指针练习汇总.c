#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int* p = (int*)0x0012ff44;
//	*p = 20;
//	printf("%x", *p);           //���б��� ������ָ�벻�ܹ������ڴ�  ���ʳ�ͻ
//    return 0;
//}

//int main()
//{
//	int a = 10;
//	int* p = &a;
//	printf("%d\n", *p);
//	return 0;
//}



// һЩֵ��˼������Ŀ��
//int main()
//{
//	int a[5] = { 1, 2, 3, 4, 5 };
//	int* ptr = (int*)(&a + 1);
//	printf("%d %d", *(a + 1), *(ptr - 1));   //���н��
//    return 0;
//}

//int main()
//{
//	char a[5] = { 'A', 'B', 'C', 'D' };
//	char(*p3)[5] = &a;
//	char(*p4)[5] = a;
//	printf("%c %c", *(p3 + 1), *(p4 + 1));         //����Ľ����ʲô��
//	return 0;
//}


//int main()
//{
//	int a[4] = { 1, 2, 3, 4 };
//	int* ptr1 = (int*)(&a + 1);        //����Ľ���ǣ�
//	int* ptr2 = (int*)((int)a + 1);
//	printf("%x %x", ptr1[-1], *ptr2);
//    return 0;
//}


//int main()
//{
//	int a[5][5];
//	int(*p)[4];       //�ܷ���ȷ�������ָ��ĸ���
//	p = a;
//	printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);
//    return 0;
//}

//int main()
//{
//	int aa[2][5] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int* ptr1 = (int*)(&aa + 1);
//	int* ptr2 = (int*)(*(aa + 1));
//	printf("%d,%d\n", *(ptr1 - 1), *(ptr2 - 1));          //����Ľ���ǣ�
//	return 0;
//}



















