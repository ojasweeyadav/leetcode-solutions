class Solution {
public:
//Better version(cleaner)
    int minCostClimbingStairs(vector<int>& cost) {
        int n=cost.size();
        vector<int>dp(n+1);
        //dp[i]=min cost to reach top from ith index

        //base cases
        dp[n-1]=cost[n-1]; //take 1 step
        dp[n]=0; //already at top
        

        for(int i=n-2;i>=0;i--){
            dp[i]=cost[i]+min(dp[i+1],dp[i+2]);
        }
        return min(dp[0],dp[1]);
    }
};

/*MY VERSION

class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int n=cost.size();
        vector<int>dp(n);
        //dp[i]=min cost to reach top from ith index

        //base cases
        dp[n-1]=cost[n-1]; //take 1 step
        dp[n-2]=cost[n-2]; //take 2 step

        for(int i=n-3;i>=0;i--){
            dp[i]=cost[i]+min(dp[i+1],dp[i+2]);
        }
        return min(dp[0],dp[1]);
    }
};
*/