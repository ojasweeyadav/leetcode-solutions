class Solution {
public:
    int minimumDistance(vector<int>& nums) {
        map<int,vector<int>>mp;
        int n=nums.size();
        for(int i=0;i<n;i++){
            mp[nums[i]].push_back(i);
        }
        int ans=INT_MAX;
        for(auto &p:mp){
            vector<int> v=p.second; //indices array
            if(v.size()<3)continue;  //check only numbers that appear >= 3 times

            for(int i=0;i+2<v.size();i++){
                int a=v[i], b=v[i+1], c=v[i+2];
                int dist=abs(a-b)+abs(b-c)+abs(c-a);
                ans=min(ans,dist);
            }
        }
        return ans==INT_MAX ? -1:ans;
    }
    
};