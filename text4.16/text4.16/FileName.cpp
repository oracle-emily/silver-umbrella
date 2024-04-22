//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include<string.h>
//# include<assert.h>
//int main()
//{
//	char arr1[20] = "hello ";
//	char arr2[] = "world";
//	strcat(arr1, arr2);
//	printf("%s\n", arr1);
//}


//char* my_strcat(char* dest, const char* scre)
//{
//	char* ret = 0;
//	ret = dest;
//	assert(dest && scre);
//	//查询目标空间'\0'
//	while (*dest)
//	{
//		dest++;
//	}
//	//拷贝数据
//	while (*dest++ = *scre++)
//	{
//		;
//	}
//	return ret;
//}


//
//int my_strcmp(const char* s1, const char* s2)
//{
//	while (*s1 == *s2)
//	{
//		if (*s1 == '\0')
//			return 0;
//		s1++;
//		s2++;
//	}
//	return *s1 - *s2;


#include <iostream>
using namespace std;

int Board[100][100];

void Cover(int tr, int tc, int dr, int dc, int size) {
    if (size == 1) { // 递归出口：棋盘大小为1x1
        return;
    }

    int s = size / 2;
    int t = amount++;

    if (dr < tr + s && dc < tc + s) {
        Cover(tr, tc, dr, dc, s);
    }
    else {
        Board[tr + s - 1][tc + s - 1] = t;
        Cover(tr, tc, tr + s - 1, tc + s - 1, s);
    }

    if (dr < tr + s && dc >= tc + s) {
        Cover(tr, tc + s, dr, dc, s);
    }
    else {
        Board[tr + s - 1][tc + s] = t;
        Cover(tr, tc + s, tr + s - 1, tc + s, s);
    }

    if (dr >= tr + s && dc < tc + s) {
        Cover(tr + s, tc, dr, dc, s);
    }
    else {
        Board[tr + s][tc + s - 1] = t;
        Cover(tr + s, tc, tr + s, tc + s - 1, s);
    }

    if (dr >= tr + s && dc >= tc + s) {
        Cover(tr + s, tc + s, dr, dc, s);
    }
    else {
        Board[tr + s - 1][tc + s - 1] = t;
        Board[tr + s - 1][tc + s] = t;
        Board[tr + s][tc + s - 1] = t;
        Cover(tr + s, tc + s, tr + s, tc + s, s);
    }
}

void OutputBoard(int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            cout << Board[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int size = 1, k, x, y;
    cout << "Enter the value of k: ";
    cin >> k;
    for (int i = 1; i <= k; i++) {
        size *= 2;
    }
    cout << "Enter the incomplete pane coordinates (x y): ";
    cin >> x >> y;
    Cover(0, 0, x, y, size);
    OutputBoard(size);
    return 0;
}

