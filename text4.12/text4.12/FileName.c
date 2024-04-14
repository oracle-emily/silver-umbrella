#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <assert.h>
//size_t my_strlen(char* str)
//{
//	size_t count = 0;
//	assert(str != NULL);
//	while (*str)
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
// 
size_t my_strlen(char* str);

//
int main()
{
	char arr[] = { "hello world" };
	size_t ret = my_strlen(arr);
	printf("%zd", ret);
	return 0;
}


size_t my_strlen(char* str)
{
	if (*str == '\0')
		return 0;
	else
		return 1 + my_strlen(1 + str);
}