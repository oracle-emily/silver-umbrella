#define _CRT_SECURE_NO_WARNINGS 1
//我是大V,每个人都想成为大V (VIP：Very Important Person)，
// 但要一点一点积累才行，先从小v做起。要求输出由小写字母v组成的大V。
#include <stdio.h>
//int main()
//{
//	printf("v   v\n");
//	printf(" v v\n");
//	printf("  v\n");
//	return 0;
//}


    int main() {
        int max;
        int i = 0;
        do {
            int num;
            scanf("%d", &num);
            if (i == 0 || num > max) {
                max = num;
            }
            i++;
        } while (i < 4);
        printf("%d", max);
        return 0;
    }




   /* KiKi想判断输入的字符是不是字母，请帮他编程实现。

        输入描述：
        多组输入，每一行输入一个字符。
        输出描述：
        针对每组输入，输出单独占一行，判断输入字符是否为字母，输出内容详见输出样例。*/
        
//#include <ctype.h>
//    int main() {
//        char ch;
//        printf("Enter a character: ");
//        scanf("%c", &ch);
//        if (isalpha(ch)) {
//            printf("%c is an alphabet letter.", ch);
//        }
//        else {
//            printf("%c is not an alphabet letter.", ch);
//        }
//        return 0;
//    }