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

//ͨѶ¼��������
typedef struct PersonInfo
{
	char name[NAME_MAX];
	int age;
	char gender[GENDER_MAX];
	char tel[TEL_MAX];
	char addr[ADDR_MAX];
}Info;

//ʹ��˳���ǰ������
struct SeqList;
typedef struct SeqList Contact;


void ContactInit(Contact* pcon);///��ʼ��

void ContactDestory(Contact* pcon);//����

void ContactAdd(Contact* pcon);//���

void ContactDell(Contact* pcon);//ɾ��


void ContactModify(Contact* con);//�޸�
//ͨѶ¼����
void ContactFind(Contact* con);
//չʾͨѶ¼����
void ContactShow(Contact* con);


void ContactDel(Contact* con);


void ContactModify(Contact* con);