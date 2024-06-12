#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
//�������ɽڵ����
typedef int SLDataType;
typedef struct SListNode
{
	SLDataType data;//������
	struct SListNode* next;//ָ����
}SLTNode;


void SLTPrint(SLTNode* phead);//���������

//β��
void SLTPushBack(SLTNode** pphead, SLDataType x);
//ͷ��
void SLTPushFront(SLTNode** pphead, SLDataType x);
//βɾ
void SLTPopBack(SLTNode** pphead);
//ͷɾ
void SLTPopFront(SLTNode** pphead);


SLTNode* SLTBuyNode(SLDataType x);//����
SLTNode* SLTFind(SLTNode* phead, SLDataType x);

//��ָ��λ��֮ǰ��������
void SLTInsert(SLTNode** pphead, SLTNode* pos, SLDataType x);

void SLTInsert(SLTNode** pphead, SLTNode* pos, SLDataType x);
void SLTEraseAfter(SLTNode* pos);

//��������
void SListDesTroy(SLTNode** pphead);

void SLTErase(SLTNode** pphead, SLTNode* pos);