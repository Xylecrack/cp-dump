class Solution {
public:
    int n;
    int target;
    int find(vector<int>& nums, int i, int j) {
        if (i > j)
            return -1;
        int k = (i + j) / 2;
        if (nums[k] == target)
            return k;
        if (nums[i] <= nums[k]) {
            if (target <= nums[k] && target >= nums[i])
                return find(nums, i, k - 1);
            else
                return find(nums, k + 1, j);
        }
        if (nums[k] <= nums[j]) {
            if (target <= nums[j] && target >= nums[k])
                return find(nums, k + 1, j);
            else
                return find(nums, i, k - 1);
        }
        return -1;
    }
    int search(vector<int>& nums, int target) {
        this->target = target;
        n = nums.size();
        if (n == 1) {
            return (nums[0] == target) ? 0 : -1;
        }
        if (n == 2) {
            if (nums[0] == target)
                return 0;
            if (nums[1] == target)
                return 1;
            return -1;
        }
        return find(nums, 0, n - 1);
    }
};