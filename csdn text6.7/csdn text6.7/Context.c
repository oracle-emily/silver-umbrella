#include"content.h"
#include"SeqList.h"

//ͨѶ���ʼ��
void ContactInit(Contact* pcon)
{
	SLInit(pcon);//����
}

//����ͨѶ��
void ContactDestory(Contact* pcon)
{
	SLdestory(pcon);
} 

void ContactAdd(Contact* pcon) 
{
	//������ϵ�˽ṹ�����
	Info info;
	printf("��������ϵ������\n");
	sacnf("%s", info.name);
	printf("��������ϵ������\n");
	sacnf("%d" ,&info.age);
	printf("��������ϵ���Ա�\n");
	sancf("%d", info.gender);
	printf("��������ϵ�˵绰\n");
	scanf("%s", info.tel);
	printf("��������ϵ��סַ\n");
	scanf("%s", info.addr);

	//��������
	SLPushBack(pcon, info);
}

int FindByName(Contact* con, char name[])
{
	for (int i = 0; i < con->size; i++)
	{
		if (0 == strcmp(con->arr[i].name, name))
		{
			//�ҵ���
			return i;
		}
	}
	//û���ҵ�
	return -1;
}





void ContactDell(Contact* con)
{
	//Ҫɾ�������ݱ���Ҫ���ڣ�����ִ��ɾ������
	//����
	char name[NAME_MAX];
	printf("������Ҫɾ������ϵ������:\n");
	scanf("%s", name);

	int find = FindByName(con, name);
	if (find < 0)
	{
		printf("Ҫɾ������ϵ�����ݲ����ڣ�\n");
		return;
	}
	//Ҫɾ������ϵ�����ݴ���--->֪����Ҫɾ������ϵ�����ݶ�Ӧ���±�
	SLErase(con, find);
	printf("ɾ���ɹ���\n");
}




void ContactShow(Contact* con)
{
	//��ͷ������  �Ա� ���� �绰  ��ַ
	printf("%s %s %s %s %s\n", "����", "�Ա�", "����", "�绰", "��ַ");
	//����ͨѶ¼�����ո�ʽ��ӡÿ����ϵ������
	for (int i = 0; i < con->size; i++)
	{
		printf("%3s %3s %3d %3s %3s\n", //�ֶ�����һ�¸�ʽ
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
	printf("������Ҫ���ҵ���ϵ������\n");
	scanf("%s", name);

	int find = FindByName(con, name);
	if (find < 0)
	{
		printf("Ҫ���ҵ���ϵ�����ݲ����ڣ�\n");
		return;
	}

}
void ContactModify(Contact * con)
	{
		//Ҫ�޸ĵ���ϵ�����ݴ���
		char name[NAME_MAX];
		printf("������Ҫ�޸ĵ��û�������\n");
		scanf("%s", name);

		int find = FindByName(con, name);
		if (find < 0)
		{
			printf("Ҫ�޸ĵ���ϵ�����ݲ����ڣ�\n");
			return;
		}
		//ֱ���޸�
		printf("�������µ�������\n");
		scanf("%s", con->arr[find].name);

		printf("�������µ��Ա�\n");
		scanf("%s", con->arr[find].gender);

		printf("�������µ����䣺\n");
		scanf("%d", &con->arr[find].age);

		printf("�������µĵ绰��\n");
		scanf("%s", con->arr[find].tel);

		printf("�������µ�סַ��\n");
		scanf("%s", con->arr[find].addr);

		printf("�޸ĳɹ���\n");
	}