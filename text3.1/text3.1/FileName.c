#define _CRT_SECURE_NO_WARNINGS 1
//小乐乐最近接触了求和符号Σ，他想计算的结果。但是小乐乐很笨，请你帮助他解答。
# include <stdio.h>
//int main()
//{
//	int n = 0;
//	int i = 0;
//	int sum = 0;
//	scanf("%d", &n);
//	for (i = 0; i < n + 1; i++)
//	{
//		sum += i;
//	}
//	printf("%d", sum);
//	return 0;
//}

//小乐乐获得4个最大数，请帮他编程找到最大的数。
//int main()
//{
//        int max=0;
//        int i = 0;
//        do {
//            int num;
//            scanf("%d", &num);
//            if (i == 0 || num > max) {
//                max = num;
//            }
//            i++;
//        } while (i < 4);
//        printf("%d", max);
//        return 0;
//   }
//


//KiKi想判断输入的字符是不是字母，请帮他编程实现。

#include <ctype.h>

int main() {
    char ch = 0;
    while (~scanf(" %c", &ch)) {
        if (isalpha(ch)) {
            printf("%c is an alphabet.\n", ch);
        }
        else {
            printf("%c is not an alphabet.\n", ch);
        }
    }

    return 0;
}
