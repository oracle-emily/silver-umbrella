#define _CRT_SECURE_NO_WARNINGS 1
#include "contact.h"
void menu()
{
	printf("******************ͨѶ¼******************\n");
	printf("*******1.������ϵ��   2.ɾ����ϵ��********\n");
	printf("*******3.�޸���ϵ��   4.������ϵ��********\n");
	printf("*******5.չʾ��ϵ��   0.   �˳�  *********\n");
	printf("******************************************\n");
}

int main()
{
	int  op = -1;
	do
	{
		menu();
		printf("��ѡ����Ĳ�����\n");
		scanf("%d", &op);

		switch (op)
		{
		case 1:   //������ϵ��

			break;
		case 2:   //ɾ����ϵ��

			break;
		case 3:  //�޸���ϵ��

			break;
		case 4:  //������ϵ��

			break;
		case 5:  //չʾ��ϵ��  

			break;
		case 0:  // �˳�
			printf("ͨѶ¼�˳���");
			break;
		}


	} while (op != 0);
	return 0;
}