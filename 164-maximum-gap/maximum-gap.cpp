class Solution {
public:
    int maximumGap(vector<int>& nums) {
        int n=nums.size();
        if(n<2)return 0;
        int max_d=INT_MIN;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n-1;i++){
            max_d=max(max_d,nums[i+1]-nums[i]);
        }
        return max_d;
    }
};