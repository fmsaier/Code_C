#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
//27. �Ƴ�Ԫ��
//
//����һ������ nums ��һ��ֵ val������Ҫ ԭ�� �Ƴ�������ֵ���� val ��Ԫ�أ��������Ƴ���������³��ȡ�
//
//��Ҫʹ�ö��������ռ䣬������ʹ�� O(1) ����ռ䲢 ԭ�� �޸��������顣
//
//Ԫ�ص�˳����Ըı䡣�㲻��Ҫ���������г����³��Ⱥ����Ԫ�ء�
 
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





//26. ɾ�����������е��ظ���
//
//����һ�� �������� ������ nums ������ ԭ�� ɾ���ظ����ֵ�Ԫ�أ�ʹÿ��Ԫ�� ֻ����һ�� ������ɾ����������³��ȡ�Ԫ�ص� ���˳�� Ӧ�ñ��� һ�� ��Ȼ�󷵻� nums ��ΨһԪ�صĸ�����
//
//���� nums ��ΨһԪ�ص�����Ϊ k ������Ҫ����������ȷ����������Ա�ͨ����
//
//�������� nums ��ʹ nums ��ǰ k ��Ԫ�ذ���ΨһԪ�أ���������������� nums �г��ֵ�˳�����С�nums ������Ԫ���� nums �Ĵ�С����Ҫ��
//���� k 

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




//88. �ϲ�������������
//
//���������� �ǵݼ�˳�� ���е��������� nums1 �� nums2�������������� m �� n ���ֱ��ʾ nums1 �� nums2 �е�Ԫ����Ŀ��
//
//���� �ϲ� nums2 �� nums1 �У�ʹ�ϲ��������ͬ���� �ǵݼ�˳�� ���С�
//
//ע�⣺���գ��ϲ������鲻Ӧ�ɺ������أ����Ǵ洢������ nums1 �С�Ϊ��Ӧ�����������nums1 �ĳ�ʼ����Ϊ m + n������ǰ m ��Ԫ�ر�ʾӦ�ϲ���Ԫ�أ��� n ��Ԫ��Ϊ 0 ��Ӧ���ԡ�nums2 �ĳ���Ϊ n ��

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





//203. �Ƴ�����Ԫ��
//
//����һ�������ͷ�ڵ� head ��һ������ val ������ɾ���������������� Node.val == val �Ľڵ㣬������ �µ�ͷ�ڵ� ��

//struct ListNode* removeElements(struct ListNode* head, int val) {
//    if (head == NULL)
//        return head;
//    while (head != NULL && head->val == val)//��������
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





//206. ��ת����
//
//���㵥�����ͷ�ڵ� head �����㷴ת���������ط�ת�������

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





//876. ������м���
//
//���㵥�����ͷ��� head �������ҳ�������������м��㡣
//
//����������м��㣬�򷵻صڶ����м��㡣

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




//�����е�����k�����
//
//����
//����һ����������������е�����k����㡣

//struct ListNode* FindKthToTail(struct ListNode* pListHead, int k) {
//    if (k == 0) return NULL;
//    struct ListNode* tail = pListHead;
//    struct ListNode* pre = tail;
//    while (k && tail)//k--���һ���ж�����--���-1
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