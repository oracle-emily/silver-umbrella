#define _CRT_SECURE_NO_WARNINGS 1

# include <stdio.h>
//������A�е����ݺ�����B�е����ݽ��н�����������һ����
int main()
{
	int arr[5] = { 1,2,3,4,5 };
	int arr1[5] = { 3,4,5,6,7 };
	
	int i = 0;
	for (i = 0; i < 5; i++)
	{
		printf("%d", arr[i]);
	}
	printf("\n");
	for (i = 0; i < 5; i++)
	{
		printf("%d", arr1[i]);
	}
	printf("\n");
	int change = 0;
	for (i = 0; i < 5; i++)
	{
		change = arr[i];
		arr[i] = arr1[i];
		arr1[i] = change;
	}

	for (i = 0; i < 5; i++)
	{
		printf("%d", arr[i]);
	}
	printf("\n");
	for (i = 0; i < 5; i++)
	{
		printf("%d", arr1[i]);
	}
	return 0;
}




//����һ���������飬��ɶ�����Ĳ���
//
//ʵ�ֺ���init() ��ʼ������Ϊȫ0
//ʵ��print()  ��ӡ�����ÿ��Ԫ��
//ʵ��reverse()  �����������Ԫ�ص����á�
//Ҫ���Լ�������Ϻ����Ĳ���������ֵ��
//

#define SIZE 10 
int arr[SIZE]; 
// ��ʼ������Ϊȫ0
void init() {
	for (int i = 0; i < SIZE; i++) {
		arr[i] = 0;
	}
}

// ��ӡ�����ÿ��Ԫ��
void print() {
	for (int i = 0; i < SIZE; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
}

// �������Ԫ�ص�����
void reverse() {
	for (int i = 0; i < SIZE / 2; i++) {
		int temp = arr[i];
		arr[i] = arr[SIZE - 1 - i];
		arr[SIZE - 1 - i] = temp;
	}
}
int main() {
	init(); 
	print(); 
	reverse(); 
	print(); 
	return 0;
}





//ʵ��һ�������������ð������


#include <stdio.h>

void bubbleSort(int arr[], int n) {
	for (int i = 0; i < n - 1; i++) {
		for (int j = 0; j < n - i - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}

int main() {
	int arr[] = { 64, 34, 25, 12, 22, 11, 90 };
	int n = sizeof(arr) / sizeof(arr[0]);
	bubbleSort(arr, n);
	printf("Sorted array is: \n");
	for (int i = 0; i < n; i++)
		printf("%d ", arr[i]);
	return 0;
}
