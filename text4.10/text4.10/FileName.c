#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <assert.h>
//int main()
//{
//	char arr1[] = { "abcdef" };
//	char arr2[] = { 'a','b','c','d' };
//	int ret1 = 0, ret2 = 0;
//	ret1 = strlen(arr1);
//	ret2 = strlen(arr2);
//	printf("%d\n%d", ret1, ret2);
//	return 0;
//}

/*int main()
{
	const char* str1 = "abcdef";
	const char* str2 = "bbb";
	if (strlen(str2) - strlen(str1) > 0)
	{
		printf("str2>str1\n");
	}
	else
	{
		printf("srt1>str2\n");
	}
	return 0;
}*/

size_t my_strlen(const char* str)
{
	size_t count = 0;
	assert(str != NULL);
	while (*str)
	{
		count++;
		str++;
	}
	return count;

}


int main()
{
	char arr[] = { "hello world" };
	
}