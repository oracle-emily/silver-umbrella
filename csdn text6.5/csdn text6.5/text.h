#pragma once
#include <stdio.h>
#include<stdlib.h>
#include<assert.h>


//��̬˳���
//#define N 100
typedef int SLDataType;
//struct SeqLIst
//{
//	SLDataType a[100];//��������
//	int size;//��Ч���ݸ���
//};


//��̬���ݱ�

typedef struct SeqList
{
	SLDataType* arr;// ָ��̬���ٵ�����
	int capacity;//��¼˳���Ŀռ��С
	int size;//��¼˳���ǰ����Ч���ݸ���
}SL;


void SeqListInit(SL* ps);//��ʼ��

void SeqListDestory(SL* ps);//����

void CheckCapacity(SL* psl);//���ռ䣬������ˣ���������

void SeqListPushBack(SL* psl, SLDataType x);//β��

void SeqListPopBack(SL* psl);//ͷ��

void SLPrint(SL* psl);


