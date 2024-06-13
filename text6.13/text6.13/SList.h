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

//β��
void SLTPushBack(SLTNode** pphead, SLTDatatype x);
                        
//ͷ��
void SLTPushFront(SLTNode** pphead, SLTDatatype x);

//βɾ
void SLTPopBack(SLTNode** pphead);

//ͷɾ
void SLTPopFront(SLTNode** pphead);

//����
SLTNode* SLTFind(SLTNode* phead, SLTDatatype x);

//��ָ��λ��֮ǰ��������
void SLTInsert(SLTNode** pphead, SLTDatatype x);

//��ָ��λ��֮���������
void SLTInsertAfter(SLTNode* pos, SLTDatatype x);

//ɾ��pos�ڵ�
void SLTErase(SLTNode** pphead, SLTNode* pos);

//ɾ��pos֮��Ľڵ�
void SLTEraseAfter(SLTNode* pos);

//��������
void SListDesTroy(SLTNode** pphead);