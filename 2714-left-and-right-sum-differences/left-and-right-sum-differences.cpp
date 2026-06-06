class Solution {
public:
    void leftsum(vector<int>&left, int i,vector<int>& nums){
        int sum=0;
        for(int j=0;j<i;j++){
            sum+=nums[j];
        }
        left.push_back(sum);
    }
    void rightsum(vector<int>&right, int i,vector<int>& nums){
        int n=nums.size();
        int sum=0;
        for(int j=i+1;j<n;j++){
            sum+=nums[j];
        }
        right.push_back(sum);
        
    }
    vector<int> leftRightDifference(vector<int>& nums) {
        int n=nums.size();
        if(n==1)return {0};
        vector<int> left, right, ans;
        for(int i=0;i<n;i++){
            leftsum(left,i,nums);
            rightsum(right,i,nums);
        }
        for(int i=0;i<n;i++){
            ans.push_back(abs(left[i]-right[i]));
        }
        return ans;
    }
};