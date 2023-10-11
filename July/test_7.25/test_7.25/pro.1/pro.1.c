//189. ��ת����
//
//����һ���������� nums���������е�Ԫ��������ת k ��λ�ã����� k �ǷǸ�����
//
//ʾ�� 1:
//
//����: nums = [1, 2, 3, 4, 5, 6, 7], k = 3
//��� : [5, 6, 7, 1, 2, 3, 4]
//���� :
//    ������ת 1 �� : [7, 1, 2, 3, 4, 5, 6]
//    ������ת 2 �� : [6, 7, 1, 2, 3, 4, 5]
//    ������ת 3 �� : [5, 6, 7, 1, 2, 3, 4]
#include <stdio.h>
//void rotate(int* nums, int numsSize, int k) {
//    int* arr = (int*)malloc(sizeof(int) * numsSize);
//    int i = 0, j;
//    j = numsSize - k % numsSize;
//    for (j; j < numsSize; j++)
//    {
//        arr[i] = nums[j];
//        i++;
//    }
//    for (j = 0; i < numsSize; i++)
//    {
//        arr[i] = nums[j];
//        j++;
//    }
//    for (i = 0; i < numsSize; i++)
//    {
//        nums[i] = arr[i];
//    }
//    free(arr);
//    arr = NULL;
//}






//������ 17.04.��ʧ������
//
//����nums������0��n������������������ȱ��һ�������д�����ҳ��Ǹ�ȱʧ�����������а취��O(n)ʱ���������
//
//ע�⣺�����������ԭ�������Ķ�
//
//ʾ�� 1��
//
//���룺[3, 0, 1]
//�����2

int missingNumber(int* nums, int numsSize) {
    int* arr = (int*)malloc(sizeof(int) * (numsSize + 1));
    int j = 0;
    for (int i = 0; i <= numsSize; i++)
    {
        arr[i] = 0;
    }
    for (int i = 0; i < numsSize; i++)
    {
        arr[nums[i]] = nums[i];
    }
    for (int i = 1; i <= numsSize; i++)
    {
        if (arr[i] == 0)
            j = i;
    }
    if (j != 0)
        return j;
    else
        return 0;
}