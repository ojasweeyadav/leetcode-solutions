class Solution {
public:

    int robLinear(vector<int>& nums, int start, int end){
        int len=end-start+1;
        if(len == 1) return nums[start]; //edge case
        vector<int>dp(len);
        dp[0]=nums[start];
        dp[1]=max(nums[start],nums[start+1]);
        for(int i=2;i<len;i++){
            dp[i]=max(dp[i-2]+nums[start+i],dp[i-1]);
        }
        return dp[len-1];
    }

    int rob(vector<int>& nums) {
        int n = nums.size();
        
        if(n == 1) return nums[0];
        
        // Case 1: skip last house
        int case1 = robLinear(nums, 0, n-2);
        
        // Case 2: skip first house
        int case2 = robLinear(nums, 1, n-1);
        
        return max(case1, case2);
    }
};