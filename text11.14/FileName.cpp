class Solution
{
public:
	int bitSum(int n) // 返回 n 这个数每?位上的平?和{ 
		int sum = 0;
	while (n)
	{
		int t = n % 10;
		sum += t * t;
		n /= 10;
	}
	return sum;
}
bool isHappy(int n)
{
	int slow = n, fast = bitSum(n);
	while (slow != fast)
	{
		slow = bitSum(slow);
		fast = bitSum(bitSum(fast));
	}
	return slow == 1;
}
};