//5 ��ͬһ�鶯̬�ڴ����ͷ�
# include <stdio.h>
# include <stdlib.h>
//int main()
//{
//	int a = 10;
//	int* p = (int*)malloc(40);
//	if (p == NULL)
//	{
//		return 1;
//	}
//	//ʹ��
//
//	//�ͷ�
//	free(p);
//	
//
//	free(p);
//	p = NULL;
//
//	return 0;
//}
// void test()
//{
//    int* p = (int*)malloc(100);
//    if (NULL != p)
//    {
//        *p = 20;
//    }
//    free(p);
//    p = NULL;
//}
//
//int main()
//{
//    
//    test();
//    free(p);
//    while (1);
//}

//���������ѯ

//void GetMemory(char* p)
//{
//    p = (char*)malloc(100);
//}
//void Test(void)
//{
//    char* str = NULL;
//    GetMemory(str);
//    strcpy(str, "hello world");
//    printf(str);
//}
//
//
//int main()
//{
//    Test();
//    return 0;
//}


//void GetMemory(char** p)
//{
//    p = (char*)malloc(100);
//}
//void Test(void)
//{
//    char* str = NULL;
//    GetMemory(&str);
//    strcpy(str, "hello world");
//    printf(str);
//}



char* GetMemory(void)
{
   char p[] = "hello world";
    return p;
}

void Test(void)
{
    char* str = NULL;
    str = GetMemory();
    printf(str);
}

int main()
{
    Test();
    return 0;
}