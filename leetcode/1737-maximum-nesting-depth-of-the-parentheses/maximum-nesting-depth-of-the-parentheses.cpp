class Solution {
public:
    int maxDepth(string s) {
        stack<char> nested;
        int track=0;
        for (auto& it : s) {
            if (it == '(')
                nested.push(it);

            if (it == ')') {
                track = max(track, (int)nested.size());
                nested.pop();
            }
        }
        return track;
    }
};

// (()((())))