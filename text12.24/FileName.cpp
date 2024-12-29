#define _CRT_SECURE_NO_WARNINGS 1

//#include <stdio.h>
//#include <malloc.h>
//#define N 2					/*ͣ����������ͣ����*/
//#define Price 2				/*ÿ��λͣ������*/
//typedef struct
//{
//	int CarNo[N];			/*���ƺ�*/
//	int CarTime[N];			/*����ʱ��*/
//	int top;				/*ջָ��*/
//} SqStack;					/*����˳��ջ����*/
//
///*������������*/
//typedef struct qnode
//{
//	int CarNo;			    /*���ƺ�*/
//	struct qnode* next;
//} QNode;
//typedef struct
//{
//	QNode* front;          /*���׺Ͷ�βָ��*/
//	QNode* rear;
//} LiQueue;
//
//
///*˳��ջ�Ļ��������㷨*/
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
///*S�еĲ�����Ԫ��*/
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
///*ɾ��S��ջ��Ԫ�أ�����e1,e2������ֵ*/
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
///*����Ϊ�����еĻ��������㷨*/
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
//	if (q->rear == NULL)		/*������Ϊ��,���½���Ƕ��׽�����Ƕ�β���*/
//		q->front = q->rear = s;
//	else
//	{
//		q->rear->next = s;  /*��*s���������β,rearָ����*/
//		q->rear = s;
//	}
//}
////int deQueue(LiQueue*& q, int& e)
////{
////	QNode* t;
////	if (q->rear == NULL)        /*����Ϊ��*/
////		return 0;
////	if (q->front == q->rear)    /*������ֻ��һ�����ʱ*/
////	{
////		t = q->front;
////		e = t->CarNo;           /* �ȴ洢CarNo��ֵ */
////		q->front = q->rear = NULL;
////	}
////	else                        /*�������ж�����ʱ*/
////	{
////		t = q->front;
////		e = t->CarNo;           /* �ȴ洢CarNo��ֵ */
////		q->front = q->front->next;
////	}
////	free(t);
////	return 1;
////}
//int deQueue(LiQueue*& q, int& e)
//{
//	QNode* t;
//	if (q->rear == NULL)        /*����Ϊ��*/
//		return 0;
//	if (q->front == q->rear)    /*������ֻ��һ�����ʱ*/
//	{
//		t = q->front;
//		e = t->CarNo;           /* �ȴ洢CarNo��ֵ */
//		q->front = q->rear = NULL;
//		free(t);                // �ͷ��ڴ�
//	}
//	else                        /*�������ж�����ʱ*/
//	{
//		t = q->front;
//		e = t->CarNo;           /* �ȴ洢CarNo��ֵ */
//		q->front = q->front->next;
//		free(t);                // �ͷ��ڴ�
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
//	char choose;                /*����ѡ������*/
//	int no, e1, time, e2, kind;     /*���ڴ�ų��ƺš���ǰͣ��ʱ��*/
//	int i, j;
//	SqStack* St, * St1;           /*��ʱջSt1,��ͣ�����м�ĳ�Ҫ�Ƴ�ȥʱ�����ڵ���*/
//	LiQueue* Qu;
//	InitStack(St);
//	InitStack(St1);
//	InitQueue(Qu);
//	printf("##############################################################################");
//	printf("\n#                                                                            #");
//	printf("\n#                            ��ӭʹ��ͣ��������ϵͳ                          #");
//	printf("\n#                                                                            #");
//	printf("\n# ��������ʾ��:����״̬��A��D��E ��ʾ�����У�A:��ʾ�������� D:��ʾ������ȥ,  #");
//	printf("\n#  E:��ʾ���������ÿ�����������������ɣ���:������״̬,���ƺ�,��ǰʱ�̣� #");
//	printf("\n#  ������֮���Զ��ŷֿ��� ��������ʾ��:A,1,5                                 #");
//	printf("\n##############################################################################\n");
//	printf("\n���ڶ�ȡ������Ϣ...\n");
//
//	do
//	{
//		printf("\n*****************************************************************");
//		printf("\n��ֱ���������״̬��A/D/E�������ƺź͵�ǰʱ�̣�����֮���Զ��ŷֿ���:\n");
//		scanf_s(" %c,%d,%d", &choose, &no, &time);
//
//		switch (choose)
//		{
//
//			/*************************** �������� ******************************/
//		case 'A':
//		case 'a':
//
//			if (!StackFull(St))			/*ͣ��������*/
//			{
//				Push(St, no, time);
//				printf("�ó���ͣ�����е�λ����:%d\n", St->top + 1);
//			}
//			else						/*ͣ������*/
//			{
//				enQueue(Qu, no);
//				printf("\nͣ�����������ó����������ڱ���е�λ����:%d\n", QueueLength(Qu));
//			}
//
//			break;
//			/************************* �����뿪 ********************************/
//		case 'D':
//		case 'd':
//
//			printf("\n�����복����𡾳������1.����С���� 2.����ͳ� 3.��������:\n");
//			scanf_s("%d", &kind);
//
//			for (i = 0; i <= St->top && St->CarNo[i] != no; i++);
//			if (i > St->top)       /*Ҫ�뿪�������ڱ����*/
//			{          /*��������ֱ�Ӵӱ���Ͽ��ߣ���ʱ������ǰ�������Ҫ�ȿ�����·��Ȼ���������ŵ���β*/
//				while (Qu->front->CarNo != no)
//				{
//					enQueue(Qu, Qu->front->CarNo);
//					//	deQueue(Qu,Qu->front->CarNo );
//					Qu->front = Qu->front->next;
//				}
//				deQueue(Qu, no);
//				printf("\n����ϳ��ƺ�Ϊ%d���������뿪!\n", no);
//				printf("\n��ǰ����еĳ����ĳ��ƺŷֱ���:");
//				DisplayQueue(Qu);
//				printf("\n");
//
//			}
//			else                             /*Ҫ�뿪��������ͣ������*/
//			{
//				for (j = i; j <= St->top; j++)
//				{
//					Pop(St, e1, e2);           /*e1,e2�������ر�ɾԪ�صĳ��ƺź�ͣ��ʱ��*/
//					Push(St1, e1, e2);		/*��������ʱջSt1�У���e1,e2���뵽��ʱջ��*/
//				}
//				Pop(St, e1, e2);				/*�������뿪*/
//				printf("\n���ƺ�Ϊ%d������ͣ��ʱ��Ϊ��%d��ͣ������Ϊ:%d\n", no, time - e2, (time - e2) * Price * kind);
//				/*��С�������ԣ���ǰʱ�� ��ȥ �ó���ʱͣ����ʱ�̣��ٳ��Լ۸���Ƿ���,�����ڿͳ��Ϳ������ԣ���Ҫ����kind��С�����ļ۸�*/
//				while (!StackEmpty(St1))	/*����ʱջSt1���»ص�St��*/
//				{
//					Pop(St1, e1, e2);
//					Push(St, e1, e2);
//				}
//				if (!QueueEmpty(Qu))		/*�Ӳ���ʱ,����ͷ��ջSt*/
//				{
//					deQueue(Qu, e1);
//					Push(St, e1, time);		/*�Ե�ǰʱ�俪ʼ�Ʒ�*/
//				}
//
//				printf("\n��ǰͣ�����еĳ����ĳ��ƺŷֱ���:");	//���ͣ�����еĳ���
//				DispStack(St);
//			}
//
//			break;
//			/************************   ����  *********************************/
//		case 'E':
//		case 'e':
//
//			printf("\n�����˳�ϵͳ...\n");
//			if (!StackEmpty(St))  	                            //��ʾͣ�������
//			{
//				printf("\n��ǰͣ�����еĳ����ĳ��ƺŷֱ���:");	//���ͣ�����еĳ���
//				DispStack(St);
//				printf("\n");
//			}
//			else  printf("\n��ǰͣ�������޳���\n\n");
//
//
//			break;
//			/************************   ����  *********************************/
//		default:	/*�������*/
//			printf("������������!\n");
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



