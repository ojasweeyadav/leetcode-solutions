class Solution {
public:
    int first(vector<int>& nums, int target){
        int low=0, high=nums.size()-1;
        int first=-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(nums[mid]==target){
                first=mid;   // store index
                high=mid-1;  // move left
            }
            else if(nums[mid]>target) high=mid-1;
            else low=mid+1;
        }
        return first;
    }    
    int last(vector<int>& nums,int target){
        int low=0, high=nums.size()-1;
        int last=-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(nums[mid]==target){
                last=mid;   // store index
                low=mid+1;  // move right
            }
            else if(nums[mid]>target) high=mid-1;
            else low=mid+1;
        }
        return last;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        int low=0;
        int n=nums.size();
        int high=n-1;
        int start=first(nums,target);
        int end=last(nums,target);
        return {start,end};  //return {first(nums,target), last(nums,target)};
    }
};

/*
 1. Array is sorted → use Binary Search.
 2. We need first index and last index of target.
 3. Do two binary searches:
    First search → when target found, move left (`high = mid - 1`) to get leftmost index.
    Second search → when target found, move right (`low = mid + 1`) to get rightmost index.
 4. If target never found → return `{-1, -1}`.
 => Time complexity: O(log n), Space: O(1).
*/