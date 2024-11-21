#include <iostream>
using namespace std;

int swap(int* a, int* b)
{
	int t = *a;
	*a = *b;
	*b = t;
}

int MoveZeros(int* num, int numsize)
{
	int cur = 0, dest = 0;
	for (cur; cur < numsize; cur++)
	{
		if (num[cur])
		{
			swap(num + dest, num+ cur);
			dest++;
		}
	}
}