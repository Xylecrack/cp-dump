class Solution {
public:
    int triangularSum(vector<int>& nums) {
        if (nums.size() == 1) {
            return nums[0];
        }
        for (int i = nums.size()-1; i > 0; i--) {
            for (int j = 0; j < nums.size() - 1; j++) {
                nums[j] = (nums[j] + nums[j + 1]) % 10;
            }
           
        }
        return nums[0];
    }
};