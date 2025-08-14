class Solution {
public:
    string largestGoodInteger(string num) {
         vector<string> arr = {"000", "111", "222", "333", "444",
                          "555", "666", "777", "888", "999"};
        string res = "-1";
        for (size_t j = 0; j < arr.size(); j++) {
            for (size_t i = 0; i <= num.length() - 3; i++) {
                if (num.substr(i,3) == arr[j]) {
                    if (stoi(num.substr(i, 3)) >= stoi(res)) {
                        res = num.substr(i, 3);
                    }
                }
            }
        }
        if (res == "-1") {
            return "";
        }
        return res;
    }
};