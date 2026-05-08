class Solution {
public:
//VALUE COMPRESSION
    int deleteAndEarn(vector<int>& nums) {
        int n=nums.size();
        if(n==1)return nums[0];
        int maxNum = *max_element(nums.begin(), nums.end());
        vector<int>points(maxNum+1,0);
        for(int i:nums){
            points[i]+=i;
        }
        vector<int>dp(maxNum+1);
        //dp[i]=total points(max) till final nums[i]
        dp[0]=points[0];
        dp[1]=max(points[0],points[1]);
        for(int i=2;i<=maxNum;i++){
            dp[i]= max(dp[i-2]+ points[i] ,dp[i-1]);
        }
        return dp[maxNum];
    }
};