#include "Seqlist.h"

void SLInit(SL* ps)
{
	ps->arr = NULL;
	ps->size = ps->capacity = 0;
}

void SLDestry(SL* ps)
{

}

void SLCheckCapacity(SL* ps)
{
	int newCapacity = ps->capacity == 0 ? 4 : 2 * ps->capacity;
	//ps->arr = (SLDataType*)realloc(ps->arr, 2 * ps->capacity);//注意初始化后capacity=0
	/*需要先给一个临时的空间，判断是否会出错后再指向这块空间*/
	SLDataType* tmp = (SLDataType*)realloc(ps->arr, newCapacity * (sizeof(SLDataType)));//注意初始化后capacity=0
	if (tmp == NULL)
	{
		perror("realloc fail!");
	}
	//扩容成功
	//free(ps->arr);//重定向后，释放原地址空间,不过realloc已经完成这个工作了
	ps->arr = tmp;
	ps->capacity = newCapacity;
}

void SLPrint(SL* ps)
{
	for (int i = 0; i < ps->size; i++)
	{
		printf("%d ", ps->arr[i]);
	}
	printf("\n");
}



void SLPushBack(SL* ps, SLDataType x)
{
	//断言
	assert(ps);

	if (ps->size == ps->capacity)
	{		//空间不足  扩容
		SLCheckCapacity(ps);
}
	//空间足够 直接插入
	ps->arr[ps->size++] = x;
	//ps->size++;

}

void SLPushFront(SL* ps, SLDataType x)
{
	assert(ps);
	if (ps->size == ps->capacity);
	{
		SLCheckCapacity(ps);
	}
	//旧数据往后面挪动一位，从后往前遍历
	for (int i = ps->size; i > 0; i--)
	{
		ps->arr[i] = ps->arr[i - 1];
	}
	ps->arr[0] = x;
	ps->size++;
}
//删除操作
/*顺序表为空---不能执行删除
顺序表不为空---删除有效数据  size--*/
void SLPopBack(SL* ps)
{
	assert(ps);
	assert(ps->size);//顺序表不能为0
	ps->size--;
}

void SLPopFront(SL* ps)
{
	assert(ps);
	//不为空执行挪动操作
	for (int i=0;i<ps->size-1;i++)
	{
		ps->arr[i] = ps->arr[i + 1];
	}
	ps ->size--;
}
//插入
void SLInsert(SL* ps, int pos, SLDataType x)
{
	assert(ps);
	assert(pos && pos <= ps ->size);//需要在顺序表里的有效数据中插入数据代码
	//判断是否需要扩容
	SLCheckCapacity(ps);
	//向后面挪动数据
	for (int i=ps->size;i>pos;i--)
	{
		ps->arr[i] = ps->arr[i - 1];
	}
	//插入
	ps->arr[pos] = x;
	ps->size++;

}

void SLErease(SL* ps, int pos)//删除
{
	/*顺序表为空，不能执行删除操作
	顺序表不为空，pos之后的数据向前挪动以为*/
	assert(ps);
	assert(pos & pos < ps->size);
	for (int i=pos ; i < ps->size-1 ; i--)
	{
		ps->arr[i] = ps->arr[i + 1];
	}
	ps->size--;
}