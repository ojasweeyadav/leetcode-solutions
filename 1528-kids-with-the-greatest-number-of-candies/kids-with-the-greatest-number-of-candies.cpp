class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int n=candies.size();

        vector<bool> ans;
        int max_inital=candies[0];

        for(int i:candies){
            max_inital=max(max_inital,i);
        }
        for(int i=0;i<n;i++){
            if(candies[i]+extraCandies >= max_inital) ans.push_back(true);
            else ans.push_back(false);
        }
        return ans;
    }
};

/*
Time = O(n) (two passes)    
Space = O(n) (result vector) 

OPTIMAL APPROACH :
1. Find the maximum candies any kid currently has
2. For each kid, check
   candies[i] + extraCandies >= max_initial
3. Push true/false in result
*/