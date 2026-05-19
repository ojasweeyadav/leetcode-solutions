class Solution {
public:
    int findTargetSumWays(vector<int>& nums, int target) {
        int n=nums.size();
        int total=0;
        for(int i:nums) total+=i;
        int reqSum=(target+total)/2;   

        if (abs(target) > total) return 0;
        if ((target + total) % 2 != 0) return 0;

        //dp[s] = number of ways to make sum s
        vector<int> dp(reqSum + 1, 0);
        dp[0] = 1; //BASE CASE

        for (int num : nums) {
            for (int s = reqSum; s >= num; s--) {
                dp[s] += dp[s - num];
            }
        }
        return dp[reqSum];
    }
};
//
//see NOTE
//for loop - like knapsack