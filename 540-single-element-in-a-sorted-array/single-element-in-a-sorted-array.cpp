class Solution {
public:
    int bs(vector<int>&nums, int low, int high){
        while(low<high){
            int mid=low+(high-low)/2;
            if (mid%2==1) mid--;
            if(nums[mid]==nums[mid+1]) low=mid+2;
            else high=mid;
        }
        return nums[low]; //at low=high
    }
    int singleNonDuplicate(vector<int>& nums) {
        int size=nums.size();
        int ans=bs(nums,0,size-1);
        return ans;
    }
};