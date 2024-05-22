#include <stdio.h>
#include<stdlib.h>
//int main()
//{
//	//int arr[10];//
//	//int* p = (int*)malloc(40);
//	int* p = (int*)calloc(100, sizeof(int));
//	if (p == NULL)
//	{
//		perror("malloc");//检查，并返回错误信息
//		return 1;
//	}
//	//访问开辟的40个字节
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i;
//	}
//	//打印
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d", *(p + i));
//	}
//	 free(p);
//	return 0;
//
//}




//int* p = (int*)realloc(NULL, 40);//等价于malloc

//int main()
//{
//	int* p = (int*)malloc(100);
//	if (p == NULL)
//	{
//		//报错信息
//		perror("malloc");
//		return 1;
//	}
//	*p = 20;
//}



//int main()
//{
//	int* p = (int*)malloc(40);
//	if (p == null)
//	{
//		return 1;
//	}
//	//使用
//	int i = 0;
//	for (i = 0; i <= 10; i++)
//	{
//		*(p + i) = i;//当循环到第11次时就越界访问了
//	}
//	//
//	free(p);
//	p = null;
//
//	return 0;
//}


int main()
{
	int a = 10;
	int* p = (int*)malloc(40);
	if (p == NULL)
	{
		return 1;
	}
	//使用
	//...
	p = &a;//p指向的空间就不再是堆区上的空间
	free(p);
	p = NULL;
	//....

	return 0;
}