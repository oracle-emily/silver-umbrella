#define _CRT_SECURE_NO_WARNINGS 1
//���Ǵ�V,ÿ���˶����Ϊ��V (VIP��Very Important Person)��
// ��Ҫһ��һ����۲��У��ȴ�Сv����Ҫ�������Сд��ĸv��ɵĴ�V��
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




   /* KiKi���ж�������ַ��ǲ�����ĸ����������ʵ�֡�

        ����������
        �������룬ÿһ������һ���ַ���
        ���������
        ���ÿ�����룬�������ռһ�У��ж������ַ��Ƿ�Ϊ��ĸ���������������������*/
        
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