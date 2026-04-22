class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        int n=coins.size();
        vector<int>dp(amount+1,INT_MAX);
        dp[0]=0;
        for(int i=1;i<=amount;i++){
            for(int coin:coins){
                if(i - coin >= 0 && dp[i - coin] != INT_MAX){
                    dp[i]=min(dp[i],dp[i-coin]+1);
                }
            }
        }
        return dp[amount] == INT_MAX ? -1 : dp[amount];
    }
};


/*GREEDY APPROACH (NOT ALWAYS OPTMAL)  - fails for case 4

class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        int n=coins.size();
        int count=0;
        int i=n-1;
        while(amount!=0){
            if(coins[i]<=amount){
                amount-=coins[i];
                count++;
            }
            else{
                i--;
            }
            if(i<0)return -1;
        }
        return count;

    }
};
*/ 