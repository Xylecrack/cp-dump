class Solution {
public:
    bool checkStrings(string s1, string s2) {
        // unordered_map<char, int> es1;
        // unordered_map<char, int> es2;
        // unordered_map<char, int> os1;
        // unordered_map<char, int> os2;
        unordered_map<char, int> even;
        unordered_map<char, int> odd;
        int n = s1.length() - 1;
        for (int i = 0; i <= n; i++) {
            if (i % 2 == 0) {
                even[s1[i]]++;
                even[s2[i]]--;
            }

            else {
                odd[s1[i]]++;
                odd[s2[i]]--;
            }
        }
        // if (es1 != es2)
        //     return false;
        // if (os1 != os2)
        //     return false;
        for (auto& it : even) {
            if (it.second != 0)
                return false;
        }
        for (auto& it : odd) {
            if (it.second != 0)
                return false;
        }
        return true;
    }
};