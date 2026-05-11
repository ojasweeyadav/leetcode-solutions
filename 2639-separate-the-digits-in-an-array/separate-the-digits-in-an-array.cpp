class Solution {
public:
    void seperate(vector<int>&ans,int x){
        vector<int>rev;
        while(x>0){
            int dig=x%10;
            x/=10;
            rev.push_back(dig);
        }
        for(int i=rev.size()-1;i>=0;i--){
            ans.push_back(rev[i]);
        }
    }
    vector<int> separateDigits(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans;
        for(int i:nums){
            if(i<10){
                ans.push_back(i);
            }
            else{
                seperate(ans,i);
            }
        }
        return ans;
    }
};