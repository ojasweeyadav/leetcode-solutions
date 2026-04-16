class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n=nums.size();
        int i=0; //even index
        int j=1; //odd index
        vector<int>ans(n);
        for(int x=0;x<n;x++){
            if(nums[x]>0){
                ans[i]=nums[x];
                i+=2;
            }
            else{
                ans[j]=nums[x];
                j+=2;
            }
        }
        return ans;
    }
};


/*Complexity
Time: O(n)
Space: O(n)*/