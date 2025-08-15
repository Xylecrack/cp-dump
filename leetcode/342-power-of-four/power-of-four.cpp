class Solution {
public:
    bool isPowerOfFour(int n) {
        // n & (n - 1) : 8  & 7 : 1000 & 0111 : 0 => checks for only one 1 bit in the binary i.e power of 2.
        //n & 0xAAAAAAAA : bit mask to ensure the single bit of n is in even positon
        if (n > 0 &&(n & (n - 1)) == 0 &&(n & 0xAAAAAAAA) == 0) {
            return true;
        }
        return false;
    }
};