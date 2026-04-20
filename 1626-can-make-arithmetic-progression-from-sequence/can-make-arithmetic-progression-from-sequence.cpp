class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
        int n = arr.size();
        
        int minVal = *min_element(arr.begin(), arr.end());
        int maxVal = *max_element(arr.begin(), arr.end());
        
        if ((maxVal - minVal) % (n - 1) != 0)
            return false;  //AP not possible
        
        int diff = (maxVal - minVal) / (n - 1);
        
        unordered_set<int> s(arr.begin(), arr.end());
        
        for (int i = 0; i < n; i++) {
            if (s.find(minVal + i * diff) == s.end())
                return false;
        }
        
        return true;
    }
};
//O(n) - optimal

/*MY APPROACH  - Total = O(n log n)
class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
        int diff;
        int  d;
        int n=arr.size();
        sort(arr.begin(),arr.end());
        for(int i=0;i<n-1;i++){
            d=arr[i+1]-arr[i];
            if(i==0)diff=d;
            if(diff!=d)return false;
        }
        return true;
    }
};

OR

class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        
        int diff = arr[1] - arr[0];
        
        for(int i = 1; i < arr.size() - 1; i++){
            if(arr[i+1] - arr[i] != diff)
                return false;
        }
        
        return true;
    }
};

*/