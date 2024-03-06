#define _CRT_SECURE_NO_WARNINGS 1

//门牌制作 从 1 到202的所有数字中，共有多少个2？
#include <stdio.h>

int main() {
    int count = 0;
    int i = 0;
    for (int i = 0; i < 2021; i++) {
        int num = i;
        while (num) {
            if (num % 10 == 2) {
                count++;
            }
            num /= 10;
        }
    }
    printf("%d", count);
    return 0;
}