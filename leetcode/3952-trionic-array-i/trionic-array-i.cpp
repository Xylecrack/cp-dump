class Solution {
public:
    bool isTrionic(vector<int>& nums) {
        int p = 0;
        int n = nums.size();
        if (n < 4)
            return false;
        while (p < n - 1 && nums[p] < nums[p + 1])
            p++;
        if (p == n-1||p==0)
            return false;
        int q = p;
        while (q < n - 1 && nums[q] > nums[q + 1])
            q++;
        if (q == n-1||q==0)
            return false;
        int r = q;
        while (r < n - 1 && nums[r] < nums[r + 1])
            r++;
        if (r != n - 1||r==q)
            return false;
        return true;
    }
};