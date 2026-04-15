class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n=nums.size();
        int max1=INT_MIN;
        int max2=INT_MIN;
        int index_1;

        for(int i=0;i<n;i++){
            max1=max(max1,nums[i]);
            if(max1==nums[i])index_1=i;
        }   
        for(int i=0;i<n;i++){
            if(i==index_1)continue;
            max2=max(max2,nums[i]);
        }
        return (max1-1)*(max2-1);
    }
};