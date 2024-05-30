# include <stdio.h>
# include <stdlib.h>
# include <string.h>

//void GetMemory(char** p, int num)
//{
//    *p = (char*)malloc(num);
//}
//没有释放动态内存空间
//void Test(void)
//{
//    char* str = NULL;
//    GetMemory(&str, 100);
//    strcpy(str, "hello");
//    printf(str);
//    free(str);
//    str = NULL;
//}



void Test(void)
{
    char* str = (char*)malloc(100);
    strcpy(str, "hello");
    free(str);
    str = NULL;

    //str就是野指针
    if (str != NULL)
    {
        strcpy(str, "world");//非法访问
        printf(str);
    }




    int main()
{
	//struct St s = {0};
	//printf("%d\n", sizeof(struct St));
	struct St* ps = (struct St*)malloc(sizeof(struct St) + 10 * sizeof(int));
	if (ps == NULL)
	{
		perror("malloc");
		return 1;
	}
	ps->c = 'w';
	ps->n = 100;
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		ps->arr[i] = i;
	}
	//数组空间不够
	struct St* ptr = realloc(ps, sizeof(struct St) + 15 * sizeof(int));
	if (ptr != NULL)
	{
		ps = ptr;
	}
	else
	{
		perror("realloc");
		return 1;
	}
	//...继续使用

	for (i = 10; i < 15; i++)
	{
		ps->arr[i] = i;
	}

	for (i = 0; i < 15; i++)
	{
		printf("%d ", ps->arr[i]);
	}
	printf("\n%d\n", ps->n);
	printf("%c\n", ps->c);



	//释放
	free(ps);
	ps = NULL;

	return 0;
}
