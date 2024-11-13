#include <iostream>
using namespace std;
//class Solution
//{
//public:
//	void moveZeroes(vector<int>& nums)
//	{
//		for (int cur = 0, dest = -1; cur < nums.size(); cur++)
//			if (nums[cur]) // ����?��Ԫ�� 
//				swap(nums[++dest], nums[cur]);
//	}
//};class Solution
{
public:
	void duplicateZeros(vector<int>& arr)
	{
		// 1. ���ҵ����?���� 
		int cur = 0, dest = -1, n = arr.size();
		while (cur < n)
		{
			if (arr[cur]) dest++;
			else dest += 2;
			if (dest >= n - 1) break;
			cur++;
		}
		// 2. ����?�±߽���� 
		if (dest == n)
		{
			arr[n - 1] = 0;
			cur--; dest -= 2;
		}
		// 3. �Ӻ���ǰ��ɸ�д���� 
		while (cur >= 0)
		{
			if (arr[cur]) arr[dest--] = arr[cur--];
			else
			{
				arr[dest--] = 0;
				arr[dest--] = 0;
				cur--;
			}
		}
	}
};