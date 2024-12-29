#include "Seqlist.h"

//≤‚ ‘”√¿˝
void SLtext01()
{
	SL sl;
	SLInit(&sl);

	//≤‚ ‘Œ≤≤Â
	SLPushBack(&sl, 1);
	SLPushBack(&sl, 2);
	SLPushBack(&sl, 3);
	SLPushBack(&sl, 4);//ctrl+d  øÏÀŸ∏¥÷∆
	// SLPrint(&sl);
	//≤‚ ‘Õ∑≤Â
	 SLPushFront(&sl,6);
	 SLPushFront(&sl,9);
	 SLPushFront(&sl,8);
	 SLPushFront(&sl,7);
	 SLPrint(&sl);
	 //≤‚ ‘Œ≤…æ

	/* SLPopBack(&sl);
	 SLPopBack(&sl);
	 SLPopBack(&sl);
	 SLPrint(&sl);*/

	 //≤‚ ‘Õ∑…æ
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