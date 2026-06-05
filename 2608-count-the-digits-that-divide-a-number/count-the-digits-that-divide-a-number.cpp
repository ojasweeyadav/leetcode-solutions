class Solution {
public:
    int countDigits(int num) {
        int og= num;
        int dig;
        int count=0;
        while(og>0){
            dig=og%10;
            if(num%dig==0)count++;
            og/=10;
        }
        return count;
    }
};