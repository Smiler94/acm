#include <iostream>
using namespace std;

bool isPrime(int n)
{ // 判断是否为素数
    if (n < 2) {
        return false;
    }
    for(int i = 2; i < n/2+1; i++) {
        if (n%i == 0) {
            return false;
        }
    }
    return true;
}

int main()
{
    int n,i,x[5];
    cin >> n;
    for (i = 0; i< n; i++) {
        cin>>x[i];
    }
    for (i = 0; i<n; i++) {
        if (x[i] == 1) {// 1特殊情况
            cout << 2 << endl;
            continue;
        }
        int idx = (x[i] % 2 == 0 && x[i] != 2) ? 1 : 0;// 奇数从0开始，偶数从1开始计算差值
        while(true) {
            if (isPrime(x[i] + idx)) {// 判断增加差值是否为素数
                cout<< x[i] + idx << endl;
                break;
            }
            if ((x[i] - idx) > 2 && isPrime(x[i] - idx)) {// 判断减去差值是否为素数
                cout<< x[i] - idx << endl;
                break;
            }
            idx += 2;
        }
    }
    return 0;
}