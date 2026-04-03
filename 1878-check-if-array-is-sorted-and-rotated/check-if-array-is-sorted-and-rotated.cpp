class Solution {
public:
    bool check(vector<int>& nums) {
        int n=nums.size();
        int drops=0;
        for(int i=0;i<n;i++){
            if(nums[i]>nums[(i+1)%n]) drops++;  //using mod - we're checking in circular manner
        }
        return drops<=1;    
    }
};