#define _CRT_SECURE_NO_WARNINGS 1
# include<stdio.h>
# include<string.h>

//int main()
//{
//	char* p = "asdfghjkl";//此代码在C++格式下，是错误的
//	char arr[] = {" hello world "};
//	strcpy(p, arr);
//	printf("%s", p);
//	return 0;
//}


//
//void my_strcpy(char* dest, char* scre)
//{
//	while (*scre != '\0')
//	{
//		*dest = *scre;
//		dest++;
//		scre++;
//	}
//	*dest = *scre;
//}

void my_strcpy(char* dest, char* scre)
{
	assert(dest != '\0');
	assert(scre != '\0');
	while (*dest++ = *scre++)
	{
		;
	}
	return 0;
}