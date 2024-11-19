#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//1.合并两个有序数组
void merge(int* nums1, int m, int* nums2, int n) {
    int i = 0;
    int j = 0;
    while (j < n)
    {
        if (nums1[i] <= nums2[j])
        {
            ;
        }
        else if (nums1[i] > nums2[j])
        {
            int k = 0;
            for (k = m - 1 + j; k >= i; k--)
            {
                nums1[k + 1] = nums1[k];
            }
            nums1[i] = nums2[j];
            j++;
        }
        if (nums1[i] == 0 && i > m - 1 + j)
        {
            nums1[i] = nums2[j];
            j++;
        }
        i++;
    }
}

//2.移除元素
//自己写的
int removeElement(int* nums, int numsSize, int val) {
    int i = 0;
    int n = 0;
    while (i < numsSize - n)
    {
        if (nums[i] == val)
        {
            n++;
            int k = 0;
            for (k = i; k < numsSize - 1; k++)
            {
                nums[k] = nums[k + 1];
            }
        }
        if (nums[i] != val)
        {
            i++;
        }
    }
    return (numsSize - n);
}
//学到的
int removeElement(int* nums, int numsSize, int val) {
    int i = 0;
    int k = 0;
    for (i = 0; i < numsSize; i++)
    {
        if (nums[i] != val)
        {
            nums[k++] = nums[i];
        }
    }
    return k;
}

//3.去除递增数组中的重复元素
int removeDuplicates(int* nums, int numsSize) {
    int i = 0;
    int k = 0;
    while (i < numsSize - 1)
    {
        if (nums[i] != nums[i + 1])
        {
            nums[k++] = nums[i];
        }
        i++;
    }
    nums[k] = nums[i];
    return k + 1;
}