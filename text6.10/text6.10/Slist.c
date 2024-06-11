#include "Slist.h"


void SLTPrint(SLTNode* phead)//输出单链表
{
	SLTNode* pcur = phead;
	while (pcur)//pcur !=NULL
	{
		printf("%d->", pcur->data);
		pcur = pcur->next;
	}
	printf("NULL\n");

}


SLTNode* SLTBuyNode(SLDataType x)//扩容
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


//尾插
void SLTPushBack(SLTNode** pphead, SLDataType x)
{
	assert(pphead);
	//*pphead 就是指向第一个节点的指针
	//空链表与非空链表
	SLTNode* newnode = SLTBuyNode(x);
	if (*pphead == NULL)
	{
		*pphead = newnode;
	}
	else
	{
		//找尾
		SLTNode* ptail = *pphead;
		while (ptail = ptail->next);
		{
			ptail = ptail->next;
		}
		//ptail指向的就是尾节点
		ptail->next = newnode;
	}
}




//头插
void SLTPushFront(SLTNode** pphead, SLDataType x)
{
	assert(pphead);
	SLTNode* newnode = SLTBuyNode(x);
	//newnode *pphead
	newnode->next = *pphead;
	*pphead = newnode;
}



//尾删
void SLTPopBack(SLTNode** pphead)
{
     //链表不能为空
	assert(pphead && *pphead);
	//链表只有一个节点

	if ((*pphead)->next == NULL)
	{
		free(*pphead);
		*pphead = NULL;
	}
	else
	{
		//链表有多个节点
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


//头删
void SLTPopFront(SLTNode** pphead)
{



}