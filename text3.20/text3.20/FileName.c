#define _CRT_SECURE_NO_WARNINGS 1
# include <stdio.h>
# include <string.h>

//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int Sub(int x, int y)
//{
//	return x - y;
//}
//
//int Mul(int x, int y)
//{
//	return x * y;
//}
//
//int Div(int x, int y)
//{
//	return x / y;
//}

//int main()
//{
//	int (*pf1)(int, int) = Add;
//	int (*pf2)(int, int) = Sub;
//	int (*pf3)(int, int) = Mul;
//	int (*pf4)(int, int) = Div;
//}

//int main()
//{
//	int (*pfArr[4])(int, int) = { Add,Sub,Mul,Div };
//}


//void menu()
//{
//	printf("***************************\n");
//	printf("*****  1.add  2.sub  ******\n");
//	printf("*****  3.mul  4.div  ******\n");
//	printf("*****  0.exit        ******\n");
//	printf("***************************\n");
//	
//}



//int main()
//{
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	int ret = 0;
//	do
//	{
//		menu();
//		printf("请选择:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			printf("请输入两个操作数：");
//			scanf("%d %d", &x, &y);
//				ret = Add(x, y);
//			printf("ret=%d\n", ret);
//			break;
//		case 2:
//			printf("请输入两个操作数：");
//			scanf("%d %d", &x, &y);
//				ret = Sub(x, y);
//			printf("ret=%d\n", ret);
//			break;
//		case 3:
//			printf("请输入两个操作数：");
//			scanf("%d %d", &x, &y);
//				ret = Mul(x, y);
//			printf("ret=%d\n", ret);
//			break;
//		case 4:
//			printf("请输入两个操作数：");
//			scanf("%d %d", &x, &y);
//				ret = Div(x, y);
//			printf("ret=%d\n", ret);
//			break;
//		case 0:
//			printf("退出计算器\n");
//			break;
//		defaule:
//			printf("选择错误，重新选择\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}

//函数指针数组的实现方式
//int main()
//{
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	int ret = 0;
//	int (*pfArr[5])(int, int) = { NULL,Add,Sub,Mul,Div };
//	do
//	{
//		menu();
//		printf("请选择;>");
//		scanf("%d", &input);
//		if (input >= 1 && input <= 4)
//		{
//			printf("请输入两个操作数：");
//			scanf("%d %d", &x, &y);
//			ret = pfArr[input](x, y);
//			printf("ret=%d\n", ret);
//		}
//		else if (input == 0)
//		{
//			printf("退出计算器\n");
//		}
//		else
//		{
//			printf("选择错误，重新选择\n");
//		}
//	} while (input);
//	return 0;
//}


//int (*pf)(int, int);//函数指针
//int (*pfArr[4])(int, int);//函数指针数组
//int(*(*p)[4])(int, int) = &pfArr;//指向函数指针数组的指针


void Calc(int (*pf)(int, int))
{
	int x = 0;
	int y = 0;
	int ret = 0;
	printf("请输入两个操作数:");
	scanf("%d %d", &x, &y);
	ret = pf(x, y);
	printf("ret = %d\n", ret);
}

int main()
{
	int input = 0;
	int x = 0;
	int y = 0;
	int ret = 0;
	do
	{
		menu();
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			Calc(Add);
			break;
		case 2:
			Calc(Sub);
			break;
		case 3:
			Calc(Mul);
			break;
		case 4:
			Calc(Div);
			break;
		case 0:
			printf("退出计算器\n");
			break;
		default:
			printf("选择错误，重新选择\n");
			break;
		}
	} while (input);

	return 0;
}