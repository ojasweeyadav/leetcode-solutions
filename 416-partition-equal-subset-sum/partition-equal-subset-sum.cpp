class Solution {
public:
    bool canPartition(vector<int>& nums) {
        int n = nums.size();

        int sum = 0;
        for(int x : nums){
            sum += x;
        }

        if(sum % 2 != 0) return false;

        int target = sum / 2;

        vector<vector<bool>> dp(n, vector<bool>(target + 1, false));

        // sum 0 is always possible
        for(int i = 0; i < n; i++){
            dp[i][0] = true;
        }

        // first element alone can form nums[0]
        if(nums[0] <= target){
            dp[0][nums[0]] = true;
        }

        for(int i = 1; i < n; i++){
            for(int j = 1; j <= target; j++){

                bool notTake = dp[i-1][j];

                bool take = false;
                if(j >= nums[i]){
                    take = dp[i-1][j - nums[i]];
                }

                dp[i][j] = take || notTake;  //any valid way can be chosen
            }
        }

        return dp[n-1][target];
    }
};
//
//main target - Can we find a subset with sum = totalSum / 2 ?

/*APPROACH -
If one subset reaches target sum/2,
the remaining elements automatically form the other subset.

So the problem simplifies to:
Can I pick some elements whose sum becomes target? */