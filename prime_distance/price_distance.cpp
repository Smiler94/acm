#include <iostream>
#include <stdio.h>
#include <ctime>
#include <cstdlib>
using namespace std;

bool isPrime(int n)
{ // 判断是否为素数
    if (n < 2) {
        return false;
    }
    for(int i = 2; i*i <= n; i++) {// 截至开方
        if (n%i == 0) {
            return false;
        }
    }
    return true;
}

int main()
{
    int n,i,x[10000];
    scanf("%d", &n);
    for (i = 0; i< n; i++) {
        scanf("%d", &x[i]);
    }
    for (i = 0; i<n; i++) {
        if (x[i] == 1) {// 1特殊情况
            printf("%d %d\n",2,1);
            continue;
        }
        int idx = (x[i] % 2 == 0 && x[i] != 2) ? 1 : 0;// 奇数从0开始，偶数从1开始计算差值
        while(true) {
            if ((x[i] - idx) > 2 && isPrime(x[i] - idx)) {// 判断减去差值是否为素数
                printf("%d %d\n", x[i] - idx, idx);
                break;
            }
            if (isPrime(x[i] + idx)) {// 判断增加差值是否为素数
                printf("%d %d\n", x[i] + idx, idx);
                break;
            }
            idx += 2;
        }
    }
    return 0;
}