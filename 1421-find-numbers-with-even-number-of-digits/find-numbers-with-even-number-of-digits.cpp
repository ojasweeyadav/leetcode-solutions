class Solution {
public:
    bool even(int n){
        int count=0;
        int digit=0;
        while(n!=0){
            digit=n%10;
            n=n/10;
            count++;
        }
        if(count%2==0) return true;
        else return false;
    }
    int findNumbers(vector<int>& nums) {
        int c=0;
        for(int i:nums){
            if(even(i)){
                c++;
            }
        }
        return c;
    }
};