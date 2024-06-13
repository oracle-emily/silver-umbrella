#pragma once
#include <stdio.h>
#include<assert.h>
#include<stdlib.h>

typedef  int SLTDatatype;
typedef struct SListNode {
	SLTDatatype data;
	struct SLIstNode* next;

}SLTNode;

void SLTPrint(SLTNode* phead);

//尾插
void SLTPushBack(SLTNode** pphead, SLTDatatype x);
                        
//头插
void SLTPushFront(SLTNode** pphead, SLTDatatype x);

//尾删
void SLTPopBack(SLTNode** pphead);

//头删
void SLTPopFront(SLTNode** pphead);

//查找
SLTNode* SLTFind(SLTNode* phead, SLTDatatype x);

//在指定位置之前插入数据
void SLTInsert(SLTNode** pphead, SLTDatatype x);

//在指定位置之后插入数据
void SLTInsertAfter(SLTNode* pos, SLTDatatype x);

//删除pos节点
void SLTErase(SLTNode** pphead, SLTNode* pos);

//删除pos之后的节点
void SLTEraseAfter(SLTNode* pos);

//销毁链表
void SListDesTroy(SLTNode** pphead);