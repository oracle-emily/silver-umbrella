#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#define _CRT_SECURE_NO_WARNINGS 1


#define NAME_MAX 100
#define GENDER_MAX 10
#define TEL_MAX 12
#define ADDR_MAX 100

struct SeqList;
typedef struct SeqLIst Contact;

//通讯录数据类型
typedef struct PersonInfo
{
	char name[NAME_MAX];
	int age;
	char gender[GENDER_MAX];
	char tel[TEL_MAX];
	char addr[ADDR_MAX];
}Info;

//使用顺序表前置声明
struct SeqList;
typedef struct SeqList Contact;


void ContactInit(Contact* pcon);///初始化

void ContactDestory(Contact* pcon);//销毁

void ContactAdd(Contact* pcon);//添加

void ContactDell(Contact* pcon);//删除


void ContactModify(Contact* con);//修改
//通讯录查找
void ContactFind(Contact* con);
//展示通讯录数据
void ContactShow(Contact* con);


void ContactDel(Contact* con);


void ContactModify(Contact* con);