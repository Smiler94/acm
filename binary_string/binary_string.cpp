#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n,count;
    string s,b;
    cin>>n;
    for(int i = 0;i<n;i ++) {
        count = 0;
        cin>>b;
        cin>>s;
        while(!s.empty()) {
            int pos = s.find(b);
            if (pos < s.length()) {
                s.erase(0, pos+1);
                count ++;
            } else {
                break;
            }
        }
        cout << count << endl;
    }
    return 0;
}