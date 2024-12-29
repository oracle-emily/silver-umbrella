#pragma once
//#include <iostream>
//using namespace std;
#include <stdio.h>
#include <stdlib.h>
#include<assert.h>
typedef int SLDataType;
//��̬˳���
//#define N 100
//struct Seqlist
//{
//	SLDataType a[N];
//	int size;
//};

//��̬˳���
typedef struct Seqlist
{
	SLDataType* arr;// �洢���ݵĵײ�ṹ
	int capacity;//��¼˳���Ŀռ��С
	int size;//��¼˳���ǰ��Ч�����ݸ���
}SL;

void SLPrint(SL* ps);//���ֽӿ�һ����
void SLDestry(SL* ps);
void SLInit(SL* ps);//˳����ʼ��

//˳����ͷ����  β����

void SLPushBack(SL* ps, SLDataType x);
void SLPushFront(SL* ps, SLDataType x);

//ͷɾ��  βɾ��

void SLPopBack(SL* ps);
void SLPopFront(SL* ps);


//��ָ��λ�ý��в���ɾ������
void SLInsert(SL* ps, int pos, SLDataType x);//����
void SLErease(SL* ps, int pos);//ɾ��