#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//冒泡排序
//有一组整数，需要排序为升序
//1. 两两相邻的元素比较
//2. 如果不满足顺序就交换
//
//当前的代码只适合于整型数据

	void bubble_sort(int arr[], int sz)
	{
		int i = 0;
		
		for (i = 0; i < sz - 1; i++)
		{
			
			int j = 0;
			for (j = 0; j < sz - 1 - i; j++)
			{
				if (arr[j] > arr[j + 1])
				{
					int tmp = arr[j];
					arr[j] = arr[j + 1];
					arr[j + 1] = tmp;
				}
			}
		}
	}
int main()
{
	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr, sz);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}




void qsort(void* base, //指向了需要排序的数组的第一个元素
           size_t num, //排序的元素个数
           size_t size,//一个元素的大小，单位是字节
           int (*cmp)(const void*, const void*)//函数指针类型 - 这个函数指针指向的函数，能够比较base指向数组中的两个元素
          );