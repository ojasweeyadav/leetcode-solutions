class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n=numbers.size();
        int j=n-1;
        int i=0;
        while(i<=j){
            int need = target-numbers[i];
            if(need==numbers[j]) return {i+1,j+1};
            else if(need<numbers[j]){
                j--;
            }
            else{
                i++;
            }
        }
        return {};
    }
};