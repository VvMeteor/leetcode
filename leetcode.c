#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdbool.h>
#include<string.h>
//1.�ϲ�������������
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

//2.�Ƴ�Ԫ��
//�Լ�д��
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
//ѧ����
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

//3.ȥ�����������е��ظ�Ԫ��
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

//4.�ҵ������еĶ���Ԫ�أ�Ĭ�����������n/2��
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

//5.�ҵ���ѵ����ʱ��
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

//6.��������ת��
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

//7.�ַ��������ǰ׺
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

//8.�ҵ��ʼƥ����±�
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

//9.�жϻ��Ĵ�
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

//10.�ж�������
//bool isSubsequence(char* s, char* t) {
//    int i = 0;
//    int j = 0;
//    while (j < strlen(t))
//    {
//        if (s[i] == t[j])
//        {
//            i++;
//        }
//        j++;
//    }
//    if (i == strlen(s) || strlen(s) == 0)
//    {
//        return true;
//    }
//    return false;
//}

//11.����ţ�C++��
//class Solution {
//public:
//    bool canConstruct(string ransomNote, string magazine) {
//        map<char, int>mymap;
//        for (char i = 'a'; i <= 'z'; i++)
//        {
//            mymap[i] = 0;
//        }
//        for (int j = 0; j < magazine.size(); j++)
//        {
//            mymap[magazine[j]] += 1;
//        }
//        for (int n = 0; n < ransomNote.size(); n++)
//        {
//            mymap[ransomNote[n]] -= 1;
//        }
//        for (char k = 'a'; k <= 'z'; k++)
//        {
//            if (mymap[k] < 0)
//            {
//                return false;
//            }
//        }
//        return true;
//    }
//};

//12.ͬ���ַ���
//#include<map>
//class Solution {
//public:
//    bool isIsomorphic(string s, string t) {
//        map<char, char>mymap1;
//        map<char, char>mymap2;
//
//        for (int k = 0; k < t.size(); k++)
//        {
//            mymap1[s[k]] = t[k];
//            mymap2[t[k]] = s[k];
//        }
//        for (int n = 0; n < t.size(); n++)
//        {
//            if (mymap1[s[n]] != t[n] || mymap2[t[n]] != s[n])
//            {
//                return false;
//            }
//        }
//        return true;
//    }
//};

//13.���ʹ���
//std::vector<std::string> split(const std::string& str, char delimiter) {
//    std::vector<std::string> tokens;
//    std::string token;
//    std::istringstream tokenStream(str);
//    while (std::getline(tokenStream, token, delimiter)) {
//        tokens.push_back(token);
//    }
//    // ����ַ����Էָ�����β�������һ�����ַ�������Ҫȥ��
//    if (!tokens.empty() && tokens.back().empty()) {
//        tokens.pop_back();
//    }
//    return tokens;
//}
//class Solution {
//public:
//    bool wordPattern(string pattern, string s) {
//        map<char, string>mymap1;
//        map<string, char>mymap2;
//
//        size_t k = 0;
//        char delimiter = ' ';
//        vector<string> tokens = split(s, delimiter);
//        int i = 0;
//        if (pattern.size() != tokens.size())
//        {
//            return false;
//        }
//        if (pattern.size() != tokens.size())
//        {
//            return false;
//        }
//        while (k < pattern.size())
//        {
//            mymap1[pattern[k]] = tokens[k];
//            mymap2[tokens[k]] = pattern[k];
//            k++;
//        }
//        for (int j = 0; j < pattern.size(); j++)
//        {
//            if (mymap1[pattern[j]] != tokens[j] || mymap2[tokens[j]] != pattern[j])
//            {
//                return false;
//            }
//        }
//        return true;
//    }
//};

//14.����֮��
//int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
//    int k = 0;
//    while (k < numsSize)
//    {
//        for (int j = k + 1; j < numsSize; j++)
//        {
//            if (nums[j] + nums[k] == target)
//            {
//                int* ret = malloc(8);
//                ret[0] = k, ret[1] = j;
//                *returnSize = 2;
//                return ret;
//            }
//        }
//        k++;
//    }
//    return returnSize;
//}

//15.�ж��ǲ��ǿ�����
//bool isHappy(int n) {
//    int sum = 0;
//    int count = 0;
//    if (n == 1)
//    {
//        return true;
//    }
//    while (sum != 1)
//    {
//        sum = 0;
//        while (n > 0)
//        {
//            sum += (n % 10) * (n % 10);
//            n /= 10;
//        }
//        count++;
//        if (count > 20)
//        {
//            return false;
//        }
//        n = sum;
//    }
//    return true;
//}

//16.�ظ�Ԫ���±�֮��
//class Solution {
//public:
//    bool containsNearbyDuplicate(vector<int>& nums, int k) {
//        map<int, int>hashmap;
//        for (int i = 0; i < nums.size(); i++)
//        {
//            if (hashmap.count(nums[i]) && i - hashmap[nums[i]] <= k)
//            {
//                return true;
//            }
//            hashmap[nums[i]] = i;
//
//        }
//        return false;
//    }
//};