class Solution {
public:
    int numRabbits(vector<int>& answers) {
        unordered_map<int, int> count;
        int minRabbits = 0;
        
        for (int num : answers) {
            if (count[num] % (num + 1) == 0) {
                minRabbits += (num + 1);
            }
            count[num]++;
        }
        
        return minRabbits;
    }
};
