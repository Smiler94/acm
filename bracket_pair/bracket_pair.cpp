#include <iostream>
#include <string>
#include <vector>
using namespace std;

bool is_pair(char s1, char s2)
{
    return (s1 == '[' && s2 == ']') || (s1 == '(' && s2 == ')');
}

bool is_pair(string s)
{
    int l = s.length();
    if (l % 2 != 0) return false;
    if (l == 2) 
        return is_pair(s[0], s[1]);

    std::vector<char> stack;
    for (int i = 0 ;i < l; i ++) {
        if (s[i] == '[' || s[i] == '(') {
            stack.push_back(s[i]);
        } else if (stack.empty()) {
            return false;
        } else if (is_pair(stack.back(), s[i])) {
            stack.pop_back();
        }
    }
    if (stack.empty()) {
        return true;
    }
    return false;
}

int main()
{
    int n,i;
    cin>>n;
    string s;
    for(i = 0; i < n; i++) {
        cin >> s;
        if (is_pair(s)) {
            cout << "Yes" <<endl;
        } else {
            cout << "No" << endl;
        }
    }
    return 0;
}