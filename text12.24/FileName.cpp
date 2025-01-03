#define _CRT_SECURE_NO_WARNINGS 1

//#include <stdio.h>
//#include <malloc.h>
//#define N 2					/*停车场内最多的停车数*/
//#define Price 2				/*每单位停车费用*/
//typedef struct
//{
//	int CarNo[N];			/*车牌号*/
//	int CarTime[N];			/*进场时间*/
//	int top;				/*栈指针*/
//} SqStack;					/*定义顺序栈类型*/
//
///*定义链队类型*/
//typedef struct qnode
//{
//	int CarNo;			    /*车牌号*/
//	struct qnode* next;
//} QNode;
//typedef struct
//{
//	QNode* front;          /*队首和队尾指针*/
//	QNode* rear;
//} LiQueue;
//
//
///*顺序栈的基本运算算法*/
//void InitStack(SqStack*& s)
//{
//	s = (SqStack*)malloc(sizeof(SqStack));
//	s->top = -1;
//}
//
//
//int StackEmpty(SqStack* s)
//{
//	return(s->top == -1);
//}
//
//
//int StackFull(SqStack* s)
//{
//	return(s->top == N - 1);
//}
//
///*S中的插入新元素*/
//int Push(SqStack*& s, int e1, int e2)
//{
//	if (s->top == N - 1)
//		return 0;
//	s->top++;
//	s->CarNo[s->top] = e1;
//	s->CarTime[s->top] = e2;
//	return 1;
//}
//
///*删除S的栈顶元素，并用e1,e2返回其值*/
//int Pop(SqStack*& s, int& e1, int& e2)
//{
//	if (s->top == -1)
//		return 0;
//	e1 = s->CarNo[s->top];
//	e2 = s->CarTime[s->top];
//	s->top--;
//	return 1;
//}
//void DispStack(SqStack* s)
//{
//	int i;
//	for (i = 0; i <= s->top; i++)
//		printf("%d ", s->CarNo[i]);
//	printf("\n");
//}
//
///*以下为链队列的基本运算算法*/
//void InitQueue(LiQueue*& q)
//{
//	q = (LiQueue*)malloc(sizeof(LiQueue));
//	q->front = q->rear = NULL;
//}
//
//int QueueLength(LiQueue* q)
//{
//	int n = 0;
//	QNode* p = q->front;
//	while (p != NULL)
//	{
//		n++;
//		p = p->next;
//	}
//	return(n);
//}
//int QueueEmpty(LiQueue* q)
//{
//	if (q->rear == NULL)
//		return 1;
//	else
//		return 0;
//}
//void enQueue(LiQueue*& q, int e)
//{
//	QNode* s;
//	s = (QNode*)malloc(sizeof(QNode));
//	s->CarNo = e;
//	s->next = NULL;
//	if (q->rear == NULL)		/*若链队为空,则新结点是队首结点又是队尾结点*/
//		q->front = q->rear = s;
//	else
//	{
//		q->rear->next = s;  /*将*s结点链到队尾,rear指向它*/
//		q->rear = s;
//	}
//}
////int deQueue(LiQueue*& q, int& e)
////{
////	QNode* t;
////	if (q->rear == NULL)        /*队列为空*/
////		return 0;
////	if (q->front == q->rear)    /*队列中只有一个结点时*/
////	{
////		t = q->front;
////		e = t->CarNo;           /* 先存储CarNo的值 */
////		q->front = q->rear = NULL;
////	}
////	else                        /*队列中有多个结点时*/
////	{
////		t = q->front;
////		e = t->CarNo;           /* 先存储CarNo的值 */
////		q->front = q->front->next;
////	}
////	free(t);
////	return 1;
////}
//int deQueue(LiQueue*& q, int& e)
//{
//	QNode* t;
//	if (q->rear == NULL)        /*队列为空*/
//		return 0;
//	if (q->front == q->rear)    /*队列中只有一个结点时*/
//	{
//		t = q->front;
//		e = t->CarNo;           /* 先存储CarNo的值 */
//		q->front = q->rear = NULL;
//		free(t);                // 释放内存
//	}
//	else                        /*队列中有多个结点时*/
//	{
//		t = q->front;
//		e = t->CarNo;           /* 先存储CarNo的值 */
//		q->front = q->front->next;
//		free(t);                // 释放内存
//	}
//	return 1;
//}
//
//
//void DisplayQueue(LiQueue* q)
//{
//
//	QNode* p = q->front;
//	while (p != NULL)
//	{
//		printf("%d  ", p->CarNo);
//		p = p->next;
//	}
//}
//
//
//void main()
//{
//	char choose;                /*用于选择命令*/
//	int no, e1, time, e2, kind;     /*用于存放车牌号、当前停车时刻*/
//	int i, j;
//	SqStack* St, * St1;           /*临时栈St1,当停车场中间的车要推出去时，用于倒车*/
//	LiQueue* Qu;
//	InitStack(St);
//	InitStack(St1);
//	InitQueue(Qu);
//	printf("##############################################################################");
//	printf("\n#                                                                            #");
//	printf("\n#                            欢迎使用停车场管理系统                          #");
//	printf("\n#                                                                            #");
//	printf("\n# 【输入提示】:汽车状态由A、D、E 表示。其中，A:表示汽车到达 D:表示汽车离去,  #");
//	printf("\n#  E:表示输出结束。每次输入的数据由三项构成，即:（汽车状态,车牌号,当前时刻） #");
//	printf("\n#  数据项之间以逗号分开。 例如输入示范:A,1,5                                 #");
//	printf("\n##############################################################################\n");
//	printf("\n正在读取汽车信息...\n");
//
//	do
//	{
//		printf("\n*****************************************************************");
//		printf("\n请分别输入汽车状态（A/D/E）、车牌号和当前时刻（数据之间以逗号分开）:\n");
//		scanf_s(" %c,%d,%d", &choose, &no, &time);
//
//		switch (choose)
//		{
//
//			/*************************** 汽车到达 ******************************/
//		case 'A':
//		case 'a':
//
//			if (!StackFull(St))			/*停车场不满*/
//			{
//				Push(St, no, time);
//				printf("该车在停车场中的位置是:%d\n", St->top + 1);
//			}
//			else						/*停车场满*/
//			{
//				enQueue(Qu, no);
//				printf("\n停车场已满，该车进入便道，在便道中的位置是:%d\n", QueueLength(Qu));
//			}
//
//			break;
//			/************************* 汽车离开 ********************************/
//		case 'D':
//		case 'd':
//
//			printf("\n请输入车的类别【车的类别：1.代表小汽车 2.代表客车 3.代表卡车】:\n");
//			scanf_s("%d", &kind);
//
//			for (i = 0; i <= St->top && St->CarNo[i] != no; i++);
//			if (i > St->top)       /*要离开的汽车在便道上*/
//			{          /*汽车可以直接从便道上开走，此时排在它前面的汽车要先开走让路，然后再依次排到队尾*/
//				while (Qu->front->CarNo != no)
//				{
//					enQueue(Qu, Qu->front->CarNo);
//					//	deQueue(Qu,Qu->front->CarNo );
//					Qu->front = Qu->front->next;
//				}
//				deQueue(Qu, no);
//				printf("\n便道上车牌号为%d的汽车已离开!\n", no);
//				printf("\n当前便道中的车辆的车牌号分别是:");
//				DisplayQueue(Qu);
//				printf("\n");
//
//			}
//			else                             /*要离开的汽车在停车场中*/
//			{
//				for (j = i; j <= St->top; j++)
//				{
//					Pop(St, e1, e2);           /*e1,e2用来返回被删元素的车牌号和停车时刻*/
//					Push(St1, e1, e2);		/*倒车到临时栈St1中，将e1,e2插入到临时栈中*/
//				}
//				Pop(St, e1, e2);				/*该汽车离开*/
//				printf("\n车牌号为%d的汽车停车时间为：%d。停车费用为:%d\n", no, time - e2, (time - e2) * Price * kind);
//				/*对小汽车而言：当前时刻 减去 该车当时停车的时刻，再乘以价格就是费用,而对于客车和卡车而言，就要乘以kind倍小汽车的价格*/
//				while (!StackEmpty(St1))	/*将临时栈St1重新回到St中*/
//				{
//					Pop(St1, e1, e2);
//					Push(St, e1, e2);
//				}
//				if (!QueueEmpty(Qu))		/*队不空时,将队头进栈St*/
//				{
//					deQueue(Qu, e1);
//					Push(St, e1, time);		/*以当前时间开始计费*/
//				}
//
//				printf("\n当前停车场中的车辆的车牌号分别是:");	//输出停车场中的车辆
//				DispStack(St);
//			}
//
//			break;
//			/************************   结束  *********************************/
//		case 'E':
//		case 'e':
//
//			printf("\n正在退出系统...\n");
//			if (!StackEmpty(St))  	                            //显示停车场情况
//			{
//				printf("\n当前停车场中的车辆的车牌号分别是:");	//输出停车场中的车辆
//				DispStack(St);
//				printf("\n");
//			}
//			else  printf("\n当前停车场中无车辆\n\n");
//
//
//			break;
//			/************************   结束  *********************************/
//		default:	/*其他情况*/
//			printf("输入的命令错误!\n");
//			break;
//		}
//	} while (choose != 'E' && choose != 'e');
//
//}



