#include <iostream>
#include <stdio.h>
using namespace std;
const int N=1000000+10;
int prime[N];
bool isPrime(int n)
{ // 判断是否为素数
    if (!prime[n]) { //记录是否为素数
        if (n < 2) {
            prime[n] = 2;// 非素数
        } else {
            for(int i = 2; i*i <= n; i++) {
                if (n%i == 0) {
                    prime[n] = 2;
                    break;
                }
            }
            if (!prime[n]) {
                prime[n] = 1;
            }
        }  
    }
    return prime[n] == 1;// 1为素数 2为非素数
}

int main()
{
    for (int i = 1;i <= N; i++) {
        prime[i] = 0;
    }
    int m,n,i,j,count,res[10000];
    scanf("%d", &m);

    for (i = 0; i < m; i++) {
        scanf("%d", &n);
        if (n == 1 || n == 2) { // 1,2,3 特殊
            res[i] = 0;
            continue;
        } else if(n == 3) {
            res[i] = 1;
            continue;
        }
        j = 3;
        count = 1;
        while(j <= n-2) {
            if (isPrime(j) && isPrime(j+2)) {
                count ++;
            }
            j += 2;
        }
        res[i] = count;
    }
    for(i = 0; i < m;i++) {
        printf("%d\n", res[i]);
    }
    return 0;
}