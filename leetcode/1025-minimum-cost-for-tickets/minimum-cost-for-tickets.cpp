class Solution {
public:
    int n;
    int dp[366];
    int go(int i, vector<int>& year, vector<int>& costs) {
        if (i > 365)
            return 0;
        if (dp[i] != -1)
            return dp[i];
        int cost = 0;
        if (year[i] == 0)
            cost = go(i + 1, year, costs);
        else
            cost = min({costs[0] + go(i + 1, year, costs),
                        costs[1] + go(i + 7, year, costs),
                        costs[2] + go(i + 30, year, costs)});
        return dp[i] = cost;
    }
    int mincostTickets(vector<int>& days, vector<int>& costs) {
        this->n = days.size();
        memset(dp, -1, sizeof(dp));
        vector<int> year(366, 0);
        for (int i = 0; i < n; i++) {
            year[days[i]] = 1;
        }
        return go(0, year, costs);
    }
};