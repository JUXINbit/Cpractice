#define _CRT_SECURE_NO_WARNINGS 1

#include"contact.h"
void menu()
{
	printf("**************CONTACTOR MENU***************\n");
	printf("********      1.   add             ********\n");
	printf("********      2.   dele            ********\n");
	printf("********      3.   srch            ********\n");
	printf("********      4.   modf            ********\n");
	printf("********      5.   show            ********\n");
	printf("********      6.   emty            ********\n");
	printf("********      7.   sort            ********\n");
	printf("********      0.   EXIT            ********\n");	
}
void test()
{

	contact con;
	init_contact(&con);
    int input;

	do{
		menu();
		printf("������ѡ��>:");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			add_contact(&con);
			break;
		case 2:
			dele_contact(&con);
			break;
		case 3:
			srch_contact(&con);
			break;
		case 4:
			modf_contact(&con);
			break;
		case 5:
			show_contact(&con);
			break;
		case 6:
			emty_contact(&con);
			break;
		case 7:
			sort_contact(&con);
			break;
		case 0:
			return;
		default:
			printf("�����ָ������\n");
			return;
		}
	} while (input);                      //ʹ��do����while������ʵ�����һ������֮����Լ���ѡ���������

}


int main()
{
	test();
	return 0;
}