#include "Seqlist.h"

//��������
void SLtext01()
{
	SL sl;
	SLInit(&sl);

	//����β��
	SLPushBack(&sl, 1);
	SLPushBack(&sl, 2);
	SLPushBack(&sl, 3);
	SLPushBack(&sl, 4);//ctrl+d  ���ٸ���
	// SLPrint(&sl);
	//����ͷ��
	 SLPushFront(&sl,6);
	 SLPushFront(&sl,9);
	 SLPushFront(&sl,8);
	 SLPushFront(&sl,7);
	 SLPrint(&sl);
	 //����βɾ

	/* SLPopBack(&sl);
	 SLPopBack(&sl);
	 SLPopBack(&sl);
	 SLPrint(&sl);*/

	 //����ͷɾ
	 SLPopFront(&sl);
	 SLPopFront(&sl);
	 SLPopFront(&sl);
	 SLPopFront(&sl);
	 SLPrint(&sl);


}


int main()
{
	SLtext01();
	return 0;
	
}