class Solution {
public:
//DP APPROACH
    int maxRepeating(string sequence, string word) {
        int n=sequence.size();
        int m=word.size();
        
        vector<int>dp(n+1,0);

        int ans=0;

        for(int i=m; i<= n;i++){
            //check if substring ending at i matches the word
            if(sequence.substr(i-m,m)==word){
                dp[i]=dp[i-m]+1;
                ans=max(ans,dp[i]);
            }
        }
        return ans;
    }
};



/*
class Solution {
public:
    int maxRepeating(string sequence, string word) {
        int n=sequence.size();
        int m=word.size();
        int ans=0;

        string repeat = word;

        while(sequence.find(repeat) != string::npos){
            ans++;
            repeat+=word;
        }
        return ans;
    }
};



sequence.find(repeat) tries to find repeat inside sequence
It returns:
✅ index (0, 1, 2, …) → if found
❌ string::npos → if NOT found
*/