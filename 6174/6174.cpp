#include <iostream>
#include <algorithm>
using namespace std;
bool cmp(int a,int b)
{
    return a>b;
}
int convertNum(int n[]) {
    return n[0] * 1000 + n[1] * 100 + n[2] * 10 + n[3];
}

int main()
{
    string a = "3241";
    int min,max,b[4];
    
    for(int i = 0; i < 4; i ++) {
        b[i] = atoi((a.substr(i, 1)).c_str());
    }
    sort(b, b+4);
    int min = convertNum(b);
    sort(b, b+4, cmp);
    int max = convertNum(b);
    cout << min << endl;
    cout << max << endl;
    // int a[4] = {4,3,2,1};
    // sort(a, a+4);
    // cout<<a[1];
}