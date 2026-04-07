class Solution {
public:
    int getLeastFrequentDigit(int n) {
        vector<int>freq(10);
        int dig;
        while(n>0){
            dig=n%10;
            n=n/10;
            freq[dig]++;
        }
        int minf=INT_MAX;
        int dig_min=INT_MAX;
        for(int i=0;i<10;i++){
            
            if(freq[i]==0)continue;
            else{
                if(minf>freq[i]){
                    dig_min=i;
                }
                minf=min(minf,freq[i]);
                if(minf==freq[i]){
                    dig_min=min(i,dig_min);
                }
            }
            
        }
        return dig_min;
    }
};