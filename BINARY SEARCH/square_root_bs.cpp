#include <bits/stdc++.h>
using namespace std;

int sqrtBinSer(int n)
{

    int l = 1, h = n, ans = -1;

    while (l <= h)
    {

        int mid = (l + h) / 2;
        int midSq = mid * mid;

        if (midSq == n)
        {
            return mid;
        }
        else if (midSq > n)
        {
            h = mid - 1;
        }
        else
        {
            l = mid + 1;
            ans = mid;
        }
    }
    return ans;
}

int main()
{
    int n;
    cin >> n;

    cout << sqrtBinSer(n) << endl;

    return 0;
}