#include <iostream>
using namespace std;

//int main()
//{
//	cout << "Prcatice makes perfiect!" << endl;
//	return 0;
//}

//int main()
//{
//	cout << "V       V" << endl;
//	cout << "  V   V " << endl;
//	cout << "    V " << endl;
//}

//int ChangeFib(int* a,int b)
//{
//	int n = b;
//	int Contrast[] = { 0 };
//	int cout = 0;
//	int compute = a[0];
//	for i
//	//Fibonacci()
//	
//}
//
//
//
//int main()
//{
//	int n = 0;
//	int	i = 0;
//	int arr[] = { 0 };
//	scanf_s("%d/n", &n);
//	for (i; i < n; i++)
//	{
//		scanf_s("%d", arr[i]);
//	}
//	
//}

#include <stdio.h>
#include <stdlib.h>

int minChangesToFibonacciArray(int* arr, int n) {
    if (n < 3) return 0; 

    int changes = (arr[0] != arr[1]);

    for (int i = 2; i <= n; ++i) {
        if (arr[i] != arr[i - 1] + arr[i - 2]) {
            changes++;
           
            //arr[i] = arr[i - 1] + arr[i - 2];
        }
    }
    return changes;
}

int main() {
    int n;
    scanf("%d", &n); 

    int* arr = (int*)malloc(n * sizeof(int)); 
    if (arr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    
    for (int i = 0; i < n; ++i) {
        scanf("%d", &arr[i]);
    }

    
    int result = minChangesToFibonacciArray(arr, n);
    printf("%d\n", result);

    free(arr); 
    return 0;
}



