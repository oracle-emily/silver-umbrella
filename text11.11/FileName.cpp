#include <iostream>
using namespace std;

//class Solution
//{
//public:
//	void moveZeroes(vector<int>& num)
//	{
//		for (int cur = 0, dest = -1; cur < nums.size(); cur++)
//		{
//			if (nums[cur])//��������Ԫ��
//				swap(num[dest + 1],num[cur]);
//
//		}
//	}
//};

//class QB
//{
//public:
//	void func()
//	{
//		cout << "void func()" << endl;
//	}
//};
//typedef void(QB::PtrFunc)();//��Ա����ָ��
//int main()
//{
//	//����ָ��
//	void(*ptr)();
//	//��Ա����Ҫ��&����ȡ������ָ��
//	PtrFunc fp = &QB::func;//�����Ա����ָ��pָ����func
//	QB temp;//����ob����temp
//	(temp.*fp)();//���ó�Ա����
//}

class Date
{
public:
	Date(int year = 1900, int month = 1, int day = 1)
	{
		_year = year;
		_month = month;
		_day = day;
	}

	/*bool operator==(const Date& d1, const Date& d2)
	{
		return d1._year == d2._year
			&& d1._month == d2._month
			&& d1._day == d2._day;
	}*/
	bool operator==(const Date& d2)
{
	return _year == d2._year
		&& _month == d2._month
		&& _day == d2._day;
}

	private:
	int _year;
	int _month;
	int _day;
};
//bool operator==(const Date& d1, const Date& d2)
//{
//	return d1._year == d2._year
//		&& d1._month == d2._month
//		&& d1._day == d2._day;
//}

int main()
{
	Date d3(2024, 5, 6);
	Date d4(2024, 6, 6);

	//��ʽ����
	//operator==(d3, d4);
	d3.operator==(d4);
	
	//ֱ��д ת������ �����ת��Ϊoperator==(d3, d4)
	//d3 == d4;
	Date d1(2024, 5, 13);
	Date d4(2024, 6, 7);
	//��ֵ����
	//�Ѿ����ڵĶ��󣬿������Ƹ���һ���Ѿ����ڵĶ���
	d1 = d4;
	return 0;
}