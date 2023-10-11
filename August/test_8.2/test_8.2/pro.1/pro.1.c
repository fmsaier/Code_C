#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
//21. 合并两个有序链表
//
//将两个升序链表合并为一个新的 升序 链表并返回。新链表是通过拼接给定的两个链表的所有节点组成的。
//
//struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2) {
//    if (list1 == NULL) 
//        return list2;
//    else if (list2 == NULL) 
//        return list1;
//    struct ListNode* newnode = (struct ListNode*)malloc(sizeof(struct ListNode));
//    struct ListNode* head = newnode;
//    struct ListNode* tail = head;
//    struct ListNode* tail1 = list1;
//    struct ListNode* tail2 = list2;
//    while (tail1 && tail2)
//    {
//        if (tail1->val <= tail2->val)
//        {
//            struct ListNode* newnode = (struct ListNode*)malloc(sizeof(struct ListNode));
//            newnode->val = tail1->val;
//            newnode->next = NULL;
//            tail->next = newnode;
//            tail = tail->next;
//            tail1 = tail1->next;
//        }
//        else
//        {
//            struct ListNode* newnode = (struct ListNode*)malloc(sizeof(struct ListNode));
//            newnode->val = tail2->val;
//            newnode->next = NULL;
//            tail->next = newnode;
//            tail = tail->next;
//            tail2 = tail2->next;
//        }
//    }
//    if (tail1 == NULL)
//        tail->next = tail2;
//    else 
//        tail->next = tail1;
//    return head->next;
//}






//OR36 链表的回文结构
//
//描述
//对于一个链表，请设计一个时间复杂度为O(n), 额外空间复杂度为O(1)的算法，判断其是否为回文结构。
//
//给定一个链表的头指针A，请返回一个bool值，代表其是否为回文结构。保证链表长度小于等于900。

//class PalindromeList {
//public:
//    bool chkPalindrome(ListNode* A) {
//        // write code here
//        ListNode* fast = A;
//        ListNode* slow = A;
//        ListNode* newhead = (ListNode*)malloc(sizeof(ListNode));
//        ListNode* newtail = newhead;
//        ListNode* front = newhead;
//        newhead->next = A;
//
//        //找到链表回文开始的地方
//        while (fast && fast->next) {
//            front = front->next;
//            fast = fast->next->next;
//            slow = slow->next;
//        }
//
//        //将链表分为两个部分
//        front->next = NULL;
//        newhead->next = NULL;
//        while (slow) {
//            if (newhead->next == NULL) {
//                newtail = slow;
//                slow = slow->next;
//                newhead->next = newtail;
//                newtail->next = NULL;
//            }
//            else {
//                newhead->next = slow;
//                slow = slow->next;
//                newhead->next->next = newtail;
//                newtail = newhead->next;
//            }
//        }
//
//        //判断两个链表回文部分是否相等
//        newtail = newhead->next;
//        slow = A;
//        while (slow) {
//            if (newtail && (slow->val != newtail->val)) {
//                free(newhead);
//                return 0;
//            }
//            newtail = newtail->next;
//            slow = slow->next;
//        }
//
//        free(newhead);
//        return 1;
//    }
//};






//CM11 链表分割
//
//描述
//现有一链表的头指针 ListNode* pHead，给一定值x，编写一段代码将所有小于x的结点排在其余结点之前，且不能改变原来的数据顺序，返回重新排列后的链表的头指针。

//class Partition {
//public:
//    ListNode* partition(ListNode* pHead, int x) {
//        // write code here
//        ListNode* tail = pHead;
//        ListNode* newnode1 = (ListNode*)malloc(sizeof(ListNode));
//        ListNode* tail1 = newnode1;
//        ListNode* newnode2 = (ListNode*)malloc(sizeof(ListNode));
//        ListNode* tail2 = newnode2;
//        ListNode* newnode = (ListNode*)malloc(sizeof(ListNode));//头节点真好用（）
//        ListNode* pre = newnode;
//        while (tail) {
//            if (tail->val < x)
//            {
//                pre->next = tail->next;
//                tail->next = NULL;
//                tail1->next = tail;
//                tail1 = tail1->next;
//                tail = pre->next;
//            }
//            else
//            {
//                pre->next = tail->next;
//                tail->next = NULL;
//                tail2->next = tail;
//                tail2 = tail2->next;
//                tail = pre->next;
//            }
//
//        }
//        tail1->next = newnode2->next;
//        pHead = newnode1->next;
//        free(newnode2);
//        free(newnode1);
//        return pHead;
//    }
//};






//160. 相交链表
//
//给你两个单链表的头节点 headA 和 headB ，请你找出并返回两个单链表相交的起始节点。如果两个链表不存在相交节点，返回 null 。
//
//图示两个链表在节点 c1 开始相交：
//
//题目数据 保证 整个链式结构中不存在环。
//
//注意，函数返回结果后，链表必须 保持其原始结构 。

