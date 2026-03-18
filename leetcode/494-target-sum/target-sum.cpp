class Solution {
public:
    int n;
    int go(int i, int sum, int target, vector<int>& nums) {
        if (i == n) {
            if (target == sum)
                return 1;
            else
                return 0;
        }
        return go(i + 1, sum - nums[i], target, nums) +
               go(i + 1, sum + nums[i], target, nums);
    }
    int findTargetSumWays(vector<int>& nums, int target) {
        this->n = nums.size();
        return go(0, 0, target, nums);
    }
};