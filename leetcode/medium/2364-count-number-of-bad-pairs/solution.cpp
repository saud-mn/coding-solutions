class Solution {
public:
    long long countBadPairs(vector<int>& nums) {
        unordered_map<long,long>mp;
        long long count=0;
        for(int i=0;i<nums.size();i++){
            int key=nums[i]-i;
            count+=mp[key];
            mp[key]++;
        
        }
         long long n=nums.size();
        long long total=n*(n-1)/2;
        return total-count;
        
        
    }
};