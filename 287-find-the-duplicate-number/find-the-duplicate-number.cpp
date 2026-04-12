class Solution {
public:
    int findDuplicate(vector<int>& nums) {

        // slow & fast start
        int slow = nums[0];
        int fast = nums[0];

        // 1) detect cycle
        do {
            slow = nums[slow];          // 1 step
            fast = nums[nums[fast]];    // 2 steps
        } while (slow != fast);

        // 2) find cycle start
        slow = nums[0];

        // move equally
        while (slow != fast) {
            slow = nums[slow];
            fast = nums[fast];
        }

        // duplicate number
        return slow;
    }
};


/*Treat array like a linked list
Value = next pointer
Cycle exists because of duplicate
Phase 1 → find meeting point inside cycle
Phase 2 → reset + find cycle start = duplicate

REFER TO NOTE ALSO*/

/*cannot be solved using frequency array as ques asks for constant extra space and if we make freq array then it would be of size freq(n+1) - where n is variable so - not of constant size
Therefore, this approach is incorrect*/