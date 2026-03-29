class Solution {
public:
    string addBinary(string a, string b) {
        string res = "";
        int n = a.length() - 1;
        int m = b.length() - 1;
        int carr = 0;
        while (m >= 0 && n >= 0) {
            if (a[n] == '0' && b[m] == '0') {
                if (carr) {
                    res += '1';
                    carr = 0;
                } else {
                    res += '0';
                    carr = 0;
                }
            }
            if (a[n] == '1' && b[m] == '0') {
                if (carr) {
                    res += '0';
                    carr = 1;
                } else {
                    res += '1';
                    carr = 0;
                }
            }
            if (a[n] == '0' && b[m] == '1') {
                if (carr) {
                    res += '0';
                    carr = 1;
                } else {
                    res += '1';
                    carr = 0;
                }
            }
            if (a[n] == '1' && b[m] == '1') {
                if (carr) {
                    res += '1';
                    carr = 1;
                } else {
                    res += '0';
                    carr = 1;
                }
            }
            m--;
            n--;
        }
        while (n >= 0) {
            if (a[n] == '1') {
                if (carr) {
                    res += '0';
                    carr = 1;
                } else {
                    res += '1';
                    carr = 0;
                }
            } else {
                if (carr) {
                    res += '1';
                    carr = 0;
                } else {
                    res += '0';
                    carr = 0;
                }
            }
            n--;
        }
        while (m >= 0) {
            if (b[m] == '1') {
                if (carr) {
                    res += '0';
                    carr = 1;
                } else {
                    res += '1';
                    carr = 0;
                }
            } else {
                if (carr) {
                    res += '1';
                    carr = 0;
                } else {
                    res += '0';
                    carr = 0;
                }
            }
            m--;
        }
        if (carr)
            res += '1';
        reverse(res.begin(), res.end());
        return res;
    }
};