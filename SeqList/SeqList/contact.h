#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#define _CRT_SECURE_NO_WARNINGS 1


#define NAME_MAX 100
#define GENDER_MAX 10
#define TEL_MAX 12
#define ADDR_MAX 100


//使用顺序表前置声明
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
