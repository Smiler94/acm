#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int a[4] = {4,3,2,1};
    sort(a, a+4);
    cout<<a[1];
}