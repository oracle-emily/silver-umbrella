#include"LIst.h"

//void LTInit(LTNode** pphead)
//{
//	*pphead = (LTNode*)malloc(sizeof(LTNode));
//	if (*pphead == NULL){
//		perror("malloc fail");
//	exit(1);
//	}
//	(*pphead)->data = -1;
//	(*pphead)->next = (*pphead)->prve = *pphead;//��ʼ��ʱ ��ָ������
//}


LTNode* LTInit()
{
	LTNode* phead = (LTNode*)malloc(sizeof(LTNode));
	if (phead == NULL)
	{
		perror("malloc fail");
		exit(1);
	}
	phead->data = -1;
	phead->next = phead->prve = phead;

	return phead;
}
//����ռ�
LTNode* LTBuyNode(LTDataType x)
{
	LTNode* newnode = (LTNode*)malloc(sizeof(LTNode));
	if (newnode == NULL)
	{
		perror("malloc fail");
		exit(1);
	}
	newnode->data = x;
	newnode->next = newnode->prve = newnode;
	return newnode;
}

void LTPushBack(LTNode* phead, LTDataType x)
{
 
	LTNode* newnode = LTBuyNode(x);
	//phead phead->prev(ptail) newnode

	newnode->next = phead;
	newnode->prve = phead->prve;

	phead->prve->next = newnode;
	phead->prve = newnode;
}

void LTPushFront(LTNode* phead, LTDataType x)
{

}