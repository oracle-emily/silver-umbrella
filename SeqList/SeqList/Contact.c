#define _CRT_SECURE_NO_WARNINGS 1
#include "contact.h"
void menu()
{
	printf("******************通讯录******************\n");
	printf("*******1.增加联系人   2.删除联系人********\n");
	printf("*******3.修改联系人   4.查找联系人********\n");
	printf("*******5.展示联系人   0.   退出  *********\n");
	printf("******************************************\n");
}

int main()
{
	int  op = -1;
	do
	{
		menu();
		printf("请选择你的操作：\n");
		scanf("%d", &op);

		switch (op)
		{
		case 1:   //增加联系人

			break;
		case 2:   //删除联系人

			break;
		case 3:  //修改联系人

			break;
		case 4:  //查找联系人

			break;
		case 5:  //展示联系人  

			break;
		case 0:  // 退出
			printf("通讯录退出中");
			break;
		}


	} while (op != 0);
	return 0;
}