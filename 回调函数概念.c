#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
void fun1(const  char* str)
{
	printf("fun1:%s\n",str);

}
void fun2(const  char* str)
{
	printf("fun2:%s\n", str);

}

void test(void (*pfun)(const char* str))         //test������������һ������������ָ��pfun
{
	pfun("abc");

}
int main()
{
	test(fun1);            //��fun1�ĵĵ�ַ����test
    return 0;
}



