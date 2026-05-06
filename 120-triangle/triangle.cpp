//2D DP
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
        return min_val;   //return *min_element(dp[n-1].begin(), dp[n-1].end());
    }
};
//

/*DP APPROACH IN MY TERMS(2D) -

here we took : dp[i][j] = minimum path sum to reach triangle[i][j]

so we calculated dp[i][j] for all possible values and taking min of last row

(No greedy thinking anymore
You’re no longer doing: “pick best next”
Instead: “compute best for all”
That’s the core DP mindset.)
*/



/* USING 1D AS ASKED BY QUES
class Solution {
public:
//USING 1D - DP
    int minimumTotal(vector<vector<int>>& triangle) {
        int n = triangle.size();
        vector<int> dp(n, 0);

        dp[0] = triangle[0][0];

        for (int i = 1; i < n; i++) {
            // rightmost element (must come from diagonal)
            dp[i] = dp[i-1] + triangle[i][i];

            // middle elements (right → left)
            for (int j = i - 1; j > 0; j--) {
                dp[j] = min(dp[j], dp[j-1]) + triangle[i][j];
            }

            // leftmost element (same column) - for Row 1
            dp[0] = dp[0] + triangle[i][0];
        }

        return *min_element(dp.begin(), dp.begin() + n);
    }
};
*/