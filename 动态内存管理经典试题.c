#define _CRT_SECURE_NO_WARNINGS 1

//һ�⣺  ע��㣺�β�ֻ��ʵ�ε�һ����ʱ��������ֵ��  �βε�ֵ�ĸı䲢���ܸı�ʵ�ε�ֵ
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
//void GetMemory(char* p)             //�β�
//{
//	p = (char*)malloc(100);
//}
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(str);                 //ʵ��
//	strcpy(str, "hello world");
//	printf(str);
//}
//int main()
//{   
//	Test();
//	return 0;
//}
//  �������@��ҵ��ˣ�  �@�������м�������ĵط���1.GetMemory������ȱ����free
                                            //2.pֻ��ָ��str����ʱ���� p���˵�ַ���ǲ����ܹ��ı�str��ֵ ��strָ����һ����ָ�� û�����ַ���



//����������������θĽ���  1.��ֵ��Ϊ��ַ
//void GetMemory(char** p)            //��Ϊ����ָ��    
//{
//	*p = (char*)malloc(100);
//}
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(&str);                 //����ָ�볣��          
//	strcpy(str, "hello world\n");
//	printf(str);
//}
//int main()
//{
//	Test();
//	return 0;
//}


//2.ʹ�÷���ֵ ����һ����ַ 
//char* GetMemory(char* p)             
//{
//	p = (char*)malloc(100);
//	return p;
//}                                        //ע�⣺��Ȼ�@�������������֮������ռ�ģ�ջ���ռ�ᱻ���ٵ���p��ֵָ��ģ��ѣ�
//void Test(void)                                                                        //�ռ����汻���ٵĿռ���Ȼ����
//{
//	char* str = NULL;
//	str=GetMemory(str);                 
//	strcpy(str, "hello world\n");
//	printf(str);
//}
//int main()
//{   
//	Test();
//	return 0;
//}




//���⣺���ں������õ�ջ�ռ�ĸ��

//���꼴��
//char* GetMemory(void)
//{
//	char p[] = "hello world";
//	return p;                           //ջ�ռ�����ĺ������������֮��ռ�ͻỹ������ϵͳ  ��hello world���ַ�����������
//}
//void Test(void)
//{
//	char* str = NULL;
//	str = GetMemory();               //���㴫����һ����ַ��Ҳ�Ҳ������Ǹ���hello world���� 
//	printf(str);
//}
//int main()
//{
//	Test();
//	return 0;
//}




//���⣺ûɶë��   ����û��free �����ڴ�й©
//void GetMemory(char** p, int num)
//{
//	*p = (char*)malloc(num);
//}                                        // �ڴ�й©
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(&str, 100);
//	strcpy(str, "hello\n");
//	printf(str);
//}
//int main()
//{
//	Test();
//	return 0;
//}


//���⣺   ����ָ��

//void Test(void)
//{
//	char* str = (char*)malloc(100);
//	strcpy(str, "hello");
//	free(str);                     //��ʵ�@����һ����Σ�յ���Ϊ
//	if (str != NULL)                //�@��˵�����ͷŶѿռ��ʱ��ָ��ѿռ���Ǹ�ָ����Ȼ����ָ�� 
//	{
//		strcpy(str, "world\n");
//		printf(str);
//	}
//	return 0;
//}
//int main()
//{
//	Test();
//	return 0;
//}


void Test(void)
{
	char* str = (char*)malloc(100);
	strcpy(str, "hello");
	free(str);
	str = NULL;                                  //��ס����free ֮��ָ���ÿ�
	if (str != NULL)                
	{
		strcpy(str, "world\n");
		printf(str);
	}
	return 0;
}
int main()
{
	Test();
	return 0;
}

