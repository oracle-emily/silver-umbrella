#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include"contact.h"
typedef Info SLdataType;
//typedef  int SLdataType;
typedef  struct SeqList
{
	SLdataType* arr;//ָ�������ָ��
	int size;//��ǰ�ĳ���
	int capacity;//�������
}SL;


void SLInit(SL* psl);

void SLdestory(SL* psl);

void SLcheck(SL* psl);

void SLPushBack(SL* ps, SLdataType x);

void SLPushFront(SL* psl, SLdataType x);

void SLPrint(SL s);

void SLPopBack(SL* psl);//βɾ

void SLPopFront(SL* psl);//ͷɾ

int SLFind(SL* psl, SLdataType x);