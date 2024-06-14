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

//尾插
void SLTPushBack(SLTNode** pphead, SLTDatatype x)
{
	assert(pphead);
	SLTNode* newnode = SLTBuyNode(x);
	//链表为空
	if (*pphead == NULL) {
		*pphead = newnode;
	}
	else {
		//遍历寻找尾节点
		SLTNode* ptail = *pphead;
		while (ptail->next)
		{
			ptail = ptail->next;
		}
		ptail->next = newnode;
	}
}

//头插
void SLTPushFront(SLTNode** pphead, SLTDatatype x)
{
	assert(pphead);
	SLTNode* newnode = SLTBuyNode(x);
	newnode->next = *pphead;
	*pphead = newnode;
}

//尾删
void SLTPopBack(SLTNode** pphead)
{
	assert(pphead && *pphead);
	//链表只有一个节点
	if ((*pphead)->next == NULL)
	{
		free(*pphead);
		*pphead = NULL;//why需要单拎出来？？？(标记)
	}
	else
	{
		//链表有多个节点
		SLTNode* ptail = *pphead;
		SLTNode* pcur = *pphead;
		while (ptail->next)
		{
			pcur = ptail;//记录下尾节点的前一个节点
			ptail = ptail->next;
		}
		free(ptail);
		ptail = NULL;
		pcur->next = NULL;
	}
}

//头删
void SLTPopFront(SLTNode** pphead)
{
	//链表不能为空
	assert(pphead && *pphead);
	SLTNode* next = (*pphead)->next;
	free(*pphead);
	*pphead = next;
}

//查找
SLTNode* SLTFind(SLTNode* phead, SLTDatatype x)
{
	SLTNode* pcur = phead;
	while (pcur)//等价于pcur != NULL
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

//在指定位置之前插入数据
void SLTInsert(SLTNode** pphead, SLTNode* pos, SLTDatatype x)
{
	assert(pphead && *pphead);
	assert(pos);
	SLTNode* newnode = SLTBuyNode(x);
	//pos==*pphead说明是头插
	if (pos == *pphead)
	{
		SLTPopFront(pphead, x);
	}
	else
	{
		SLTNode* prev = *pphead;
		while (prev->next != pos)
		{
			prev = prev->next;
		}
		newnode->next = pos;
		prev->next = newnode;
	}
}

//在指定位置之后插入数据
void SLTInsertAfter(SLTNode* pos, SLTDatatype x)
{
	assert(pos);
	SLTNode* newnode = SLTBuyNode(x);
	newnode->next = pos->next;
	pos->next = newnode;
}

//删除pos节点
void SLTErase(SLTNode** pphead, SLTNode* pos)
{
	assert(pphead && *pphead);
	assert(pos);
	if (pos == *pphead)
	{
		SLTPopFront(pphead);
	}
	else
	{
		SLTNode* prev = *pphead;
		while (prev->next != pos)
		{
			pos = pos->next;
		}
		prev->next = pos->next;
		free(pos);
		pos = NULL;
	}
}

//删除pos之后的节点
void SLTEraseAfter(SLTNode* pos)
{
	assert(pos && pos->next);
	SLTNode* del = pos->next;
	pos->next = del->next;
	free(del);
	del = NULL;
}

//销毁链表
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
	*pphead = NULL;
}