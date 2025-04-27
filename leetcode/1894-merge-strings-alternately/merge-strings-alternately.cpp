class Solution {
public:
    string mergeAlternately(string word1, string word2) {

        string combi;
        int i = 0, j = 0;
        while (i < word1.size() || j < word2.size()) {
            if (i < word1.size())
                combi += word1[i++];
            if (j < word2.size())
                combi += word2[j++];
        }
        return combi;
    }
};