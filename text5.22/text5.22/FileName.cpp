#include <stdio.h>
#include<stdlib.h>
//int main()
//{
//	//int arr[10];//
//	//int* p = (int*)malloc(40);
//	int* p = (int*)calloc(100, sizeof(int));
//	if (p == NULL)
//	{
//		perror("malloc");//��飬�����ش�����Ϣ
//		return 1;
//	}
//	//���ʿ��ٵ�40���ֽ�
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i;
//	}
//	//��ӡ
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d", *(p + i));
//	}
//	 free(p);
//	return 0;
//
//}




//int* p = (int*)realloc(NULL, 40);//�ȼ���malloc

//int main()
//{
//	int* p = (int*)malloc(100);
//	if (p == NULL)
//	{
//		//������Ϣ
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
//	//ʹ��
//	int i = 0;
//	for (i = 0; i <= 10; i++)
//	{
//		*(p + i) = i;//��ѭ������11��ʱ��Խ�������
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
	//ʹ��
	//...
	p = &a;//pָ��Ŀռ�Ͳ����Ƕ����ϵĿռ�
	free(p);
	p = NULL;
	//....

	return 0;
}