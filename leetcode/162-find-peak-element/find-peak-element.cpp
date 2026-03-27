class Solution {
public:
    int n;
    int find(vector<int>& nums, int i, int j) {
        if (i == j)
            return i;
        int k = (i + j) / 2;
        if (nums[k + 1] > nums[k])
            return find(nums, k + 1, j);
        else
            return find(nums, i, k);
    }
    int findPeakElement(vector<int>& nums) {
        n = nums.size();
        if (n == 1)
            return 0;
        if (n == 2) {
            if (nums[0] > nums[1])
                return 0;
            if (nums[0] < nums[1])
                return 1;
        }
        return find(nums, 0, n - 1);
    }
};