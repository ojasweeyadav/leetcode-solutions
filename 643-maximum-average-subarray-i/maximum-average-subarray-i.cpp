class Solution {
public:
// USING SLIDING WINDOW(TWO POINTER) - but here we calculate max sum first and retufrn its avg
    double findMaxAverage(vector<int>& nums, int k) {
        int n=nums.size();
        int maxSum;
        int sum=0;
        for(int i=0;i<k;i++){
            sum+=nums[i];
        }
        maxSum=sum;
        int j=0;
        for(int i=k;i<n;i++){
            sum+=nums[i];
            sum-=nums[j];
            j++;
            maxSum=max(maxSum,sum);
        }
        return (double)maxSum/k;
    }
};


/*THIS IS 1 APPROACH - USING SLIDING WINDOW(TWO POINTER)
(in this we directly calculate the avg and return)

class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n=nums.size();
        double avg;
        double max_avg;
        int sum=0;
        for(int i=0;i<k;i++){
            sum+=nums[i];
        }
        avg=(double)sum/k;
        max_avg=avg;
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
*/