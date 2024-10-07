#pragma once

class Stack
{
public:
	void Init(int year, int mouth, int day)
	{
		_year = year;
		_mouth = mouth;
		_day = day;
		}
	//void Print(Stack* this)
	void Print()
	{
		//cout << this->_year << "-" << this->_mouth << "-" << this->_day << endl;
		cout << _year << "-" << _mouth << "-" << _day << endl;
		}
private:
	int *  _a;//指针64位下8字节
	int _app;
	int _capacity;

	int _year;
	int _mouth;
	int _day;
};