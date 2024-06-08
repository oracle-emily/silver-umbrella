#include"content.h"
#include"SeqList.h"

//通讯表初始化
void ContactInit(Contact* pcon)
{
	SLInit(pcon);//复用
}

//销毁通讯表
void ContactDestory(Contact* pcon)
{
	SLdestory(pcon);
} 

void ContactAdd(Contact* pcon) 
{
	//创建联系人结构体变量
	Info info;
	printf("请输入联系人姓名\n");
	sacnf("%s", info.name);
	printf("请输入联系人年龄\n");
	sacnf("%d" ,&info.age);
	printf("请输入联系人性别\n");
	sancf("%d", info.gender);
	printf("请输入联系人电话\n");
	scanf("%s", info.tel);
	printf("请输入联系人住址\n");
	scanf("%s", info.addr);

	//保存数据
	SLPushBack(pcon, info);
}

int FindByName(Contact* con, char name[])
{
	for (int i = 0; i < con->size; i++)
	{
		if (0 == strcmp(con->arr[i].name, name))
		{
			//找到了
			return i;
		}
	}
	//没有找到
	return -1;
}





void ContactDell(Contact* con)
{
	//要删除的数据必须要存在，才能执行删除操作
	//查找
	char name[NAME_MAX];
	printf("请输入要删除的联系人姓名:\n");
	scanf("%s", name);

	int find = FindByName(con, name);
	if (find < 0)
	{
		printf("要删除的联系人数据不存在！\n");
		return;
	}
	//要删除的联系人数据存在--->知道了要删除的联系人数据对应的下标
	SLErase(con, find);
	printf("删除成功！\n");
}




void ContactShow(Contact* con)
{
	//表头：姓名  性别 年龄 电话  地址
	printf("%s %s %s %s %s\n", "姓名", "性别", "年龄", "电话", "地址");
	//遍历通讯录，按照格式打印每个联系人数据
	for (int i = 0; i < con->size; i++)
	{
		printf("%3s %3s %3d %3s %3s\n", //手动调整一下格式
			con->arr[i].name,
			con->arr[i].gender,
			con->arr[i].age,
			con->arr[i].tel,
			con->arr[i].addr
		);
	}
}


void ContactFind(Contact* con)
{
	//11

	char name[NAME_MAX];
	printf("请输入要查找的联系人姓名\n");
	scanf("%s", name);

	int find = FindByName(con, name);
	if (find < 0)
	{
		printf("要查找的联系人数据不存在！\n");
		return;
	}

}
void ContactModify(Contact * con)
	{
		//要修改的联系人数据存在
		char name[NAME_MAX];
		printf("请输入要修改的用户姓名：\n");
		scanf("%s", name);

		int find = FindByName(con, name);
		if (find < 0)
		{
			printf("要修改的联系人数据不存在！\n");
			return;
		}
		//直接修改
		printf("请输入新的姓名：\n");
		scanf("%s", con->arr[find].name);

		printf("请输入新的性别：\n");
		scanf("%s", con->arr[find].gender);

		printf("请输入新的年龄：\n");
		scanf("%d", &con->arr[find].age);

		printf("请输入新的电话：\n");
		scanf("%s", con->arr[find].tel);

		printf("请输入新的住址：\n");
		scanf("%s", con->arr[find].addr);

		printf("修改成功！\n");
	}