//struct ListNode* getIntersectionNode(struct ListNode* headA, struct ListNode* headB) {
//    struct ListNode* tail1 = headA;
//    struct ListNode* tail2 = headB;
//    int count1 = 0, count2 = 0, k = 0;
//    while (tail1)
//    {
//        tail1 = tail1->next;
//        count1++;
//    }
//    while (tail2)
//    {
//        tail2 = tail2->next;
//        count2++;
//    }
//    k = count1 - count2;
//    tail1 = headA;
//    tail2 = headB;
//    if (k > 0)
//    {
//        while (k)
//        {
//            tail1 = tail1->next;
//            k--;
//        }
//    }
//    else
//    {
//        k = -k;
//        while (k)
//        {
//            tail2 = tail2->next;
//            k--;
//        }
//    }
//    while (tail1 != tail2 && tail1)
//    {
//        tail1 = tail1->next;
//        tail2 = tail2->next;
//    }
//    if (tail1 = tail2) 
//        return tail1;
//    else 
//        return NULL;
//}






//141. 环形链表
//
//给你一个链表的头节点 head ，判断链表中是否有环。
//
//如果链表中有某个节点，可以通过连续跟踪 next 指针再次到达，则链表中存在环。 为了表示给定链表中的环，评测系统内部使用整数 pos 来表示链表尾连接到链表中的位置（索引从 0 开始）。注意：pos 不作为参数进行传递 。仅仅是为了标识链表的实际情况。
//
//如果链表中存在环 ，则返回 true 。 否则，返回 false 。

//bool hasCycle(struct ListNode* head) {
//    struct ListNode* fast = head;
//    struct ListNode* slow = head;
//    while (fast && fast->next)
//    {
//        fast = fast->next->next;
//        slow = slow->next;
//        if (slow == fast)
//        {
//            return true;
//        }
//    }
//    return false;
//}






//142. 环形链表 II
//
//给定一个链表的头节点  head ，返回链表开始入环的第一个节点。 如果链表无环，则返回 null。
//
//如果链表中有某个节点，可以通过连续跟踪 next 指针再次到达，则链表中存在环。 为了表示给定链表中的环，评测系统内部使用整数 pos 来表示链表尾连接到链表中的位置（索引从 0 开始）。如果 pos 是 - 1，则在该链表中没有环。注意：pos 不作为参数进行传递，仅仅是为了标识链表的实际情况。
//
//不允许修改 链表。

//struct ListNode* detectCycle(struct ListNode* head) {
//    struct ListNode* fast = head;
//    struct ListNode* slow = head;
//    struct ListNode* tail = head;
//    while (fast && fast->next)
//    {
//        fast = fast->next->next;
//        slow = slow->next;
//        if (slow == fast)
//        {
//            while (tail != slow)
//            {
//                tail = tail->next;
//                slow = slow->next;
//            }
//            return slow;
//        }
//    }
//    return NULL;
//}






//138. 复制带随机指针的链表
//
//给你一个长度为 n 的链表，每个节点包含一个额外增加的随机指针 random ，该指针可以指向链表中的任何节点或空节点。
//
//构造这个链表的 深拷贝。 深拷贝应该正好由 n 个 全新 节点组成，其中每个新节点的值都设为其对应的原节点的值。新节点的 next 指针和 random 指针也都应指向复制链表中的新节点，并使原链表和复制链表中的这些指针能够表示相同的链表状态。复制链表中的指针都不应指向原链表中的节点 。
//
//例如，如果原链表中有 X 和 Y 两个节点，其中 X.random-- > Y 。那么在复制链表中对应的两个节点 x 和 y ，同样有 x.random-- > y 。
//
//返回复制链表的头节点。
//
//用一个由 n 个节点组成的链表来表示输入 / 输出中的链表。每个节点用一个[val, random_index] 表示：
//
//val：一个表示 Node.val 的整数。
//random_index：随机指针指向的节点索引（范围从 0 到 n - 1）；如果不指向任何节点，则为  null 。
//你的代码 只 接受原链表的头节点 head 作为传入参数。

struct Node{
 int val;
 struct Node* next;
 struct Node* random;
 };
struct Node* copyRandomList(struct Node* head) {
    struct Node* tail = head;
    struct Node* ran = head;
    struct Node* hhead;
    struct Node* newnode = (struct Node*)malloc(sizeof(struct Node));
    hhead = newnode;
    struct Node* ttail = hhead;
    while(tail)
         {
        ttail->next = (struct Node*)malloc(sizeof(struct Node));
        ttail = ttail->next;
        ttail->val = tail->val;
        ttail->next = NULL;
        tail = tail->next;
        if (tail->random != NULL)
        {
            ttail->random = tail;
            ran->next = ttail;
            ran = tail;
        }
        else
        {
            ttail->random = NULL;
        }
    }
    tail = head;
    ran = head;
    ttail = hhead->next;
    while (tail)
    {
        if (tail->random != NULL)
        {
            ran = ttail->random;
            ttail->random = tail->random->next;
            tail = ran;
            ttail = ttail->next;
        }

    }
    return hhead->next;
}