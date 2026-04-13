class Solution {
public:
//Better approach using only one loop
    int getMinDistance(vector<int>& nums, int target, int start) {
        int n=nums.size();
        
        int min_dist=INT_MAX;
        for(int i=0;i<n;i++){
            if(nums[i]==target){
                min_dist=min(min_dist,abs(i-start));
            }
        }
        
        return min_dist;
    }
};


/*Optimal approach (by me)
class Solution {
public:
    int getMinDistance(vector<int>& nums, int target, int start) {
        int n=nums.size();
        
        int min_dist=INT_MAX;
        for(int i=start;i<n;i++){   //checking towards right from start
            if(nums[i]==target){
                min_dist=min(min_dist, abs(i-start));
            }
        }
        
        for(int i=start;i>=0;i--){   //checking towards left from start
            if(nums[i]==target){
                min_dist=min(min_dist, abs(i-start));
            }
        }
        
        return min_dist;
    }
};

Time complexity : O(n)
Space complexity : O(1)
*/ 