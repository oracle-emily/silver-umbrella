
//struct gift_list
//{
//	//��������
//	int stock_number;//�����
//	double price;//����
//	int item_type;//��Ʒ����
//
//
//	char title[20];//����
//	char author[20];//����
//
//
//	char design[30];//���
//	int colors;//��ɫ
//	int sizes;//�ߴ�
//};
//

//struct gift_list
//{
//	int stock_number;//�����
//	double price;//����
//	int item_type;//��Ʒ����
//
//
//	union {
//		struct
//		{
//			char title[20];//����
//			char author[20];//����
//		}book;
//		struct
//		{
//			char design[30];//���
//		}mug;
//		struct
//		{
//			char design[30];//���
//			int color;//��ɫ
//			int sizes;//�ߴ�
//		}shirt;
//	}item;
//};

# include <stdio.h>
union U
{
		int n ;
		struct S
		{
			char s1;
			char s2;
			char s3;
			char s4;
		}s;

	};

int main()
	{
	union U u = { 0 };
	u.n = 0x11223344;
	printf("%x %x %x %x\n", u.s.s1, u.s.s2, u.s.s3, u.s.s4);

	}

