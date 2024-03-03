#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//用指针数组模拟实现二维数组


//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 2,3,4,5,6 };
//	int arr3[] = { 3,4,5,6,7 };
//
//	//指针数组
//	int* arr[3] = { arr1,arr2,arr3 };
//
//	//模拟实现二维数组
//	int i = 0;
//	for (i = 0; i < 3; i++) {
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			printf("%d",arr[i][j]);
//		}
//	}
//}


//int main()
//{
//	int arr[10] = { 0 };
//	printf("%p\n", arr);
//	printf("%p\n", &arr[0]);
//	return 0
//}


int main()
{
	int arr[10] = { 0 };
	printf("%p\n", arr);
	printf("%p\n", &arr);
	return 0;
}


void Print(int arr[3][5], int r, int c)
{
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		int j = 0;
		for (j = 0; j < 5; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
}
int main()
{
	int arr[3][5] = { 1,2,3,4,5, 2,3,4,5,6, 3,4,5,6,7 };
	Print(arr, 3, 5);

	return 0;
}






void test3(char arr[3][5], int r, int c)
{}

void test4(char (*p)[5], int r, int c)
{}
int main()
{
	char arr[3][5] = {0};
	test3(arr, 3, 5);
	test4(arr, 3, 5);

	return 0;
}
