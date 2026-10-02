# Find All Duplicates in an Array

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Given an integer array `nums` of length `n` where all the integers of `nums` are in the range `[1, n]` and each integer appears  **at most**   **twice**, return  *an array of all the integers that appears  **twice***.

You must write an algorithm that runs in `O(n)` time and uses only  *constant*  auxiliary space, excluding the space needed to store the output

 

 **Example 1:** 

```
Input: nums = [4,3,2,7,8,2,3,1]
Output: [2,3]

```

 **Example 2:** 

```
Input: nums = [1,1,2]
Output: [1]

```

 **Example 3:** 

```
Input: nums = [1]
Output: []

```

 

 **Constraints:** 

- n == nums.length
- 1 <= n <= 105
- 1 <= nums[i] <= n
- Each element in nums appears once or twice.

## Solution

**Language:** C++  
**Runtime:** 5 ms (beats 54.12%)  
**Memory:** 50.1 MB (beats 37.25%)  
**Submitted:** 2026-10-02T17:38:42.263Z  

```cpp
class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
    
vector<int> ans(nums.size() + 1, 0);
        vector<int>res;
         for(int i=0;i<nums.size();i++){
            ans[nums[i]]++;
            if(ans[nums[i]]>1){
                res.push_back(nums[i]);
            }
         }
         return res;
        
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/find-all-duplicates-in-an-array/)