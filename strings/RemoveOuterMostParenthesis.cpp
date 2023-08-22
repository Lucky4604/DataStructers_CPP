#include <iostream>
#include <string>

using namespace std;

string removeOuterParentheses(string s) {
    string result;
    int open = 0;
    for (const char c : s) {
        if (c == '(') {
            if (open > 0) {
                result += c;
            }
            open++;
        } else if (c == ')') {
            open--;
            if (open > 0) {
                result += c;
            }
        }
    }
    return result;
}

int main() {
    string s = "(()())(())(()(()))";
    string result = removeOuterParentheses(s);

    cout << result << endl;
}
