class Solution {
public:
//USING UNORDERED MAP
    int sumOfUnique(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int> m;
        for(int i:nums){
            m[i]++;
        }
        int sum=0;
        for(auto &p:m){
            if(p.second==1){
                sum+=p.first;
            }
        }
        return sum;
    }
};



/* CORRECT OPTIMAL - USING ARRAY 

class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        int n=nums.size();
        vector<int>count(101,0);
        for(int i=0;i<n;i++){
            count[nums[i]]++;
        }
        int sum=0;
        for(int i=0;i<101;i++){
            if(count[i]==1)sum+=i;
        }
        return sum;
    }
};

Time Complexity: O(n)
Space Complexity: O(1)
Because we use a fixed-size frequency array of 101 elements.
(Space = O(101) → O(1))
*/