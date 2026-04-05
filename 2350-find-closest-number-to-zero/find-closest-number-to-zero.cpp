class Solution {
public:
    int findClosestNumber(vector<int>& nums) {
        int n=nums.size();
        int small=INT_MAX;
        int j=INT_MIN;
        for(int i=0;i<n;i++){
            if(abs(nums[i])<small){
                small=abs(nums[i]);
                j=nums[i];
            }
            if(abs(nums[i])==small){
                small=abs(nums[i]);
                j=max(j,nums[i]);
            }
        }
        return j;
    }
};