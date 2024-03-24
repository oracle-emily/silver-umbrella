#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//冒泡排序，模拟实现qsort函数
void bubble_sort(void* base, int num, int size, int(*cmp)(const void*, const void*))
{
	int i = 0;
	for (i = 0; i < num; i++)
	{
		int j = 0;
		for (j = 0; j < num - 1 - i; j++)
		{
			//假设需要升序cmp返回>0，交换
			if (cmp((char*)base + j * size, (char*)base + (j + 1) * size) > 0)
			{
				//交换
				Swap((char*)base + j * size, (char*)base + (j + 1) * size, size);
			}
		}
	}
}






