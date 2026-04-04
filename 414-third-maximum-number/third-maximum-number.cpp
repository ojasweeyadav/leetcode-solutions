class Solution {
public:
    int thirdMax(vector<int>& nums) {
        unordered_set<int> s(nums.begin(), nums.end());
        priority_queue<int> pq(s.begin(), s.end());

        if(pq.size() < 3)
            return pq.top();   // return max directly

        pq.pop(); // 1st max
        pq.pop(); // 2nd max
        return pq.top(); // 3rd max
    }
};