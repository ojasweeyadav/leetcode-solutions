class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        int n=numRows;
        vector<vector<int>>dp(n,vector<int>(n));
        dp[0][0]=1;

        for(int i=1;i<n;i++){
            dp[i][0]=1;
            dp[i][i]=1;
        }
        for(int i=2;i<n;i++){
            for(int j=1;j<i;j++){
                dp[i][j]=dp[i-1][j-1]+dp[i-1][j];
            }
        }
        vector<vector<int>>ans;
        //using inner for
        for(int i=0;i<n;i++){
            vector<int>row;
            for(int j=0;j<=i;j++){
                row.push_back(dp[i][j]);
            }
            ans.push_back(row);
        }
        return ans;
        //this was using inner while
        /*
        for(int i=0;i<n;i++){
            vector<int>row;
            int j=0;
            while(j<n && dp[i][j]!=0){
                row.push_back(dp[i][j]);
                j++;
            }
            ans.push_back(row);
        }
        return ans;
        */
    }
};