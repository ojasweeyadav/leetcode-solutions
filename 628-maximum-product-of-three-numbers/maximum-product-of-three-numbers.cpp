class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int max1 = INT_MIN, max2 = INT_MIN, max3 = INT_MIN;
        int min1 = INT_MAX, min2 = INT_MAX;

        for(int x : nums){
            // update 3 largest
            if(x > max1){
                max3 = max2;
                max2 = max1;
                max1 = x;
            }
            else if(x > max2){
                max3 = max2;
                max2 = x;
            }
            else if(x > max3){
                max3 = x;
            }

            // update 2 smallest
            if(x < min1){
                min2 = min1;
                min1 = x;
            }
            else if(x < min2){
                min2 = x;
            }
        }

        return max(max1*max2*max3, max1*min1*min2);
    }
};



//using sort like inbuilt(algorithm) - BETTER AND EASY TO UNDERSTAND 
/*
class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        return max((nums[n-1]*nums[n-2]*nums[n-3]),(nums[n-1]*nums[0]*nums[1])) ;
    }
};
*/

/*OPTIMAL APPROACH

We'll use a sorting with extreme comparison strategy:

Sorting: Arrange array in ascending order to access extremes easily
Case 1 - Three largest: Product of last three elements (nums[-1] × nums[-2] × nums[-3])
Case 2 - Two smallest + largest: Product of first two and last (nums[0] × nums[1] × nums[-1])
Maximum selection: Return the larger of these two products
Edge handling: This approach handles negative numbers, zeros, and all-positive arrays
This approach considers both scenarios where maximum product can occur.

(So in one pass we track:

3 largest → max1 ≥ max2 ≥ max3
2 smallest → min1 ≤ min2))*/