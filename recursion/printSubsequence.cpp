#include<bits/stdc++.h>
using namespace std;

void solve(const string &s, vector<string> &ans, string op, int index) {
    // Base case
    if (index >= s.length()) {
        ans.push_back(op);
        return;
    }

    // Exclude call
    solve(s, ans, op, index + 1);

    // Include call
    solve(s, ans, op + s[index], index + 1);
}

vector<string> generateSubsequences(const string &s) {
    vector<string> ans;
    string op = "";
    int index = 0;
    solve(s, ans, op, index);
    return ans;
}

int main() {
    string input = "abc"; // Replace this with your desired input string
    vector<string> subsequences = generateSubsequences(input);

    cout << "All subsequences of '" << input << "':" << endl;
    for (const string &subseq : subsequences) {
        cout << subseq << endl;
    }

    return 0;
}
