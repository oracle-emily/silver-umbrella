#include <stdio.h>

//力扣移动零  C语言做法
void swap(int* a, int* b)
{
	int t = *a;
	*a = *b;
	*b = t;
}

void moveZeroes(int* arr, int num)
{
	int cur = 0;
	int dest = 0;
	for (cur; cur < num; cur++)
	{
		if (arr[cur])
		{
			swap(arr + dest, arr + cur);
			dest++;
		}
	}
}


//C++写法
class Solution
{
public:
	void moveZeroes(vector<int>& nus)
	{
		for (int cur = 0; dest = -1; cur < nums.size(); cur++)
			if (nums[cur])
				swap(nums[++dest], nums[cur]);
	}
};