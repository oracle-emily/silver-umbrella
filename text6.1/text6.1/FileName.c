#include<stdio.h>
////int main()
//{
//	//���ļ� ֻдģʽ
//	FILE* pf = fopen("data.txt", "w");
//	if (pf == NULL)
//	{
//		perror("fopen");
//	}
//	//д�ļ� ����
//	//
//	fputs("a", pf);
//	fputs("b", pf);
//	fputs("c", pf);
//	fputs("d", pf);
//	
//	//�ر��ļ�
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
	//���ݵĶ�д��������
	int ch = 0;
	while ((ch = fgetc(pfread)) != EOF)
	{
		fputc(ch, pfwrite);
	}


	fclose(pfread);
	fclose(pfwrite);

	return 0;
}