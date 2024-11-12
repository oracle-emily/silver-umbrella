#include <iostream>
using namespace std;

//class Solution
//{
//public:
//	void moveZeroes(vector<int>& num)
//	{
//		for (int cur = 0, dest = -1; cur < nums.size(); cur++)
//		{
//			if (nums[cur])//处理非零的元素
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
//typedef void(QB::PtrFunc)();//成员函数指针
//int main()
//{
//	//函数指针
//	void(*ptr)();
//	//成员函数要加&才能取到函数指针
//	PtrFunc fp = &QB::func;//定义成员函数指针p指向函数func
//	QB temp;//定义ob对象temp
//	(temp.*fp)();//调用成员函数
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

	//显式调用
	//operator==(d3, d4);
	d3.operator==(d4);
	
	//直接写 转换调用 编译会转换为operator==(d3, d4)
	//d3 == d4;
	Date d1(2024, 5, 13);
	Date d4(2024, 6, 7);
	//赋值拷贝
	//已经存在的对象，拷贝复制给另一个已经存在的对象
	d1 = d4;
	return 0;
}