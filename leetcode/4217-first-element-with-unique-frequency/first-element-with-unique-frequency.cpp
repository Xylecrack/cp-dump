class Solution {
public:
    int firstUniqueFreq(vector<int>& nums) {
        unordered_map<int, int> freqoffreq;
        unordered_map<int, int> freqofnums;
        int res = 0;
        for (auto& it : nums) {
            freqofnums[it]++;
        }
        for (auto& it : freqofnums) {
            freqoffreq[it.second]++;
        }
        for (auto& it : nums) {
            if (freqoffreq[freqofnums[it]] == 1)
                return it;
        }
        return -1;
    }
};