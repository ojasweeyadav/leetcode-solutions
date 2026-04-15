class Solution {
public:
//using single pass
    int maxProduct(vector<int>& nums) {
        int n=nums.size();
        int max1=INT_MIN;
        int max2=INT_MIN;

        for(int x : nums){
            if(x>max1){
                max2=max1;    // shift down
                max1=x;
            }
            else if(x>max2) {
                max2=x;
            }
        }   
        
        return (max1-1)*(max2-1);
    }
};



/* TIME - O(N) STILL NOT VERY OPTIMAL AS USES 2 PASSES

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
*/