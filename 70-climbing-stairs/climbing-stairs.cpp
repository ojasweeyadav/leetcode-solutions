class Solution {
public:
//Tabulation (Bottom-up)
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

/* 
class Solution {
public:
//**Memorization(top-down)**
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