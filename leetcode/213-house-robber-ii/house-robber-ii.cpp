class Solution {
public:
    int n;
    int dp[101];
    int go1(int i, vector<int>& nums) {
        if (i > n - 2)
            return 0;
        if (dp[i] != -1) {
            return dp[i];
        }
        int ans = 0;
        ans = max(go1(i + 1, nums), nums[i] + go1(i + 2, nums));
        return dp[i] = ans;
    }
    int go2(int i, vector<int>& nums) {
        if (i > n - 1)
            return 0;
        if (dp[i] != -1) {
            return dp[i];
        }
        int ans = 0;
        ans = max(go2(i + 1, nums), nums[i] + go2(i + 2, nums));
        return dp[i] = ans;
    }
    int rob(vector<int>& nums) {
    
        this->n = nums.size();
        if(n==1) return nums[0];
        if(n==2) return max(nums[0],nums[1]);
        memset(dp, -1, sizeof(dp));
        int a = go1(0, nums);
        memset(dp, -1, sizeof(dp));
        int b = go2(1, nums);
        return (a > b) ? a : b;
    }
};