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
	//ps->arr = (SLDataType*)realloc(ps->arr, 2 * ps->capacity);//ע���ʼ����capacity=0
	/*��Ҫ�ȸ�һ����ʱ�Ŀռ䣬�ж��Ƿ��������ָ�����ռ�*/
	SLDataType* tmp = (SLDataType*)realloc(ps->arr, newCapacity * (sizeof(SLDataType)));//ע���ʼ����capacity=0
	if (tmp == NULL)
	{
		perror("realloc fail!");
	}
	//���ݳɹ�
	//free(ps->arr);//�ض�����ͷ�ԭ��ַ�ռ�,����realloc�Ѿ�������������
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
	//����
	assert(ps);

	if (ps->size == ps->capacity)
	{		//�ռ䲻��  ����
		SLCheckCapacity(ps);
}
	//�ռ��㹻 ֱ�Ӳ���
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
	//������������Ų��һλ���Ӻ���ǰ����
	for (int i = ps->size; i > 0; i--)
	{
		ps->arr[i] = ps->arr[i - 1];
	}
	ps->arr[0] = x;
	ps->size++;
}
//ɾ������
/*˳���Ϊ��---����ִ��ɾ��
˳���Ϊ��---ɾ����Ч����  size--*/
void SLPopBack(SL* ps)
{
	assert(ps);
	assert(ps->size);//˳�����Ϊ0
	ps->size--;
}

void SLPopFront(SL* ps)
{
	assert(ps);
	//��Ϊ��ִ��Ų������
	for (int i=0;i<ps->size-1;i++)
	{
		ps->arr[i] = ps->arr[i + 1];
	}
	ps ->size--;
}
//����
void SLInsert(SL* ps, int pos, SLDataType x)
{
	assert(ps);
	assert(pos && pos <= ps ->size);//��Ҫ��˳��������Ч�����в������ݴ���
	//�ж��Ƿ���Ҫ����
	SLCheckCapacity(ps);
	//�����Ų������
	for (int i=ps->size;i>pos;i--)
	{
		ps->arr[i] = ps->arr[i - 1];
	}
	//����
	ps->arr[pos] = x;
	ps->size++;

}

void SLErease(SL* ps, int pos)//ɾ��
{
	/*˳���Ϊ�գ�����ִ��ɾ������
	˳���Ϊ�գ�pos֮���������ǰŲ����Ϊ*/
	assert(ps);
	assert(pos & pos < ps->size);
	for (int i=pos ; i < ps->size-1 ; i--)
	{
		ps->arr[i] = ps->arr[i + 1];
	}
	ps->size--;
}