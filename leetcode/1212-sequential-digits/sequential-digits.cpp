class Solution {
public:
    int append(int base, int n) { return (base * 10) + n; }
    vector<int> sequentialDigits(int low, int high) {
        vector<int> res;
        int n = 1;
        int j = n;
        while (j<9) {
            for (int i = n + 1; i <= 9; i++) {
                j = append(j, i);
                if (j >= low) {
                    if (j <= high) {
                        res.push_back(j);
                    } else {
                        break;
                    }
                } else {
                    continue;
                }
            }
            j = ++n;
        }
        sort(res.begin(),res.end());
        return res;
    }
};