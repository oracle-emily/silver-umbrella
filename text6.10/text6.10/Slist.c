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
		perrer("malloc fail");
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
	//��������ǿ�����
	SLTNode* newnode = SLTBuyNode(x);
	if (*pphead == NULL)
	{
		*pphead = newnode;
	}
	else
	{
		//��β
		SLTNode* ptail = *pphead;
		while (ptail = ptail->next);
		{
			ptail = ptail->next;
		}
		//ptailָ��ľ���β�ڵ�
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



}