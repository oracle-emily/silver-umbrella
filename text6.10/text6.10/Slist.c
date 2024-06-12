#include "Slist.h"


void SLTPrint(SLTNode* phead)//���������
{
	SLTNode* pcur = phead;
	while (pcur)//pcur !=NULL
	{
		printf("%d->", pcur->data);
		pcur = pcur->next;
	}
	printf("NULL\n");

}


SLTNode* SLTBuyNode(SLDataType x)//����
{
	SLTNode* newnode = (SLTNode*)malloc(sizeof(SLTNode));
	if (newnode == NULL)
	{
		perror("malloc fail");
		exit(1);
	}
	newnode->data = x;
	newnode->next = NULL;
}


//β��
void SLTPushBack(SLTNode** pphead, SLDataType x)
{
	assert(pphead);
	//*pphead ����ָ���һ���ڵ��ָ��
	//������ͷǿ�����
	SLTNode* newnode = SLTBuyNode(x);
	if (*pphead == NULL)
	{
		*pphead = newnode;
	}
	else
	{
		//��β
		SLTNode* ptail = *pphead;
		while (ptail->next)
		{
			ptail = ptail->next;
		}
		//ptailָ��ľ���β���
		ptail->next = newnode;
	}
}



//ͷ��
void SLTPushFront(SLTNode** pphead, SLDataType x)
{
	assert(pphead);
	SLTNode* newnode = SLTBuyNode(x);
	//newnode *pphead
	newnode->next = *pphead;
	*pphead = newnode;
}



//βɾ
void SLTPopBack(SLTNode** pphead)
{
     //������Ϊ��
	assert(pphead && *pphead);
	//����ֻ��һ���ڵ�

	if ((*pphead)->next == NULL)
	{
		free(*pphead);
		*pphead = NULL;
	}
	else
	{
		//�����ж���ڵ�
		SLTNode* prve = *pphead;
		SLTNode* ptail = *pphead;
		while (ptail->next)
		{
			prve = ptail;
			ptail = ptail->next;
		}
		free(ptail);
		ptail = NULL;
		prve->next = NULL;
	}
}


//ͷɾ
void SLTPopFront(SLTNode** pphead)
{
	assert(pphead && *pphead);

	SLTNode* next = (*pphead)->next;
	free(*pphead);
	*pphead = next;

}

SLTNode* SLTFind(SLTNode* phead, SLDataType x)
{
	SLTNode* pcur = phead;
	while (pcur)
	{
		if (pcur->data == x)
		{
			return pcur;
		}
		pcur = pcur->next;
	}
	return NULL;
}
//��ָ��λ��֮ǰ��������
void SLTInsert(SLTNode** pphead, SLTNode* pos, SLDataType x)
{
	assert(pphead && *pphead);
	assert(pos);
	SLTNode* newnode = SLTBuyNode(x);
	//pos++ *ppheadd˵����ͷ��
	if (pos == *pphead)
	{
		SLTPushFront(pphead, x);
	}
	else {
		SLTNode* prve = *pphead;
		while (prve->next != pos)
		{
			prve = prve->next;
		}
		//prve -> newwnode->pos
		newnode->next == pos;
		prve->next = newnode;
	}
}

void SLTInsertAfter(SLTNode* pos, SLDataType x)
{
	assert(pos);

	SLTNode* newnode = SLTBuyNode(x);
	//pos -> newnode -> pos->next
	newnode->next = pos->next;
	pos->next = newnode;
}
//ɾ��pos�ڵ�
void SLTErase(SLTNode** pphead, SLTNode* pos)
{
	assert(pphead && *pphead);
	assert(pos);
	//pos��ͷ���/pos����ͷ���
	if (pos == *pphead)
	{
		//ͷɾ
		SLTPopFront(pphead);
	}
	else {
		SLTNode* prev = *pphead;
		while (prev->next != pos)
		{
			prev = prev->next;
		}
		//prev pos pos->next
		prev->next = pos->next;
		free(pos);
		pos = NULL;
	}
}


//ɾ��pos֮��Ľڵ�
void SLTEraseAfter(SLTNode* pos)
{
	assert(pos && pos->next);
	SLTNode* del = pos->next;
	//pos del del->next
	pos->next = del->next;
	free(del);
	del = NULL;
}

//��������
void SListDesTroy(SLTNode** pphead)
{
	assert(pphead && *pphead);

	SLTNode* pcur = *pphead;
	while (pcur)
	{
		SLTNode* next = pcur->next;
		free(pcur);
		pcur = next;
	}
	//pcur
	*pphead = NULL;
}
