class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int size=nums.size();
        int n=size-1;
        int slow=nums[0];
        int fast=nums[0];
        do{
            slow=nums[slow];
            fast=nums[nums[fast]];
        }while(slow!=fast);
        
        slow=nums[0];
        while(slow!=fast){
            slow=nums[slow];
            fast=nums[fast];
        }
        return slow;
    }
};

/*cannot be solved using frequency array as ques asks for constant extra space and if we make freq array then it would be of size freq(n+1) - where n is variable so - not of constant size
Therefore, this approach is incorrect*/