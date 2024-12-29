#include <iostream>
using namespace std;

void swap(int* a, int* b)
{
	int t = *a;
	*a = *b;
	*b = t;
}

void moveZeros(int* nums, int numsizes)
{
	int cur = 0;
	int dest = 0;
	for (cur; cur < numsizes ; cur++)
	{
		if (nums[cur])
		{
			swap(nums + dest, nums + cur);
			dest++;
		}
		

	}
}

//void moveZeroes(int* nums, int numsSize) {
//	int left = 0, right = 0;
//	while (right < numsSize) {
//		if (nums[right]) {
//			swap(nums + left, nums + right);
//			left++;
//		}
//		right++;
//	}
//}

int main()
{
	int nums[10] = { 1,3,5,0,6,8,0,3,0,4 };
	moveZeros(nums, 10);
	int i = 0;
	for (i; i < 10; i++)
	{
		printf("%d ", nums[i]);
	}
	
}