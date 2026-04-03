class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        int n=nums.size();
        vector<int>count(101,0);
        for(int i=0;i<n;i++){
            count[nums[i]]++;
        }
        int sum=0;
        for(int i=0;i<101;i++){
            if(count[i]==1)sum+=i;
        }
        return sum;
    }
};