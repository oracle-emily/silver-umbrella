#include<stdio.h>
////int main()
//{
//	//打开文件 只写模式
//	FILE* pf = fopen("data.txt", "w");
//	if (pf == NULL)
//	{
//		perror("fopen");
//	}
//	//写文件 操作
//	//
//	fputs("a", pf);
//	fputs("b", pf);
//	fputs("c", pf);
//	fputs("d", pf);
//	
//	//关闭文件
//	fclose(pf);
//
////}


int main()
{
	FILE* pfread = fopen("data1.txt", "r");
	if (pfread == NULL)
	{
		perror("fopen->data1.txt");
		return 1;
	}
	FILE* pfwrite = fopen("data2.txt", "w");
	if (pfwrite == NULL)
	{
		fclose(pfread);
		pfread = NULL;
		perror("fopen->data2.txt");
		return 1;
	}
	//数据的读写（拷贝）
	int ch = 0;
	while ((ch = fgetc(pfread)) != EOF)
	{
		fputc(ch, pfwrite);
	}


	fclose(pfread);
	fclose(pfwrite);

	return 0;
}