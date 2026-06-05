class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int size=nums.size();
        //HASH MAP - ONE PASS
        unordered_map<int,int>mp;
        for(int i=0;i<size;i++){
            int need=target-nums[i];
            if(mp.find(need)!=mp.end()) return {i,mp[need]};  //( && mp[need]!=i) 1-pass: you never insert current element before checking, so self-match is impossible.
            mp[nums[i]]=i;
        }
        return {};
    }
};






/*HASH MAP - 2 PASS
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int size=nums.size();
        unordered_map<int,int>mp;
        for(int i=0;i<size;i++){
            mp[nums[i]]=i;
        }
        for(int i=0;i<size;i++){
            int need=target-nums[i];
            if(mp.find(need)!=mp.end()  && mp[need]!=i) return {i,mp[need]};
        }
        return {};
    }
};

*/
/* BRUTE FORCE
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(nums[i]+nums[j]==target){
                    return {i,j};
                }
            }
        }
        return {};
    }
};
*/