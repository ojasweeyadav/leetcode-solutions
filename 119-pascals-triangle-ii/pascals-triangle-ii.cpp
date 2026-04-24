class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int>prevRow;
        for(int i=0;i<=rowIndex;i++){
            vector<int>currentRow(i+1,1);
            for(int j=1;j<i;j++){
                currentRow[j]=prevRow[j]+prevRow[j-1];
            }
            prevRow=currentRow;
        }
        return prevRow;
    }
};//O(n):SC

/* SAME EXACT AS PASCAL TRIANGLE 1 BUT THEY WANT 1D ARRAY
class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<vector<int>>dp;
        for(int i=0;i<=rowIndex;i++){
            vector<int>row(i+1,1);
            for(int j=1;j<i;j++){
                row[j]=dp[i-1][j]+dp[i-1][j-1];
            }
            dp.push_back(row);
        }
        return dp[rowIndex];
    }
};
*/