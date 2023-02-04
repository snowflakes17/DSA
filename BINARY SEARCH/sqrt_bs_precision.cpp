#include <bits/stdc++.h>
using namespace std;

float sqrtBinSer(int n)
{

    float l = 1, h = n, ans = -1;

    while (h - l >= 10 ^ (-4))
    {

        float mid = l + (h - l) / 2;
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