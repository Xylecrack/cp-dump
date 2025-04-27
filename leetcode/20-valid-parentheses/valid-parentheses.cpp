class stacked {
    int top;
    char arr[10000]; //(*_*)

public:
    stacked() { top = -1; }
    void push(char x) { arr[++top] = x; }
    char pop() { return arr[top--]; }
    bool isEmpty() { return top == -1; } 
};

class Solution {
public:
    bool isValid(string s) {
        stacked check;
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == '(' || s[i] == '{' || s[i] == '[') {
                check.push(s[i]);
            } else {
                if (check.isEmpty())
                    return false;
                char pop = check.pop();
                if (s[i] == ')' && pop != '(')
                    return false;
                if (s[i] == ']' && pop != '[')
                    return false;
                if (s[i] == '}' && pop != '{')
                    return false;
            }
        }
        return check.isEmpty();
    }
};
