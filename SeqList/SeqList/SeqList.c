
#include "SeqList.h"
void SLInit(SL* psl)//��ʼ��
{
	psl->arr = NULL;
	psl->capacity = psl->size = 0;
}

void SLcheck(SL* psl)
{
	if (psl->capacity == psl->size)//�ж��ռ��Ƿ�����
	{
		int newcapacity = psl->capacity == 0 ? 4 : 2 * psl->capacity;
		SLdataType* tmp = (SLdataType*)realloc(psl->arr, newcapacity * sizeof(SLdataType));
		if (tmp == NULL)
		{
			perror("realloc fail");
			exit(1);
		}
		psl->capacity = newcapacity;
		psl->arr = tmp;
	}

}


void SLPushBack(SL* psl, SLdataType x)//β��
{
	if (psl->size == psl->capacity)
	{
		assert(psl);
		SLcheck(psl);
	}
	//psl->size = x;
	//psl->size++;
	psl->arr[psl->size++] = x;
}



void SLPushFront(SL* psl, SLdataType x)
{
	if (psl->size == psl->capacity)
	{
		assert(psl);
		SLcheck(psl);
	}
	//�����ƶ�
	for (int i = psl->size; i > 0; i--)
	{
		psl->arr[i] = psl->arr[i - 1];
	}
	psl->arr[0] = x;
	psl->size++;
}
void SLPopBack(SL* psl)//βɾ
{
	assert(psl);
	assert(psl->size);
	psl->size--;
}



void SLPopFront(SL* psl)//ͷɾ
{
	assert(psl);
	assert(psl->size);

	for (int i = 0; i < psl->size - 1; i++)
	{
		psl->arr[i] = psl->arr[i + 1];
	}
	psl->size--;
}


void SLdestory(SL* psl)//����˳���
{
	assert(psl);
	free(psl->arr);
	psl->arr == NULL;
	psl->size = psl->capacity = 0;
}