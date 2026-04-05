class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int n=nums.size();
        unordered_set<int> s;
        for(int i:nums){
            s.insert(i);
        }
        int mi=nums[0];
        int ma=nums[0];
        for(int i:nums){
            mi=min(mi,i);
            ma=max(ma,i);
        }   
        vector<int>ans;
        for(int i=mi+1;i<ma;i++){
            if(s.count(i)==0) ans.push_back(i);
        }
        return ans;
    }
};



/*MY LOGIC - KINDA BRUTE FORCE
Works by finding min and max of array and then making a present array for all the elements in between them and if an element is present marking its corresponding index - 1
And in final array pushing indexs o9f present array which have value = 0
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
        vector<int>present(left);
        for(int i:nums){
            if(i==ma || i==mi) continue;
            else{
                present[ma-i-1]=1;
            }
        }
        vector<int>final;
        for(int i=left-1;i>=0;i--){
            if(present[i]==0)final.push_back(ma-i-1);
        }
        return final;
    }
};
*/