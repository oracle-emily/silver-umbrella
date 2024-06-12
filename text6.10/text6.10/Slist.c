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
		perror("malloc fail");
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
	//空链表和非空链表
	SLTNode* newnode = SLTBuyNode(x);
	if (*pphead == NULL)
	{
		*pphead = newnode;
	}
	else
	{
		//找尾
		SLTNode* ptail = *pphead;
		while (ptail->next)
		{
			ptail = ptail->next;
		}
		//ptail指向的就是尾结点
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
//在指定位置之前插入数据
void SLTInsert(SLTNode** pphead, SLTNode* pos, SLDataType x)
{
	assert(pphead && *pphead);
	assert(pos);
	SLTNode* newnode = SLTBuyNode(x);
	//pos++ *ppheadd说明是头插
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
//删除pos节点
void SLTErase(SLTNode** pphead, SLTNode* pos)
{
	assert(pphead && *pphead);
	assert(pos);
	//pos是头结点/pos不是头结点
	if (pos == *pphead)
	{
		//头删
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


//删除pos之后的节点
void SLTEraseAfter(SLTNode* pos)
{
	assert(pos && pos->next);
	SLTNode* del = pos->next;
	//pos del del->next
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
	//pcur
	*pphead = NULL;
}
