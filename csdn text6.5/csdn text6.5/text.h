#pragma once
#include <stdio.h>
#include<stdlib.h>
#include<assert.h>


//静态顺序表
//#define N 100
typedef int SLDataType;
//struct SeqLIst
//{
//	SLDataType a[100];//定长数组
//	int size;//有效数据个数
//};


//动态数据表

typedef struct SeqList
{
	SLDataType* arr;// 指向动态开辟的数组
	int capacity;//记录顺序表的空间大小
	int size;//记录顺序表当前的有效数据个数
}SL;


void SeqListInit(SL* ps);//初始化

void SeqListDestory(SL* ps);//销毁

void CheckCapacity(SL* psl);//检查空间，如果满了，进行增容

void SeqListPushBack(SL* psl, SLDataType x);//尾插

void SeqListPopBack(SL* psl);//头插

void SLPrint(SL* psl);


