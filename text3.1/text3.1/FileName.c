#define _CRT_SECURE_NO_WARNINGS 1
//С��������Ӵ�����ͷ��Ŧ����������Ľ��������С���ֺܱ���������������
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

//С���ֻ��4������������������ҵ���������
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


//KiKi���ж�������ַ��ǲ�����ĸ����������ʵ�֡�

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
