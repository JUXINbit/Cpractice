//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{   
//	int x, y;
//	scanf("%d", &x);
//	if (x > 0)
//		y = 1;
//	else if (x == 0)
//		y = 0;
//	else y = -1;
//	printf("%d", y);
//	system("pause");
//		return 0;
//}
//


//#include<stdio.h>  //���1-100֮�����������
//int main()
//{
//	int i = 0;
//	for (i = 0; i <= 100; i++)
//	{ 
//		if (i%2!=0)
//			printf("%d\n",i);
//	}
//
//
//	system("pause");
//	return 0;
//}




#include<stdio.h>
int main()
{
	int arr1[] = { 1, 2, 3, 4 };
	int arr2[] = { 5, 6, 3, 9, 0 };
	int i, j;
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (arr1[i] == arr2[j])        //���һֱ��û�У���ô�@һ�䲻��ִ�У�
			{
				printf("��\n");
				return 0;                 //�������һ��  ��ô���@��return 0���ǽ������@���ѭ����
			}
		}
		
	}
	printf("û��\n");
	return 0;
}