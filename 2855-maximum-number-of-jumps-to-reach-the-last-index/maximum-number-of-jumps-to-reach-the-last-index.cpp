class Solution {
public:
    int maximumJumps(vector<int>& nums, int target) {
        int n=nums.size();
        vector<int>dp(n,-1);  //cant initialise with 0-(Does it mean:0 jumps needed(reachable){OR}this state never reachable)
        
        //dp[i] = max no of jumps from index 0 to index i
        dp[0]=0; //as already there
        for(int i=1;i<n;i++){
            for(int j=0;j<i;j++){
                if((nums[i]-nums[j]>=-target) && (nums[i]-nums[j]<=target)){
                    if(dp[j] != -1)
                    dp[i]=max(dp[j]+1,dp[i]);
                }
            }
        }
        return dp[n-1];
    }
};