class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int n=cost.size();
        vector<int>dp(n+1);
        //dp[i]=min cost to reach top from ith index

        //base cases
        dp[n-1]=cost[n-1]; //take 1 step
        // dp[n]=0; //already at top
        dp[n-2]=cost[n-2];

        for(int i=n-3;i>=0;i--){
            dp[i]=cost[i]+min(dp[i+1],dp[i+2]);
        }
        return min(dp[0],dp[1]);
    }
};