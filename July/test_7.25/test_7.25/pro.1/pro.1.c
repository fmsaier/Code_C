//189. 轮转数组
//
//给定一个整数数组 nums，将数组中的元素向右轮转 k 个位置，其中 k 是非负数。
//
//示例 1:
//
//输入: nums = [1, 2, 3, 4, 5, 6, 7], k = 3
//输出 : [5, 6, 7, 1, 2, 3, 4]
//解释 :
//    向右轮转 1 步 : [7, 1, 2, 3, 4, 5, 6]
//    向右轮转 2 步 : [6, 7, 1, 2, 3, 4, 5]
//    向右轮转 3 步 : [5, 6, 7, 1, 2, 3, 4]
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






//面试题 17.04.消失的数字
//
//数组nums包含从0到n的所有整数，但其中缺了一个。请编写代码找出那个缺失的整数。你有办法在O(n)时间内完成吗？
//
//注意：本题相对书上原题稍作改动
//
//示例 1：
//
//输入：[3, 0, 1]
//输出：2

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