#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>




//1.����һ������ֵ������ת��Ϊ�ַ�����ӡ��������1234�����1 2 3 4

//void print(int num)
//{
//	if (0 == num)
//		return;
//	else
//		print(num / 10);
//	printf("%d ", num%10);
//}
//
//
//
//int main()
//{
//	print(1234);
//    return 0;
//}


//2.���õݹ�ģ��ʵ��strlen��������������ʱ�������ַ����ĳ��ȣ�
int my_strlen(char* p)
{
	int count = 0;
	while (*p++ != '\0')    
	{
		count++;
		
	}                             //���@�ﴴ������ʱ����  ��ô����������봴����ʱ��������ô����
	return count;

}
int main()
{
	char* p = "abcdef";
	int len = 0;
	len = my_strlen(p);
	printf("%d\n", len);
	return 0;
}



