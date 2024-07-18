#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

//定义双向链表节点结构
typedef int LTDataType;
typedef struct ListNode
{
	LTDataType data;
	struct ListNode* prve;
	struct ListNode* next;
}LTNode;


//注意  双向链表是带有哨兵位的  要先初始化一个哨兵位
//void LTInit(LTNode** pphead);
LTNode* LTInit();
void LTDsetroy(LTNode** pphead);

//哨兵位不做更改 则不传二级指针
void LTPushBack(LTNode* phead, LTDataType x);
void LTPushFront(LTNode* phead, LTDataType x);