#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
//链表是由节点组成
typedef int SLDataType;
typedef struct SListNode
{
	SLDataType data;//数据域
	struct SListNode* next;//指针域
}SLTNode;


void SLTPrint(SLTNode* phead);//输出单链表

//尾插
void SLTPushBack(SLTNode** pphead, SLDataType x);
//头插
void SLTPushFront(SLTNode** pphead, SLDataType x);
//尾删
void SLTPopBack(SLTNode** pphead);
//头删
void SLTPopFront(SLTNode** pphead);


SLTNode* SLTBuyNode(SLDataType x);//kuorong