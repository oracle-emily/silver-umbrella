//#include <stdio.h>
//
//int main()
//
//{
//	int m = 0;
//	int n = 0;
//	int max = 0;
//	int sum = 0;
//	int i, j = 0;
//	scanf("%d% %d", &m, &n);
//
//	int arr[][100] = { 0 };
//
//	for (i = 0; i < m; i++)
//
//		for (j = 0; j < n; j++)
//
//		{
//
//			scanf("%d", &arr[i][j]);
//
//			sum += arr[i][j];
//
//			if (arr[i][j] > max)
//
//			{
//
//				max = arr[i][j];
//
//			}
//
//		}
//
//
//float avg = (float)sum / (m * n);
//printf("%d\n", max);
//printf("%d" ,avg);
//return 0;
//
//}



# include <stdio.h>

# include <string.h>

void funs(char* num)

{

	int len = 0;

	len = strlen(num);

	for (int i = 0; i < len; i++)

	{

		if (i > 3 && i <= len - 4)

		{

			printf("*");

		}

		else

		{

			printf("%c",num[i]);

		}

	}

}



int main()

{
	int n = 0;

	scanf("%d", &n);

	getchar();

	for (int i = 0; i < n; i++)

	{

		char num[20];

		printf("%d", i + 1);

		fgets(num, sizeof(num), stdin);

		funs(num);
	}

	return 0;

}