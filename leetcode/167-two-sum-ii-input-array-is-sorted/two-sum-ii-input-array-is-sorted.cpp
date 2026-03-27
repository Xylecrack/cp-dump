class Solution {
public:
    int n, target;
    int find(vector<int>& numbers, int i, int j, int a) {
        if (j < i)
            return 1001;
        int k = (i + j) / 2;
        if (numbers[k] + numbers[a] == target)
            return k;
        if (numbers[k] + numbers[a] > target)
            return find(numbers, i, k - 1, a);
        else
            return find(numbers, k + 1, j, a);
        return 1001;
    }
    vector<int> twoSum(vector<int>& numbers, int target) {
        n = numbers.size();
        this->target = target;
        for (int i = 0; i < n - 1; i++) {
            int k = find(numbers, i + 1, n - 1, i);
            if (k != 1001)
                return {i + 1, k + 1};
        }
        return {0, 0};
    }
};