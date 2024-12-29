#pragma once
//#include <iostream>
//using namespace std;
#include <stdio.h>
#include <stdlib.h>
#include<assert.h>
typedef int SLDataType;
//静态顺序表
//#define N 100
//struct Seqlist
//{
//	SLDataType a[N];
//	int size;
//};

//动态顺序表
typedef struct Seqlist
{
	SLDataType* arr;// 存储数据的底层结构
	int capacity;//记录顺序表的空间大小
	int size;//记录顺序表当前有效的数据个数
}SL;

void SLPrint(SL* ps);//保持接口一致性
void SLDestry(SL* ps);
void SLInit(SL* ps);//顺序表初始化

//顺序表的头插入  尾插入

void SLPushBack(SL* ps, SLDataType x);
void SLPushFront(SL* ps, SLDataType x);

//头删除  尾删除

void SLPopBack(SL* ps);
void SLPopFront(SL* ps);


//在指定位置进行插入删除操作
void SLInsert(SL* ps, int pos, SLDataType x);//插入
void SLErease(SL* ps, int pos);//删除