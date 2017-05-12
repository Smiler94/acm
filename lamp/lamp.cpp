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
        a[i] = 1;// 初始化为1
    }
    for (int i = 2; i <= k; i++) {
        idx = floor(n/i);// i的倍数的个数
        for (int j = 1; j <= idx; j++ ) {// 遍历所有倍数，更换值
            a[i*j-1] = a[i*j-1] == 1 ? 0 : 1;
        }
    }
    for (int i = 1; i <= n; i++) {
        if (a[i-1] == 1) {// 输出为1的索引
            cout << i << " ";
        }
    }
    cout<<endl;
    return 0;
}