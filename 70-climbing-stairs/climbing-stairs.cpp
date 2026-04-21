class Solution {
public:
//Tabulation (Bottom-up) with O(1) : Space complexity
    int climb(int n){
        if(n<=2)return n;
        int curr;
        int prev1=1;
        int prev2=2;
        for(int i=3;i<=n;i++){
            curr=prev2+prev1;
            prev1=prev2;
            prev2=curr;
        }
        return curr;
    }
    int climbStairs(int n) {
        return climb(n);
    }
};


/*  Tabulation (Bottom-up) - TC:O(n) and SC:O(n)

class Solution {
public:
    int climb(int n){
        if(n<=2)return n;
        vector<int>dp(n+1);
        dp[1]=1;
        dp[2]=2;
        for(int i=3;i<=n;i++){
            dp[i]=dp[i-1]+dp[i-2];
        }
        return dp[n];
    }
    int climbStairs(int n) {
        return climb(n);
    }
};
*/

/* Memorization(top-down) - TC:O(n) and SC:O(n)

class Solution {
public:
    int climb(int n, vector<int>&dp){
        if(n==2 || n==1)return n;
        if(dp[n]!=-1)return dp[n];
        dp[n]=climb(n-1,dp)+climb(n-2,dp);
        return dp[n];
    }
    int climbStairs(int n) {
        vector<int>dp(n+1,-1);
        return climb(n,dp);
    }
};
*/