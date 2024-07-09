#include <stdio.h>
//206反转链表

//typedef struct ListNode  ListNode;
//struct ListNode* reverseList(struct ListNode* head) {
//    //处理是否为空链表
//    if (head == NULL)
//    {
//        return head;
//    }
//    //创立三个指针
//    ListNode* n1, * n2, * n3;
//    n1 = NULL, n2 = head, n3 = head->next;
//
//    //遍历该链表  反转指向
//    ListNode* pcur = head;
//    while (n2)
//    {
//        //修改n2指向
//        n2->next = n1;
//        //修改三个指针地址  
//        n1 = n2;
//        n2 = n3;
//        if (n3) {
//            n3 = n3->next;
//        }
//    }
//    return n1;
//}


//21 合并两个有序链表

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
//    //跳出循环存在两种情况 l1为空，l2不为空  反之
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


//  0204分割链表

//typedef struct  ListNode ListNode;
//struct ListNode* partition(struct ListNode* head, int x) {
//    if (head == NULL)
//    {
//        return head;
//    }
//
//    //创建带头的大笑链表
//    ListNode* lesshead, * lesstail;
//    ListNode* greaterhead, * greatertail;
//
//    lesshead = lesstail = (ListNode*)malloc(sizeof(ListNode));
//    greaterhead = greatertail = (ListNode*)malloc(sizeof(ListNode));
//
//    //遍历原链表 节点放到对应的新链表中
//    ListNode* pcur = head;
//    while (pcur)
//    {
//        if (pcur->val < x)
//        {
//            //放到小的
//            lesstail->next = pcur;
//            lesstail = lesstail->next;
//        }
//        else
//        {
//            greatertail->next = pcur;
//            greatertail = greatertail->next;
//            //放到大的链表中
//        }
//        pcur = pcur->next;
//    }
//    greatertail->next = NULL;//最后一个指针指向下一个节点为空
//    //进行首尾相连
//    lesstail->next = greaterhead->next;
//    ListNode* ret = lesshead->next;
//    free(greaterhead);
//    free(lesshead);
//    return ret;
//
//}
