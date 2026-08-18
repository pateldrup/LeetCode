class Solution {
public:
    int minOperations(vector<int>& nums) {
      int ans = 0;

        for (int i = 1; i < nums.size(); i++) {
            
            if (nums[i] <= nums[i - 1]) {
                
                int newValue = nums[i - 1] + 1;
                
                ans += newValue - nums[i];
                
                nums[i] = newValue;
            }
        }

        return ans;

    }
};