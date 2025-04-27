class Solution {
public:
    string longestPalindrome(string s) {
        int n = s.length();
        string res = "";

        for (int i = n; i >= 1; i--) {
            for (int k = 0; k <= n - i; k++) {
                int l = k + i - 1;
                int a = k;
                int flag = 1;
                while (a < l) {
                    if (s[a] != s[l]) {
                        flag = 0;
                        break;
                    }
                    a++;
                    l--;
                }
                if (flag) {
                    return s.substr(k, i);
                }
            }
        }

        return res;
    }
};
