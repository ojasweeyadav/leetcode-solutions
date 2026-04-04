class Solution {
public:
    int findLucky(vector<int>& arr) {
        vector<int>freq(501);
        int n=arr.size();
        for(int i=0;i<n;i++){
            freq[arr[i]]++;
        }
        int maxf=-1;
        for(int i=1;i<501;i++){  // given: 1 <= arr[i] <= 500(so checking from 1)
            if(freq[i]==i){
                maxf=max(maxf,i);
            }
        }
        return maxf;
    }
};