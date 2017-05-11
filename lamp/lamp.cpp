#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    int a[1000];
    int idx;
    for(int i = 0;i< n; i++){
        a[i] = 1;
    }
    for (int i = 2; i <= k; i++) {
        idx = floor(n/i);
        for (int j = 1; j <= idx; j++ ) {
            a[i*j-1] = a[i*j-1] == 1 ? 0 : 1;
        }
    }
    for (int i = 1; i <= n; i++) {
        if (a[i-1] == 1) {
            cout << i << " ";
        }
    }
    cout<<endl;
    return 0;
}