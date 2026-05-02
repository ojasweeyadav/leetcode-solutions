class Solution {
public:
    int rotatedDigits(int n) {
        vector<int>dp(n+1,0);
        int count=0;
        for(int i=0;i<=n;i++){         //i=(i/10)*10+(i%10);
            if(i<10){
                if(i==3 || i==4 || i==7)dp[i]=0; // invalid
                else if(i==0 || i==1 || i==8)dp[i]=1; //valid but same
                else{
                    dp[i]=2; //valid and different(for 2,5,6,9)
                    count++; //to avoid the extra count loop
                } 
            }
            else{
                int a = dp[i/10];
                int b = dp[i%10];
                if(a==0 || b==0)dp[i]=0;
                else if(a==1 && b==1)dp[i]=1;
                else{
                    dp[i]=2;
                    count++; //to avoid the extra count loop
                }

            }
        }
        // for(int i:dp){
        //     if(i==2)count++;
        // }
        return count;
    }
};