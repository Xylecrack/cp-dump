const int MOD = 1000000007;
class Solution {
public:
    vector<int> productQueries(int n, vector<vector<int>>& queries) {

        vector<int> power;
        int j = 0;
        int bin;
        while (n > 0) {
            bin = (n % 2) * (1 << j);
            if (bin) {
                power.push_back(bin);
            }
            n = n / 2;
            j++;
        }
        vector<int> res;
        for (const auto& i : queries) {
            int temp = 1;
            for (int k = i[0]; k <= i[1]; k++) {
                temp = (1LL * temp * power[k]) % MOD;
            }
            res.push_back(temp);
        }
        return res;
    }
};