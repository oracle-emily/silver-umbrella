#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#define _CRT_SECURE_NO_WARNINGS 1


#define NAME_MAX 100
#define GENDER_MAX 10
#define TEL_MAX 12
#define ADDR_MAX 100


//ʹ��˳���ǰ������
struct SeqList;
typedef struct SeqLIst Contact;


//ͨѶ¼��������
typedef struct PersonInfo
{
	char name[NAME_MAX];
	int age;
	char gender[GENDER_MAX];
	char tel[TEL_MAX];
	char addr[ADDR_MAX];
}Info;
