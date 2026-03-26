class Solution {
public:
    int n;
    int find(vector<int>& nums, int i, int j) {
        if (i > j)
            return -1;
        if (i == j)
            return nums[i];
        int k = (i + j) / 2;
        if (nums[k] > nums[j]) {
            return find(nums, k + 1, j);
        } else if (nums[k] < nums[j]) {
            return find(nums, i, k);
        }
        return nums[k];
    }
    int findMin(vector<int>& nums) {
        n = nums.size();
        if (n == 1)
            return nums[0];
        if (nums[0] < nums[n - 1])
            return nums[0];

        return find(nums, 0, n - 1);
    }
};