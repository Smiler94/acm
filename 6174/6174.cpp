#include <iostream>
#include <algorithm>
using namespace std;
bool cmp(int a,int b)
{
    return a>b;
}
int convertNum(int n[]) // 数组转为数字
{
    return n[0] * 1000 + n[1] * 100 + n[2] * 10 + n[3];
}
void convertArr(int n, int *arr) // 数字转为数组
{
    for(int i = 0; i < 4; i++) {
        arr[i] = 0;
    }
    arr[0] = n/1000;
    arr[1] = (n - convertNum(arr)) / 100;
    arr[2] = (n - convertNum(arr)) / 10;
    arr[3] = n - convertNum(arr);
}
int main()
{
    int a,n,min,max,count,b[4];
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> a;
        min = 0;
        max = a;
        count = 0;
        do {
            a = max - min;
            convertArr(a, b);
            sort(b, b+4);// 升序排序
            min = convertNum(b);
            sort(b, b+4, cmp);// 降序排序
            max = convertNum(b);
            count ++;
        } while ((max - min) != a);// 循环至相等

        cout << count << endl;
    }
}