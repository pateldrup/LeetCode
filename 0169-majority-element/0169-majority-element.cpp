class Solution {
public:
    int majorityElement(vector<int>& nums) {
     
   unordered_map<int, int> mp;
        int freq  = nums.size()/2;
        for(int num: nums){
            mp[num]++;
        }
        for(auto& it : mp){
            if(it.second>freq){
                return it.first;
            }
        }
        return -1;
    }
};