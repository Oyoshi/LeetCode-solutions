#include <string>
#include <stack>

class Solution {
public:
    bool isValid(std::string s) {
        std::stack<char> parenthesesStack;
        std::size_t idx = 0;
        while (s[idx]) {
            const char parenthesis = s[idx];
            switch (parenthesis) {
                case '(':
                case '{':
                case '[':
                    parenthesesStack.push(parenthesis);
                    break;
                case ')':
                    {
                        if (parenthesesStack.empty()) {
                            return false;
                        }
                        const char leftParenthesis = parenthesesStack.top();
                        parenthesesStack.pop();
                        if (leftParenthesis != '(') {
                            return false;
                        }
                        break;
                    }
                case '}':
                    {
                        if (parenthesesStack.empty()) {
                            return false;
                        }
                        const char leftParenthesis = parenthesesStack.top();
                        parenthesesStack.pop();
                        if (leftParenthesis != '{') {
                            return false;
                        }
                        break;
                    }
                case ']':
                    {
                        if (parenthesesStack.empty()) {
                            return false;
                        }
                        const char leftParenthesis = parenthesesStack.top();
                        parenthesesStack.pop();
                        if (leftParenthesis != '[') {
                            return false;
                        }
                        break;
                    }
            }
            ++idx;
        }
        return parenthesesStack.empty();
    }
};