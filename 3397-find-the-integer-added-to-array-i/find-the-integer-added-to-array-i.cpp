class Solution {
public:
    int minV(vector<int>& arr){
        int m=arr[0];         //m=INT_MAX; also correct
        for(int i:arr){
            m=min(m,i);
        }
        return m;
    }
    int addedInteger(vector<int>& nums1, vector<int>& nums2) {
        int x = minV(nums2)-minV(nums1);
        return x;
    }
};