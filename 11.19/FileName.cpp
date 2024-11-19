#include <iostream>
using namespace std;
class Solutidon
{
public:
	int maxArea(vector <int>& height)
	{
		int left = 0, right = 0, ret = 0;
		while (left < right)
		{
			int v = min(height[left], height[right] * (right - left));
			ret = max(ret, v);
			if (height[left] < height[right]) left++;
			else right++;
		}
	}
};