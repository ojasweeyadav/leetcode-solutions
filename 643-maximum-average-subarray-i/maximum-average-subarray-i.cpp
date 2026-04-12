class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n=nums.size();
        double avg;
        double max_avg=INT_MIN;
        int sum=0;
        for(int i=0;i<k;i++){
            sum+=nums[i];
        }
        avg=(double)sum/k;
        max_avg=max(max_avg,avg);
        int j=0;
        for(int i=k;i<n;i++){
            sum+=nums[i];
            sum-=nums[j];
            j++;
            avg=(double)sum/k;
            max_avg=max(max_avg,avg);
        }
        return max_avg;
    }
};