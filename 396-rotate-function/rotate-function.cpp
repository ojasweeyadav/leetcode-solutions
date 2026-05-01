class Solution {
public:
    int maxRotateFunction(vector<int>& nums) {
        int n=nums.size();
        int j=0;
        int total=0;
        vector<int>fx(n,0);
        for(int i=0;i<n;i++){
            fx[0]+=i*nums[i];
            total+=nums[i];
        }
        j=n-1;
        for(int i=1;i<n;i++){
            fx[i] = fx[i-1] + total - n*nums[j];
            j--;
        }
        return *max_element(fx.begin(),fx.end());
    }
};