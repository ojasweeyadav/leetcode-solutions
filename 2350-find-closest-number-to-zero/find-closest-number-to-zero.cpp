class Solution {
public:
    int findClosestNumber(vector<int>& nums) {
        int ans=nums[0];
        for(int i:nums){
            if(abs(i)<abs(ans) || (abs(i)==abs(ans) && i>ans)){
                ans=i;
            }
        }
        return ans;
    }
};


/* MY LOGIC 
class Solution {
public:
    int findClosestNumber(vector<int>& nums) {
        int n=nums.size();
        int small=INT_MAX;
        int j=INT_MIN;
        for(int i=0;i<n;i++){
            if(abs(nums[i])<small){
                small=abs(nums[i]);
                j=nums[i];
            }
            else if(abs(nums[i])==small){
                small=abs(nums[i]);
                j=max(j,nums[i]);
            }
        }
        return j;
    }
};
*/
//else if can be used without else