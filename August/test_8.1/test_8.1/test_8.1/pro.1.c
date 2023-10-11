#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
//27. 移除元素
//
//给你一个数组 nums 和一个值 val，你需要 原地 移除所有数值等于 val 的元素，并返回移除后数组的新长度。
//
//不要使用额外的数组空间，你必须仅使用 O(1) 额外空间并 原地 修改输入数组。
//
//元素的顺序可以改变。你不需要考虑数组中超出新长度后面的元素。
 
//int removeElement(int* nums, int numsSize, int val) {
//    int left = 0;
//    for (int right = 0; right < numsSize; right++) {
//        if (nums[right] != val) {
//            nums[left] = nums[right];
//            left++;
//        }
//    }
//    return left;
//}





//26. 删除有序数组中的重复项
//
//给你一个 升序排列 的数组 nums ，请你 原地 删除重复出现的元素，使每个元素 只出现一次 ，返回删除后数组的新长度。元素的 相对顺序 应该保持 一致 。然后返回 nums 中唯一元素的个数。
//
//考虑 nums 的唯一元素的数量为 k ，你需要做以下事情确保你的题解可以被通过：
//
//更改数组 nums ，使 nums 的前 k 个元素包含唯一元素，并按照它们最初在 nums 中出现的顺序排列。nums 的其余元素与 nums 的大小不重要。
//返回 k 

//int removeDuplicates(int* nums, int numsSize) {
//    int left = 0, right = 0;
//    for (right = 0; right < numsSize; right++)
//    {
//        if (nums[left] != nums[right])
//        {
//            left++;
//            nums[left] = nums[right];
//        }
//    }
//    return left + 1;
//}




//88. 合并两个有序数组
//
//给你两个按 非递减顺序 排列的整数数组 nums1 和 nums2，另有两个整数 m 和 n ，分别表示 nums1 和 nums2 中的元素数目。
//
//请你 合并 nums2 到 nums1 中，使合并后的数组同样按 非递减顺序 排列。
//
//注意：最终，合并后数组不应由函数返回，而是存储在数组 nums1 中。为了应对这种情况，nums1 的初始长度为 m + n，其中前 m 个元素表示应合并的元素，后 n 个元素为 0 ，应忽略。nums2 的长度为 n 。

//void merge(int* nums1, int m, int* nums2, int n) {
//    int i = 0, j = 0, k = 0;
//    int num[500] = { 0 };
//    while (i < m && j < n)
//    {
//        if (nums1[i] < nums2[j])
//        {
//            num[k++] = nums1[i++];
//        }
//        else
//        {
//            num[k++] = nums2[j++];
//        }
//    }
//    if (i >= m)
//    {
//        while (j <= n)
//        {
//            num[k++] = nums2[j++];
//        }
//    }
//    else
//    {
//        while (i <= m)
//        {
//            num[k++] = nums1[i++];
//        }
//    }
//    for (i = 0; i < n + m; i++)
//    {
//        nums1[i] = num[i];
//    }
//}
//int main()
//{
//    int nums1[] = { 1, 2, 3, 0, 0, 0 }, m = 3, nums2[] = { 2, 5, 6 }, n = 3;
//    merge(nums1, m, nums2, n);
//    return 0;
//}





//203. 移除链表元素
//
//给你一个链表的头节点 head 和一个整数 val ，请你删除链表中所有满足 Node.val == val 的节点，并返回 新的头节点 。

//struct ListNode* removeElements(struct ListNode* head, int val) {
//    if (head == NULL)
//        return head;
//    while (head != NULL && head->val == val)//看看这里
//    {
//        head = head->next;
//    }
//    if (head != NULL)
//    {
//        struct ListNode* tail = head;
//        struct ListNode* pre = tail;
//        tail = tail->next;
//        while (tail)
//        {
//            if (tail->val == val)
//            {
//                pre->next = tail->next;
//                free(tail);
//                tail = pre->next;
//
//            }
//            else
//            {
//                pre = tail;
//                tail = tail->next;
//            }
//        }
//
//    }
//    return head;
//}





//206. 反转链表
//
//给你单链表的头节点 head ，请你反转链表，并返回反转后的链表。

//struct ListNode* reverseList(struct ListNode* head) {
//    if (head == NULL) return NULL;
//    if (head->next == NULL) return head;
//    struct ListNode* tail = head;
//    struct ListNode* pre = tail;
//    tail = tail->next;
//    struct ListNode* hhead = tail;
//    while (tail)
//    {
//        hhead = tail->next;
//        tail->next = pre;
//        pre = tail;
//        tail = hhead;
//    }
//    head->next = NULL;
//    return pre;
//}





//876. 链表的中间结点
//
//给你单链表的头结点 head ，请你找出并返回链表的中间结点。
//
//如果有两个中间结点，则返回第二个中间结点。

//struct ListNode* middleNode(struct ListNode* head) {
//    int count = 0;
//    struct ListNode* tail = head;
//    while (tail)
//    {
//        tail = tail->next;
//        count++;
//    }
//    tail = head;
//    count = (count + 2) / 2;
//    while (--count)
//    {
//        tail = tail->next;
//    }
//    return tail;
//}




//链表中倒数第k个结点
//
//描述
//输入一个链表，输出该链表中倒数第k个结点。

//struct ListNode* FindKthToTail(struct ListNode* pListHead, int k) {
//    if (k == 0) return NULL;
//    struct ListNode* tail = pListHead;
//    struct ListNode* pre = tail;
//    while (k && tail)//k--最后一次判断完再--变成-1
//    {
//        tail = tail->next;
//        k--;
//    }
//    if (tail == NULL && k != 0) return NULL;
//    while (tail)
//    {
//        tail = tail->next;
//        pre = pre->next;
//    }
//    return pre;
//}

int main()
{
	int k = 5,tail=5;
	while (k-- && tail)
	{
		tail--;
	}
}