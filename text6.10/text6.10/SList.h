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


SLTNode* SLTBuyNode(SLDataType x);//扩容
SLTNode* SLTFind(SLTNode* phead, SLDataType x);

//在指定位置之前插入数据
void SLTInsert(SLTNode** pphead, SLTNode* pos, SLDataType x);

void SLTInsert(SLTNode** pphead, SLTNode* pos, SLDataType x);
void SLTEraseAfter(SLTNode* pos);

//销毁链表
void SListDesTroy(SLTNode** pphead);

void SLTErase(SLTNode** pphead, SLTNode* pos);