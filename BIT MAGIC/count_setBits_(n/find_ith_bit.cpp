#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num, i;
    cin >> num >> i;

    if (num >> (i - 1) & 1 == 1)
    {
        cout << 1 << " ";
    }
    else
    {
        cout << 0 << " ";
    }

    // setting a bit

    int set = num | (1 << (i - 1));
    cout << set << " ";

    // clear ith bit...

    int clear = num & ~(1 << (i - 1));
    cout << clear << endl;
    return 0;
}