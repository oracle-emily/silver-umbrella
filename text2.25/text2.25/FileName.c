#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int Number(int n)
{
    int count = 0;
    unsigned int flag = 1;
    while (flag) {
        if (n & flag) {
            count++;
        }
        flag = flag << 1;
    }
    return count;
}

int main()
{
    int n = 0;
    scanf("%d", &n);
    printf("%d", Number(n));
    return 0;
}
//在这个程序中，我们定义了一个函数NumberOf1，它接受一个整数n作为参数。
//然后，我们用一个while循环遍历n的每一位。如果n的某一位是1（即n& flag的结果为真），我们就增加计数器count的值。
//然后，我们把flag左移一位（即flag = flag << 1）。最后，我们返回count的值，这就是n的二进制表示中1的个数。
//



#include <stdio.h>
int countDifferentBits(int num1, int num2) {
    unsigned int xor = num1 ^ num2;
    int count = 0;
    while (xor) {
        count += xor &1;
        xor >>= 1;
    }
    return count;
}
int main() {
    int num1 = 0;
    int num2 = 0;
    scanf("%d %d", &num1, &num2);
    printf("%d", countDifferentBits(num1, num2));
    return 0;
}
