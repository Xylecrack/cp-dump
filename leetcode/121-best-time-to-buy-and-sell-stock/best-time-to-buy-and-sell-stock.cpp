class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int MIN = 10001;
        int res = 0;
        for (int i = 0; i < prices.size(); i++) {
            MIN = min(MIN, prices[i]);
            res = max(res, prices[i] - MIN);
        }

        return res;
    }
};