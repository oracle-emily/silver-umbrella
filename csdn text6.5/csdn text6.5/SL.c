#include "text.h"

void SeqListInit(SL* ps) //初始化
{
	ps->arr = NULL;
	ps->size = ps->capacity = 0;
}

void CheckCapacity(SL* ps)//检查空间，如果满了，进行增容
{
	if (ps->size == ps->capacity)
	{
		int newcapacity = ps->capacity == 0 ? 4 : 2 * ps->capacity;
		SLDataType* tmp = (SLDataType*)realloc(ps->arr, newcapacity * sizeof(SLDataType));
		if (tmp == NULL)
		{
			perror("realloc fail");
			exit(1);
		}
		else {
			ps->arr = tmp;
			ps->capacity = newcapacity;
		}
	}
}




void SeqListPushBack(SL* psl, SLDataType x)//尾插
{
	assert(psl);
	//空间检查，不够则扩容
	if (psl ->size == psl->capacity)
	{
		CheckCapacity(psl);
	}
	//足够就直接插入
	psl->arr[psl->size++] = x;
	//ps->size++
}


void SLPrint(SL* psl)
{

}




void SeqListPopBack(SL* psl)//头插
{

}



void SeqListDestory(SL* ps);

