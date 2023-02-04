#include <bits/stdc++.h>
using namespace std;

// TC ==== O(n^1/2)

int sqrtNum(int n)
{

    int i = 1;

    // x=15
    // i=1,2,3 and not 4

    while (i * i <= n)
    {
        i++;
        return (i - 1);
    }
}

int main()
{

    int n;
    cin >> n;

    sqrtNum(n);
    return 0;
}