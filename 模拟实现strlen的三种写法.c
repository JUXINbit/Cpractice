#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//1.��ͨд��   �@��ʡ��



  //�@�����״�
int my_strlen(char* str)
{   
	if (*str != 0)
	{
		str++;
		return 1 + my_strlen(str);
	}
	if (*str == 0)
		return 0;
}
int main()
{
	char arr[10];
	int len;
	printf("�������ַ�����");
	scanf("%s", &arr);
	len=my_strlen(arr);
	printf("%d\n", len);
	return 0;
}


//strlenͨ��ָ��-ָ��ķ�ʽʵ�֣�
int my_strlen(char* s)
{
	char* p = s;
	while (*p != '\0')
	{
		p++;
	}
	return p - s;
}