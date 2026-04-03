class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        int n=arr.size();
        vector<int>ans;
        int count=0;
        for(int i=0; i<n;i++){
            if(arr[i]==0)count++;
        }
        int j=0, i=0;
        while(j<n){
            if(arr[i]==0){
                ans.push_back(arr[i]);
                ans.push_back(arr[i]);
                j+=2;
                i++;
            }
            else{
                ans.push_back(arr[i]);
                j++;
                i++;
            }
        }
        for(int i=0;i<n;i++){
            arr[i]=ans[i];
        }
    }
};