#include <stdio.h>
int main()
{
	//打开文件
	FILE* pf = fopen("data.txt", "w");
	if (pf == NULL)
	{
		perror("fopen");
	}
	//写文件


	//关闭文件
	fclose(pf);
	return 0;

}