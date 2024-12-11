#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdbool.h>
#include<string.h>
//1.合并两个有序数组
//void merge(int* nums1, int m, int* nums2, int n) {
//    int i = 0;
//    int j = 0;
//    while (j < n)
//    {
//        if (nums1[i] <= nums2[j])
//        {
//            ;
//        }
//        else if (nums1[i] > nums2[j])
//        {
//            int k = 0;
//            for (k = m - 1 + j; k >= i; k--)
//            {
//                nums1[k + 1] = nums1[k];
//            }
//            nums1[i] = nums2[j];
//            j++;
//        }
//        if (nums1[i] == 0 && i > m - 1 + j)
//        {
//            nums1[i] = nums2[j];
//            j++;
//        }
//        i++;
//    }
//}

//2.移除元素
//自己写的
//int removeElement(int* nums, int numsSize, int val) {
//    int i = 0;
//    int n = 0;
//    while (i < numsSize - n)
//    {
//        if (nums[i] == val)
//        {
//            n++;
//            int k = 0;
//            for (k = i; k < numsSize - 1; k++)
//            {
//                nums[k] = nums[k + 1];
//            }
//        }
//        if (nums[i] != val)
//        {
//            i++;
//        }
//    }
//    return (numsSize - n);
//}
//学到的
//int removeElement1(int* nums, int numsSize, int val) {
//    int i = 0;
//    int k = 0;
//    for (i = 0; i < numsSize; i++)
//    {
//        if (nums[i] != val)
//        {
//            nums[k++] = nums[i];
//        }
//    }
//    return k;
//}

//3.去除递增数组中的重复元素
//int removeDuplicates(int* nums, int numsSize) {
//    int i = 0;
//    int k = 0;
//    while (i < numsSize - 1)
//    {
//        if (nums[i] != nums[i + 1])
//        {
//            nums[k++] = nums[i];
//        }
//        i++;
//    }
//    nums[k] = nums[i];
//    return k + 1;
//}

//4.找到数组中的多数元素（默认其个数大于n/2）
//int majorityElement(int* nums, int numsSize) {
//    int i = 0;
//    int count = 1;
//    int M = nums[0];
//    for (i = 1; i < numsSize; i++)
//    {
//        if (nums[i] != M)
//        {
//            count--;
//        }
//        else if (nums[i] == M)
//        {
//            count++;
//        }
//        if (count == 0)
//        {
//            M = nums[i];
//            count = 1;
//        }
//    }
//    return M;
//}

//5.找到最佳的买股时间
//int maxProfit(int* prices, int pricesSize) {
//    int sell = 0;
//    int get = 0;
//    int j = 1;
//    int buy = 0;
//    while (j <= pricesSize - 1)
//    {
//        sell = prices[j];
//        if (j == 1)
//        {
//            buy = prices[0];
//        }
//        else
//        {
//            if (prices[j - 1] <= buy)
//            {
//                buy = prices[j - 1];
//            }
//        }
//        if ((sell - buy) >= get)
//        {
//            get = sell - buy;
//        }
//        j++;
//    }
//    return get;
//}

//6.罗马数字转化
//#include<string.h>
//typedef struct order
//{
//    char ch;
//    int num;
//}order;
//int romanToInt(char* s) {
//    int len = (int)strlen(s);
//    int arr[len] = { 0 };
//    int all = 0;
//    order s1[7] =
//    {
//        {'I',1},
//        {'V',5},
//        {'X',10},
//        {'L',50},
//        {'C',100},
//        {'D',500},
//        {'M',1000}
//    };
//    for (int i = len - 1; i >= 0; i--)
//    {
//        for (int n = 0; n < 7; n++)
//        {
//            if (s1[n].ch == s[i])
//            {
//                arr[i] = s1[n].num;
//            }
//        }
//    }
//    all = arr[len - 1];
//    int flag = 1;
//    for (int i = len - 2; i >= 0; i--)
//    {
//        if (arr[i] > arr[i + 1])
//        {
//            all += arr[i];
//        }
//        else if (arr[i] < arr[i + 1])
//        {
//            all -= arr[i];
//            flag = -1;
//        }
//        else
//        {
//            all += arr[i] * flag;
//        }
//    }
//    return all;
//}

//7.字符串最长公共前缀
//char* longestCommonPrefix(char** strs, int strsSize) {
//    int k = 0;
//    while (1)
//    {
//        for (int n = 0; n < strsSize; n++)
//        {
//            if (strs[n][k] != strs[0][k])
//            {
//                strs[0][k] = '\0';
//                break;
//            }
//        }
//        if (strs[0][k] == '\0')
//        {
//            break;
//        }
//        k++;
//    }
//    return strs[0];
//}

//8.找到最开始匹配的下标
//int strStr(char* haystack, char* needle) {
//    int len1 = strlen(haystack);
//    int len2 = strlen(needle);
//    int k = 0;
//    int n = 0;
//    int i = 0;
//    while (n < len1)
//    {
//        if (haystack[i] == needle[k])
//        {
//            i++, k++;
//            if (k == len2)
//            {
//                return i - len2;
//            }
//        }
//        else
//        {
//            k = 0;
//            i = ++n;
//        }
//    }
//    return -1;
//}

//9.判断回文串
//bool isPalindrome(char* s) {
//    size_t len = strlen(s);
//    int k = 0;
//    for (int i = 0; i < len; i++)
//    {
//        if (s[i] >= 65 && s[i] <= 90)
//        {
//            s[k++] = s[i]+32;
//        }
//        else if (s[i] >= 97 && s[i] <= 122)
//        {
//            s[k++] = s[i];
//        }
//    }
//    int left = 0;
//    int right = k - 1;
//    while (left < right)
//    {
//        if (s[left] != s[right])
//        {
//            return false;
//        }
//        left++, right--;
//    }
//    return true;
//}
