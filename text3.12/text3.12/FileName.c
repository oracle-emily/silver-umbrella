#define _CRT_SECURE_NO_WARNINGS 1

//#include <stdio.h>
//void test()
//{
//	printf("hehe\n");
//}
//int main()
//{
//	printf("%p\n", test);
//	printf("%p\n", &test);
//	return 0;
//}

//#include <stdio.h>
//int i;
//int main()
//{
//    i--;
//    if (i > sizeof(i))
//    {
//        printf(">\n");
//    }
//    else
//    {
//        printf("<\n");
//    }
//    return 0;
//}

//#include <stdio.h>
//int main()
//{
//    int i = 1;
//    int ret = (++i) + (++i) + (++i);
//    printf("ret = %d\n", ret);
//    return 0;
//}


//#include<stdio.h>
//int main()
//{
//    int n, m;
//    scanf("%d %d\n", &n, &m);
//    int i, j, arr[2000];
//    int tmp;
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d ", &arr[i]);
//    }
//    for (i = n; i < n + m; i++)
//    {
//        scanf("%d ", &arr[i]);
//    }
//
//    for (i = 0; i < n + m; i++)
//    {
//        for (j = 0; j < n + m - i - 1; j++)
//        {
//            if (arr[j] > arr[j + 1])
//            {
//                tmp = arr[j];
//                arr[j] = arr[j + 1];
//                arr[j + 1] = tmp;
//            }
//        }
//    }
//    for (i = 0; i < n + m; i++)
//    {
//        printf("%d ", arr[i]);
//    }
//}

//#include<stdio.h>
//int main()
//{
//    int n = 0;
//    scanf("%d\n", &n);
//    int i, j, arr[2000];
//    int tmp;
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//
//    for (i = 1; i < n; i++)
//    {
//        for (j = 0; j < i; j++)
//        {
//            if (arr[j] > arr[i])
//            {
//                printf("unsorted");
//                exit();
//            }
//            else if (arr[j] < arr[i] && i == n - 1&&j==n-2) 
//            {
//                printf("sorted");
//            }
//        }
//
//    }
//  
//}


#include <stdio.h>
int main()
{
    int a[55], n, flag1 = 0, flag2 = 0, i;
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        if (i > 0) {
            if (a[i] < a[i - 1]) {
                flag1 = 1;
            }
            else if (a[i] > a[i - 1]) {
                flag2 = 1;
            }
        }
    }
    if (flag1 && flag2) printf("unsorted\n");
    else printf("sorted\n");
}




