class Solution {
public:
    void shift(vector<int>& arr, int i){
        int n=arr.size();
        for(int j=n-1;j>i;j--){
            arr[j]=arr[j-1];
        }
    }
    void duplicateZeros(vector<int>& arr) {
        int n=arr.size();
        int i=0;
        while(i<n){
            if (arr[i]==0){
                shift(arr,i);
                i+=2;
            }
            else{
                i++;
            }
        }
        
    }
};


/* CODE USING EXTRA SPACE
Approach - two pointers in same direction (one incrementing by  1 and another by 2)

class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        int n=arr.size();
        vector<int>ans;
        
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


Time → O(n) (good)
Space → O(n) (extra array ans)
Expects inplace modification 
*/