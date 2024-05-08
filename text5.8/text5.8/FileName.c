# include<stdio.h>
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9 };
//	int* p = NULL;
//	int size = sizeof(arr) / sizeof(arr[0]);
//	p = arr;
//	int* pp = NULL;
//	pp = arr + size;
//	for (; p < pp; p++) {
//		printf("%d", *p);
//	}
//
//}


//int main()
//{
//    int a = 0x11223344;
//    char* pc = (char*)&a;
//    *pc = 0;
//    printf("%x\n", a);
//    return 0;
//}


//int main()
//{
//    int arr[] = { 1,2,3,4,5 };
//    short* p = (short*)arr;
//    int i = 0;
//    for (i = 0; i < 4; i++)
//    {
//        *(p + i) = 0;
//    }
//
//    for (i = 0; i < 5; i++)
//    {
//        printf("%d ", arr[i]);
//    }
//    return 0;
//}



#include <string.h>

int main() {
    char str[100];
    fgets(str, sizeof(str), stdin);
    int len = strlen(str) - 1;
    for (int i = len; i >= 0; i--) {
        printf("%c", str[i]);
    }
        return 0;
}