#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
//int main()                             //�@����һ���򵥵�strcpy���� ʹ��ʵ��
//{
//	/*char arr1[] = "hello juxin";*/
//	char arr2[20];           //ע�ⲻ��ȫ��ʼ��һ���ַ�����ʱ����ô��
//	strcpy(arr2, "hello juxin");
//	printf("%s\n", arr2);
//	return 0;
//}

void my_strcpy(char* p2, char* p1)   //�β���ָ�룬�������ǵ�ַ��
{
	while (*p1 != 0)            //ע�⣺ֻ�´��\0ǰ��Ĳ���  ��\0����ASCII��ֵ��0��
	{
		*p2 = *p1;
		/**p2++ = *p1++;*/      //���Ӽ���д��
		*p1++;
		*p2++;
	}
	*p2 = *p1;           //�@���ǿ���\0 ����ֹ������������       
}

int main()
{
	char arr1[] = "hello juxin";
	char arr2[20];
	my_strcpy(arr2, arr1);
	printf("%s\n", arr2);
    return 0;
}


     //�Ľ�д��  (�е�����)
char* my_strcpy(char* p2,  char* p1)
{
	char* ret = p2;
	while (*p1 != 0)            
	{
		*p2++ = *p1++;      
	}
	*p2 = *p1; 
	return ret;
}
int main()
{
	char arr1[] = "hello juxin";
	char arr2[20];
	printf("%s\n", my_strcpy(arr2,arr1));      //���õĸú�������ֵ���ַ�������Ԫ�ص�ַ��
	return 0;
}


//int main()
//{
//	char arr[] = "";
//	char* p = arr;
//	if (*p == 0)
//	{                  
//		printf("jjj");               //��\0����ASCIIֵ��0��
//	}
//	return 0;
//}

