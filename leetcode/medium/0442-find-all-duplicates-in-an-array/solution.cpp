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