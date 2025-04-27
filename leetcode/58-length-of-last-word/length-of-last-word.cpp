class Solution {
public:
    int lengthOfLastWord(string s) {
        int n = s.length();
        int c1 = 0;
        int c2 = 0;
        for (int i = 0; i < n; i++) {
            if (s[i] == ' ') {
                c2 = 0;
            } else {
                c2++;
            }
            if(c2!=0){
            c1 = c2;
            }
        }
        return c1;
    }
};