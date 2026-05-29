class Solution {
public:

    int digsum(int n){
        int dig;
        int sum=0;
        while(n>0){
            dig=n%10;
            n/=10;
            sum+=dig;
        }
        return sum;
    }
    int minElement(vector<int>& nums) {
        int mini=INT_MAX;
        for(int i:nums){
            mini=min(mini,digsum(i));
        }
        return mini;
    }
};

/*MY APPROACH - USING EXTRA (ANS) ARRAY 

class Solution {
public:

    int digsum(int n){
        int dig;
        int sum=0;
        while(n>0){
            dig=n%10;
            n/=10;
            sum+=dig;
        }
        return sum;
    }
    int minElement(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans(n);
        for(int i=0;i<n;i++){
            ans[i]=digsum(nums[i]);
        }
        return *min_element(ans.begin(),ans.end());
    }
};
*/