#include"SList.h"


void SLTPrint(SLTNode* phead)
{
	SLTNode* pcur = phead;
	while (pcur)
	{
		printf("%d->", pcur ->data);
		pcur = pcur->next;
	}
	printf("NULL\n");
}

SLTNode* SLTBuyNode(SLTDatatype x)
{
	SLTNode* newnode=(SLTNode*)malloc(sizeof(SLTNode));
	if (newnode == NULL)
	{
		perror("malloc fail");
		exit(1);
	}
	newnode->data = x;
	newnode->next = NULL;
}

//β��
void SLTPushBack(SLTNode** pphead, SLTDatatype x)
{
	assert(pphead);
	SLTNode* newnode = SLTBuyNode(x);
	//����Ϊ��
	if (*pphead == NULL) {
		*pphead = newnode;
	}
	else {
		//����Ѱ��β�ڵ�
		SLTNode* ptail = *pphead;
		while (ptail->next)
		{
			ptail = ptail->next;
		}
		ptail->next = newnode;
	}
}

//ͷ��
void SLTPushFront(SLTNode** pphead, SLTDatatype x)
{
	assert(pphead);
	SLTNode* newnode = SLTBuyNode(x);
	newnode->next = *pphead;
	*pphead = newnode;
}

//βɾ
void SLTPopBack(SLTNode** pphead)
{
	assert(pphead && *pphead);
	//����ֻ��һ���ڵ�
	if ((*pphead)->next == NULL)
	{
		free(*pphead);
		*pphead = NULL;//why��Ҫ�������������(���)
	}
	else
	{
		//�����ж���ڵ�
		SLTNode* ptail = *pphead;
		SLTNode* pcur = *pphead;
		while (ptail->next)
		{
			pcur = ptail;//��¼��β�ڵ��ǰһ���ڵ�
			ptail = ptail->next;
		}
		free(ptail);
		ptail = NULL;
		pcur->next = NULL;
	}
}

//ͷɾ
void SLTPopFront(SLTNode** pphead)
{
	//������Ϊ��
	assert(pphead && *pphead);
	SLTNode* next = (*pphead)->next;
	free(*pphead);
	*pphead = next;
}

//����
SLTNode* SLTFind(SLTNode* phead, SLTDatatype x)
{
	SLTNode* pcur = phead;
	while (pcur)//�ȼ���pcur != NULL
	{
		if (pcur->data ==x)
		{
			return pcur;
		}
		pcur = pcur->next;
	}
	//pcur == NULL
	return NULL;
}

//��ָ��λ��֮ǰ��������
void SLTInsert(SLTNode** pphead, SLTDatatype x);

//��ָ��λ��֮���������
void SLTInsertAfter(SLTNode* pos, SLTDatatype x);

//ɾ��pos�ڵ�
void SLTErase(SLTNode** pphead, SLTNode* pos);

//ɾ��pos֮��Ľڵ�
void SLTEraseAfter(SLTNode* pos);

//��������
void SListDesTroy(SLTNode** pphead);