class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int n=arr.size();
        int i=0;
        while(i<n-1){
            int great=INT_MIN;
            for(int j=i+1;j<n;j++){
                great=max(great,arr[j]);
            }
            arr[i]=great;
            i++;
        }
        arr[n-1]=-1;
        return arr;
    }
};