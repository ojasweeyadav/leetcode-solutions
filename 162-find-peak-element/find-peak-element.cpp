class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n=nums.size();
        int l=0, r=n-1;
        while(l<r){
            int mid=l+(r-l)/2;
            if(nums[mid]>nums[mid+1]){
                r=mid; //peak on left
            }
            else{
                l=mid+1; //peak on right
            }
        }
        
        return l;
    }
};



/* MY APPROACH (O(n) : TC)
class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n=nums.size();
        int peak;
        for(int i=0;i<n;i++){
            if (i==0){
                if(nums[i]>nums[i+1]) peak=0;
            }
            else if(i==n-1){
                if(nums[i]>nums[i-1]) peak=n-1;
            }
            else{
                if(nums[i]>nums[i+1]  && nums[i]>nums[i-1]) peak=i;
            }
        }
        return peak;
    }
};
*/