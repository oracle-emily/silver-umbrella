#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//ð������ģ��ʵ��qsort����
void bubble_sort(void* base, int num, int size, int(*cmp)(const void*, const void*))
{
	int i = 0;
	for (i = 0; i < num; i++)
	{
		int j = 0;
		for (j = 0; j < num - 1 - i; j++)
		{
			//������Ҫ����cmp����>0������
			if (cmp((char*)base + j * size, (char*)base + (j + 1) * size) > 0)
			{
				//����
				Swap((char*)base + j * size, (char*)base + (j + 1) * size, size);
			}
		}
	}
}






