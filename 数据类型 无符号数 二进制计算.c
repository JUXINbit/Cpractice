#define _CRT_SECURE_NO_WARNINGS 1
//��γ�����Ҫ������ڹ����й����������͵���ؼ���  
//int char �����ݵ�ȡֵ��Χ
//��Ҫ�����з����޷������ļ����������  ���������ĸ���  ԭ����������


//1.
#include<stdio.h>
//int main()
//{
//    
//	char a = 128;     //-128   ��
//	signed char b = 128;     //-128
//	unsigned char c = 128;         //  128
//	printf("%d %d %d", a, b, c);            //%d����˼�ǰ����з���������� ���ֽ�
//	return 0;
//}




//int main()
//{ 
//	char a = -1;  
//	unsigned char b = -1;
//	printf("%d %d \n", a, b);    //-1  255
//	printf("%u %u \n", a, b);    //42.......  255
//	return 0;
//}



//int main()
//{
//
//
//	char a = 128;
//	char b = -128;
//	printf("%u\n %u\n ", a, b);
//    return 0;
//}


//int main()
//{
//	int i = -20;
//	unsigned int j = 10;
//	printf("%d\n", i + j);
//	printf("%u\n", i + j);
//	return 0;
//}


//int main()
//{
//	unsigned i;
//	for (i = 9; i >= 0; i--)
//	{
//		printf("%u\n", i);
//	}
//	return 0;
//}
//
//
//unsigned char i = 0;      //ע���@���� ;
//int main()
//{
//	for (i = 0; i <= 255; i++)
//	{
//		puts("hello world\n");
//	}
//	return 0;
//}





//int main()
//{
//	char a[1000];
//	int i;
//	for (i = 0; i < 1000; i++)
//	{
//		a[i] = -1 - i;
//	}
//	printf("%d\n", strlen(a));
//	return 0;
//}


//��С�˴洢ģʽ��
//����ֽ���00 00 00 01   ��16���ƣ�   //           Ϊʲô��16�������洢��
//С���ֽ���01 00 00 00 
//�����������ݵĴ洢����ô�������ж��ڸñ���ϵͳ���Ǵ�˴洢����С�˴洢��
//������ʹ���ַ���ָ�룺

int check(int num)
{
	char* p = (char*)&num;               //����ָ��ָ��ͷ��ַ������4���ֽ� �ַ���ָ��ͷ��ַ�Ͳ��������ˣ�1���ֽڣ�
	                                   //���Կ���ʹ���ַ�ָ��ķ�ʽ    �ǵ�ǿ������ת��
   if (1 == *p)
	   return 1;
  
   else if (0 == *p)
	   return 0;
}

int main()
{
	int num = 1;
	int i=check(num);
	if (1 == i)
		printf("С�˴洢\n");
	if (0 == i)
		printf("��˴洢\n");
	return 0;
}




