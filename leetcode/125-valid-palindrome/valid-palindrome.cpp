
class Solution {
public:
    bool isPalindrome(string s) {
        string res;
        bool flag = true;
        for (char c : s) {
            if (isalnum(c)) {
                res += tolower(c);
            }
        }
        cout << res << endl;
        int n = res.length();
        for (int i = 0; i < n / 2; i++) {
            if (res[i] != res[n - i - 1]) {
                flag = false;
                break;
            }
        }
        return flag;
    }
};