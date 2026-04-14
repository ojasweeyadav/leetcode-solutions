class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int n=arr.size();
        int rightMax = -1;
        for(int i=n-1;i>=0;i--){
            int current=arr[i];
            arr[i]=rightMax;
            rightMax=max(rightMax,current);
        }
        return arr;
    }
};

/* BRUTE FORCE(using nested loops) - O(n^2) time complexity

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

*/