#define _CRT_SECURE_NO_WARNINGS 1
# include<stdio.h>
# include<string.h>

//int main()
//{
//	char* p = "asdfghjkl";//�˴�����C++��ʽ�£��Ǵ����
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