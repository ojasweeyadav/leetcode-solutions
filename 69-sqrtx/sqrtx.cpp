class Solution {
public:
    int mySqrt(int x) {
        for(int i=0;i<=x;i++){
            long long square = 1LL * i * i; // force multiplication in long long
            if (square == x) {
                return i;
            }
            else if (square > x) {
                return i - 1;
            }
        }
        return 0;
    }
};