class Solution
{
public:
	int bitSum(int n) // ���� n �����ÿ?λ�ϵ�ƽ?��{ 
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