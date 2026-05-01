class Solution {
public:
//using O(1) : SC
    int maxRotateFunction(vector<int>& nums) {
        int n = nums.size();
        int f = 0, total = 0;

        for (int i = 0; i < n; i++) {
            total += nums[i];
            f += i * nums[i];
        }

        int ans = f;

        for (int i = n - 1; i > 0; i--) {
            f = f + total - n * nums[i];
            ans = max(ans, f);
        }

        return ans;
    }
};


/* USING SC:O(n)

class Solution {
public:
    int maxRotateFunction(vector<int>& nums) {
        int n=nums.size();
        int j=0;
        int total=0;
        vector<int>fx(n,0);
        for(int i=0;i<n;i++){
            fx[0]+=i*nums[i];
            total+=nums[i];
        }
        j=n-1;
        for(int i=1;i<n;i++){
            fx[i] = fx[i-1] + total - n*nums[j];
            j--;
        }
        return *max_element(fx.begin(),fx.end());
    }
};
*/