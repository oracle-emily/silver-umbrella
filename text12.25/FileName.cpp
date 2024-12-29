#include <iostream>
using namespace std;
//
//
//int minchangeFinb(int* arr, int n)
//{
//	if (n < 2)
//	{
//		return 0;
//	}
//	int change = 0;
//	change = (arr[0] != arr[1]);
//	for (int i = 2; i <= n; i++)
//	{
//		if (arr[i] != arr[i - 1] + arr[i - 2])
//		{
//			change++;
//		}
//	}
//	return change;
//}
//
//
//int main()
//{
//	int n = 0;
//	scanf_s("%d", &n);
//	int* arr = (int*)malloc(n * sizeof(int)); 
//	for (int i = 0; i < n; i++)
//	{
//		scanf_s("%d", &arr[i]);
//	}
//	int min = 0;
//	min = minchangeFinb(arr,n);
//	cout << min << endl;
//
//}



//ÒÆ¶¯ÁãÎÊÌâ
int MoveZero(int* arr,int n)
{
	int cur = 0, dest = -1;
	for (cur; cur < n; cur++)
	{
		if (arr[cur])
		{
			swap(arr[++dest], arr[cur]);
		}
		
	}
	return 0;
}
int main()
{
	int n = 0;
	scanf_s("%d", &n);
	int* arr = (int*)malloc(sizeof(int)*n);
	//
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	 MoveZero(arr, n);
	for (int i = 0; i < n; i++)
	{
		printf("%d ",arr[i]);
	}
}