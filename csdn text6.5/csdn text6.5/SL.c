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
	for (int i = 0; i < psl->size; i++)
	{
		printf("%d", psl->arr[i]);
	}
	printf("\n");
}




void SLPushFront(SL* ps, SLDataType x)//头插
{
	assert(ps);
	//空间检查，不够则扩容
	if (ps->size == ps->capacity)
	{
		CheckCapacity(ps);
	}
	//先让顺序表中已有的数据整体往后挪动一位
	for (int i = ps->size; i > 0; i--)
	{
		ps->arr[i] = ps->arr[i - 1];//arr[1] = arr[0]
	}
	ps->arr[0] = x;
	ps->size++;
}
void SLPopBack(SL* ps)//尾删
{
	assert(ps);
	assert(ps->size);
	//顺序表不为空
	//ps->arr[ps->size - 1] = -1;
	--ps->size;
}
void SLPopFront(SL* ps)//头删
{
	assert(ps);
	assert(ps->size);

	//数据整体往前挪动一位
	for (int i = 0; i < ps->size - 1; i++)
	{
		ps->arr[i] = ps->arr[i + 1]; //arr[size-2] = arr[size-1]
	}
	ps->size--;
}


void SeqListDestory(SL* ps)
{
	if (ps->arr)//等价于if(ps->arr !=0)
	{
		free(ps->arr);
	}
	ps->arr = NULL;
	ps->size = ps->capacity = 0;
}

