class Solution {
public:
//this is using greedy + memoization
    int integerReplacement(int n) {
        long long x = n;
        int steps=0;
        //MEMOIZATION
        while(x!=1){
            if(x%2==0){
                x/=2;
            }
            else{
                if (x == 3 || x % 4 == 1)
                    x--;
                else
                    x++;
            }
            steps++;
        }
        return steps;
    }
};

//see Note
/*
Choose the operation that creates more trailing zeros in binary
Because: more zeros → more /2 → fewer steps

bit manipulation + greedy hybrid


DP finds the answer by exploring all options.
Greedy skips exploration because it knows which option is better.*/