#include <stdio.h>
int main()
{
	//���ļ�
	FILE* pf = fopen("data.txt", "w");
	if (pf == NULL)
	{
		perror("fopen");
	}
	//д�ļ�


	//�ر��ļ�
	fclose(pf);
	return 0;

}