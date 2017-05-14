#include <iostream>
#include <stdio.h>
using namespace std;

bool isPrime(int n)
{ // 判断是否为素数
    if (n < 2) {
        return false;
    }
    for(int i = 2; i*i< n; i++) {
        if (n%i == 0) {
            return false;
        }
    }
    return true;
}

int main()
{
    int m,n,i,j,count,res[10000];
    scanf("%d", &m);

    for (i = 0; i < m; i++) {
        scanf("%d", &n);
        j = 3;
        count = 1;
        while(j <= n) {
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
}