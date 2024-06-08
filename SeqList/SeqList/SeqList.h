#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include"contact.h"
typedef Info SLdataType;
//typedef  int SLdataType;
typedef  struct SeqList
{
	SLdataType* arr;//指向数组的指针
	int size;//当前的长度
	int capacity;//最大容量
}SL;


void SLInit(SL* psl);

void SLdestory(SL* psl);

void SLcheck(SL* psl);

void SLPushBack(SL* ps, SLdataType x);

void SLPushFront(SL* psl, SLdataType x);

void SLPrint(SL s);

void SLPopBack(SL* psl);//尾删

void SLPopFront(SL* psl);//头删

int SLFind(SL* psl, SLdataType x);