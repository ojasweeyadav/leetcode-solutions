class Solution {
public:
//VALUE COMPRESSION (using points array - store points obtained by choosinf a value in nums)
    int deleteAndEarn(vector<int>& nums) {
        int n=nums.size();
        if(n==1)return nums[0];

        int maxNum = *max_element(nums.begin(), nums.end());

        // points[x] = total points earned by taking value x
        vector<int>points(maxNum+1,0);
        for(int i:nums){
            points[i]+=i;
        }

        // dp[i] = max points we can earn using values from 0 → i
        vector<int>dp(maxNum+1);
        
        dp[0]=points[0];
        dp[1]=max(points[0],points[1]);
        for(int i=2;i<=maxNum;i++){
            dp[i]= max(dp[i-2]+ points[i] ,dp[i-1]);    // take i (skip i-1) OR skip i
        }

        return dp[maxNum];
    }
};

//see NOTE