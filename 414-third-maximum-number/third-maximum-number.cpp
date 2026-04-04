class Solution {
public:
    int thirdMax(vector<int>& nums) {
        int n=nums.size();
        long first = LONG_MIN;
        long sec = LONG_MIN;
        long third = LONG_MIN;
        
        for(int i:nums){
            if(i>first ){
                third=sec;
                sec=first;
                first=i;
            }
            else if(i<first && i>sec  ){
                third=sec;
                sec=i;
            }
            else{
                if(i<sec && i>third)
                third=i;
            }
        }
        if(third==LONG_MIN)return first;
        return third;
    }
};




/* USING PRIORITY QUEUE AND UNORDERED SET
class Solution {
public:
    int thirdMax(vector<int>& nums) {
        unordered_set<int> s;      // unordered_set<int> s(nums.begin(), nums.end());
        for(int i:nums){
            s.insert(i);
        }
        priority_queue<int> pq;    //priority_queue<int> pq(s.begin(), s.end());
        for(int i:s){
            pq.push(i);
        }
        int size=pq.size();
        if(size<3){
            return pq.top();  //max element returned directly
        }

        pq.pop();
        pq.pop();
        return pq.top();  // 3rd max
    }
};

TC - O(nlog n)
SC-O(n)
*/
