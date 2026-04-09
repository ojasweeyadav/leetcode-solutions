class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n=nums.size();
        int peak;
        for(int i=0;i<n;i++){
            if (i==0){
                if(nums[i]>nums[i+1]) peak=0;
            }
            else if(i==n-1){
                if(nums[i]>nums[i-1]) peak=n-1;
            }
            else{
                if(nums[i]>nums[i+1]  && nums[i]>nums[i-1]) peak=i;
            }
        }
        return peak;
    }
};