class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int n=nums.size();
        vector<int>present(101,0);  //1 <= nums[i] <= 100
        int ma=0, mi=100;
        for(int i:nums){
            present[i]=1;
            ma=max(i,ma);
            mi=min(i,mi);
        }
        vector<int>ans;
        for(int x=mi+1;x<ma;x++){
            if(present[x]==0) ans.push_back(x);
        }
        return ans;

    }
};


//LOGIC 1
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


//LOGIC 2 - USING UNORDERED SET 
/* class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int n=nums.size();
        unordered_set<int> s;
        for(int i:nums){
            s.insert(i);         //unordered_set<int> st(nums.begin(), nums.end());
        }
        int mi=nums[0];         //int mi = *min_element(nums.begin(), nums.end());
        int ma=nums[0];        //int ma = *max_element(nums.begin(), nums.end());
        for(int i:nums){
            mi=min(mi,i);            
            ma=max(ma,i);
        }   
        vector<int>ans;
        for(int i=mi+1;i<ma;i++){
            if(s.count(i)==0) ans.push_back(i);   //if(st.find(x) == st.end()) => not present
        }
        return ans;
    }
};
*/