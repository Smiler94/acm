#include <iostream>
#include <string>
#include <map>
using namespace std;

char char_pair(char s)
{
    if (s == '[') return ']';
    if (s == '(') return ')';
    return 'c';
}

bool is_pair(string s)
{
    if (s.length() % 2 != 0) 
        return false;

    if (char_pair(s[0]) == s[s.length() - 1]) {
        if (s.length() == 2) 
            return true;

        return is_pair(s.substr(1, s.length() - 2));
    } else {
        int pos = s.rfind(char_pair(s[0]), 1); // 有问题
        if (pos == s.npos) {
            return false;
        } else {
            cout << s.substr(0, pos + 1) << endl;
            cout << s.substr(pos) << endl;
            return is_pair(s.substr(0, pos + 1)) && is_pair(s.substr(pos));
        }
    }
    return true;
}
int main()
{
    // string a = "[[[]]]";
    // cout << a.substr(1, 4);
    // cin>>a;
    cout<<is_pair("[[[]]]([()])");
    // cout<<is_pair("[[[]]]");
    // cout << char_pair('[');
        return 0;
}