#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

//����˫������ڵ�ṹ
typedef int LTDataType;
typedef struct ListNode
{
	LTDataType data;
	struct ListNode* prve;
	struct ListNode* next;
}LTNode;


//ע��  ˫�������Ǵ����ڱ�λ��  Ҫ�ȳ�ʼ��һ���ڱ�λ
//void LTInit(LTNode** pphead);
LTNode* LTInit();
void LTDsetroy(LTNode** pphead);

//�ڱ�λ�������� �򲻴�����ָ��
void LTPushBack(LTNode* phead, LTDataType x);
void LTPushFront(LTNode* phead, LTDataType x);