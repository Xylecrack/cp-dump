class Solution {
public:
    bool isPalindrome(int x) {
        int temp = x;
        long long res = 0;
        if (x < 0) {
            return false;
        }
        while (x != 0) {
            int rem = x % 10;
            x = x / 10;
            res = res * 10 + rem;
        }
        if (res == temp)
            return true;
        else
            return false;
        return false;
    }
};