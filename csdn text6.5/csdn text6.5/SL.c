#include "text.h"

void SeqListInit(SL* ps) //��ʼ��
{
	ps->arr = NULL;
	ps->size = ps->capacity = 0;
}

void CheckCapacity(SL* ps)//���ռ䣬������ˣ���������
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




void SeqListPushBack(SL* psl, SLDataType x)//β��
{
	assert(psl);
	//�ռ��飬����������
	if (psl ->size == psl->capacity)
	{
		CheckCapacity(psl);
	}
	//�㹻��ֱ�Ӳ���
	psl->arr[psl->size++] = x;
	//ps->size++
}


void SLPrint(SL* psl)
{

}




void SeqListPopBack(SL* psl)//ͷ��
{

}



void SeqListDestory(SL* ps);

