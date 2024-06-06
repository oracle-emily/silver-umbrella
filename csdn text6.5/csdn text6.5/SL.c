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
	for (int i = 0; i < psl->size; i++)
	{
		printf("%d", psl->arr[i]);
	}
	printf("\n");
}




void SLPushFront(SL* ps, SLDataType x)//ͷ��
{
	assert(ps);
	//�ռ��飬����������
	if (ps->size == ps->capacity)
	{
		CheckCapacity(ps);
	}
	//����˳��������е�������������Ų��һλ
	for (int i = ps->size; i > 0; i--)
	{
		ps->arr[i] = ps->arr[i - 1];//arr[1] = arr[0]
	}
	ps->arr[0] = x;
	ps->size++;
}
void SLPopBack(SL* ps)//βɾ
{
	assert(ps);
	assert(ps->size);
	//˳���Ϊ��
	//ps->arr[ps->size - 1] = -1;
	--ps->size;
}
void SLPopFront(SL* ps)//ͷɾ
{
	assert(ps);
	assert(ps->size);

	//����������ǰŲ��һλ
	for (int i = 0; i < ps->size - 1; i++)
	{
		ps->arr[i] = ps->arr[i + 1]; //arr[size-2] = arr[size-1]
	}
	ps->size--;
}


void SeqListDestory(SL* ps)
{
	if (ps->arr)//�ȼ���if(ps->arr !=0)
	{
		free(ps->arr);
	}
	ps->arr = NULL;
	ps->size = ps->capacity = 0;
}

