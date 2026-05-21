class Solution {
public:
//My Approach(using MATH) - BOTH HAVE SAME TC AND SC
    void separate(vector<int>&ans,int x){
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
                separate(ans,i);
            }
        }
        return ans;
    }
};
////

/*
class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int> ans;

        for(int num : nums){
            string s = to_string(num);  //12-integer "12"-string After conversion: you can loop through digits as characters.

            for(char c : s){
                ans.push_back(c - '0');  //c-'0' => character digit becomes integer digit.
            }
        }

        return ans;
    }
};
*/