class Solution {
public:
    int h;
    int maxi;
    long long bph(vector<int>& piles, int k) {
        long long sum = 0;
        for (int& it : piles) {
            sum += (it + k - 1) / k;
        }
        return sum;
    }
    int suskoko(vector<int>& piles, int i, int j) {
        if (i > j)
            return INT_MAX;
        int k = i + (j - i) / 2;
        long long res = bph(piles, k);
        if (res <= h) {
            int left = suskoko(piles, i, k - 1);
            return min(k, left);
        } else
            return suskoko(piles, k + 1, j);
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        this->h = h;
        maxi = 0;
        for (int& it : piles) {
            maxi = max(maxi, it);
        }
        return suskoko(piles, 1, maxi);
    }
};