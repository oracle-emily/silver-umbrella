#include <stdio.h>
//206��ת����

//typedef struct ListNode  ListNode;
//struct ListNode* reverseList(struct ListNode* head) {
//    //�����Ƿ�Ϊ������
//    if (head == NULL)
//    {
//        return head;
//    }
//    //��������ָ��
//    ListNode* n1, * n2, * n3;
//    n1 = NULL, n2 = head, n3 = head->next;
//
//    //����������  ��תָ��
//    ListNode* pcur = head;
//    while (n2)
//    {
//        //�޸�n2ָ��
//        n2->next = n1;
//        //�޸�����ָ���ַ  
//        n1 = n2;
//        n2 = n3;
//        if (n3) {
//            n3 = n3->next;
//        }
//    }
//    return n1;
//}


//21 �ϲ�������������

//typedef struct ListNode ListNode;
//struct ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
//    if (list1 == NULL)
//    {
//        return list2;
//    }
//    if (list2 == NULL)
//    {
//        return list1;
//    }
//
//    ListNode* l1, * l2;
//    l1 = list1, l2 = list2;
//
//    ListNode* newhead, * newtail;
//    newhead = newtail = NULL;
//
//    while (l1 && l2)
//    {
//        if (l1->val < l2->val)
//        {
//            if (newhead == NULL)
//            {
//                newhead = newtail = l1;
//            }
//            else {
//                newtail->next = l1;
//                newtail = newtail->next;
//            }
//            l1 = l1->next;
//        }
//        else
//        {
//            if (newhead == NULL)
//            {
//                newhead = newtail = l2;
//            }
//            else {
//                newtail->next = l2;
//                newtail = newtail->next;
//            }
//            l2 = l2->next;
//        }
//    }
//    //����ѭ������������� l1Ϊ�գ�l2��Ϊ��  ��֮
//    if (l1)
//    {
//        newtail->next = l1;
//    }
//    if (l2)
//    {
//        newtail->next = l2;
//    }
//    return newhead;
//}


//  0204�ָ�����

//typedef struct  ListNode ListNode;
//struct ListNode* partition(struct ListNode* head, int x) {
//    if (head == NULL)
//    {
//        return head;
//    }
//
//    //������ͷ�Ĵ�Ц����
//    ListNode* lesshead, * lesstail;
//    ListNode* greaterhead, * greatertail;
//
//    lesshead = lesstail = (ListNode*)malloc(sizeof(ListNode));
//    greaterhead = greatertail = (ListNode*)malloc(sizeof(ListNode));
//
//    //����ԭ���� �ڵ�ŵ���Ӧ����������
//    ListNode* pcur = head;
//    while (pcur)
//    {
//        if (pcur->val < x)
//        {
//            //�ŵ�С��
//            lesstail->next = pcur;
//            lesstail = lesstail->next;
//        }
//        else
//        {
//            greatertail->next = pcur;
//            greatertail = greatertail->next;
//            //�ŵ����������
//        }
//        pcur = pcur->next;
//    }
//    greatertail->next = NULL;//���һ��ָ��ָ����һ���ڵ�Ϊ��
//    //������β����
//    lesstail->next = greaterhead->next;
//    ListNode* ret = lesshead->next;
//    free(greaterhead);
//    free(lesshead);
//    return ret;
//
//}
