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
//����������У����Ƕ�����һ������NumberOf1��������һ������n��Ϊ������
//Ȼ��������һ��whileѭ������n��ÿһλ�����n��ĳһλ��1����n& flag�Ľ��Ϊ�棩�����Ǿ����Ӽ�����count��ֵ��
//Ȼ�����ǰ�flag����һλ����flag = flag << 1����������Ƿ���count��ֵ�������n�Ķ����Ʊ�ʾ��1�ĸ�����
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
