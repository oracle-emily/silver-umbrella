#define _CRT_SECURE_NO_WARNINGS 1

//# include<stdio.h>
//int main()
//{
//	char ch = 'w';
//	//ch = 'a';
//	char* pc = &ch;//pc便是字符指针
//	*pc = 'a';
//	return 0;
//}

//int main()
//{
//	char arr[] = "abcdef";
//	const char* p = "abcdef";//理解为把首字符a的地址(字符串的起始地址)赋予*p  abcdef为常量字符串 放入静态区部分，不可修改
//
//}

#include <stdio.h>
int main()
{
	char str1[] = "hello bit.";
	char str2[] = "hello bit.";
	const char* str3 = "hello bit.";
	const char* str4 = "hello bit.";
	if (str1 == str2)
		printf("str1 and str2 are same\n");
	else
		printf("str1 and str2 are not same\n");

	if (str3 == str4)
		printf("str3 and str4 are same\n");
	else
		printf("str3 and str4 are not same\n");

	return 0;
}