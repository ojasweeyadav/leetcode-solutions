class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int n=nums.size();
        
        int mi=nums[0];
        int ma=nums[0];
        for(int i:nums){
            mi=min(mi,i);
            ma=max(ma,i);
        }   
        int left=ma-mi-1;
        vector<int>ans(left);
        for(int i:nums){
            if(i==ma || i==mi) continue;
            else{
                ans[ma-i-1]=1;
            }
        }
        vector<int>final;
        for(int i=left-1;i>=0;i--){
            if(ans[i]==0)final.push_back(ma-i-1);
        }
        return final;
    }
};