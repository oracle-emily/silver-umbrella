
//struct gift_list
//{
//	//公共属性
//	int stock_number;//库存量
//	double price;//定价
//	int item_type;//商品类型
//
//
//	char title[20];//书名
//	char author[20];//作者
//
//
//	char design[30];//设计
//	int colors;//颜色
//	int sizes;//尺寸
//};
//

//struct gift_list
//{
//	int stock_number;//库存量
//	double price;//定价
//	int item_type;//商品类型
//
//
//	union {
//		struct
//		{
//			char title[20];//书名
//			char author[20];//作者
//		}book;
//		struct
//		{
//			char design[30];//设计
//		}mug;
//		struct
//		{
//			char design[30];//设计
//			int color;//颜色
//			int sizes;//尺寸
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

