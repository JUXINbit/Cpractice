#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdarg.h>
void print(char* format,...)  //����ԭ��
{
	va_list arg;
	va_start(arg, format);         //��ȡ�����б�
	while (*format != '\0')
	{
		switch(*format)
		{
		     case's':
		     {  
				   char* str = va_arg(arg, char *);
				   while (*str)
				   {
					   putchar(*str);
					   str++;
				   }
		      }
			  break;
		      case'c':
		      {
				   char ch = va_arg(arg, char);
					   putchar(ch);
		
	           }
               break;
			default:
				putchar(*format);
				break;
		}
		format++;
	}
	va_end(arg);
}
int main()
{
	print("s ccc.\n", "hello", 'b', 'i', 't');            //ʵ���@�������ĵ���
     return 0;
}


