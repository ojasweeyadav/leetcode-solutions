class Solution {
public:
    int getLeastFrequentDigit(int n) {
        vector<int>freq(10);
        int dig;
        while(n>0){
            dig=n%10;
            n=n/10;
            freq[dig]++;   //freq[n%10]++;
        }
        int minf=INT_MAX;
        int dig_min;
        for(int i=0;i<10;i++){
            if(freq[i]>0 && freq[i]<minf){
                minf=freq[i];
                dig_min=i;         //since we are iterating over freq so acts like sorted array
            }
            
        }
        return dig_min;
    }
};

/*Time → O(d) (d = digits in n)
Space → O(1) (array of size 10)*/


/* 

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

A little bit complicated for multiple digits with same min freq*/