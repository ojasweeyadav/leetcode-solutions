class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        int n=triangle.size();
        vector<vector<int>>dp = triangle;

        for(int i=1;i<n;i++){
            for(int j=0;j<=i;j++){
                if(j==0){
                    dp[i][j]+=dp[i-1][j];   //same column
                }
                else if(j==i){
                    dp[i][j]+=dp[i-1][j-1];   //diagonal
                }
                else{
                    dp[i][j] += min(dp[i-1][j], dp[i-1][j-1]);
                }
            }
        }
        int min_val=dp[n-1][0];
        for(int i=0;i<n;i++){
            min_val=min(min_val,dp[n-1][i]);
        }
        return min_val;
    }
};