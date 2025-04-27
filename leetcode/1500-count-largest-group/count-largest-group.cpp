class Solution {
public:
    int countLargestGroup(int n) {
        auto getSum = [](int n) {
            int sum = 0;
            while (n > 0) {
                sum += n % 10;
                n /= 10;
            }
            return sum;
        };

        unordered_map<int, int> sumCount;
        for (int i = 1; i <= n; i++) {
            int sum = getSum(i);
            sumCount[sum]++;
        }
    //EVERYTHING BLOW THIS COMMENT IS STACKOVERFLOW CODE!!!!!!!!!!!!!!!!!!!!!!!!!!! IAM SORRY
        int max_val = std::max_element(sumCount.begin(), sumCount.end(),
                                       [](const auto& a, const auto& b) {
                                           return a.second < b.second;
                                       })
                          ->second;

        int count = std::count_if(
            sumCount.begin(), sumCount.end(),
            [max_val](const auto& p) { return p.second == max_val; });
        return count;
    }
};
