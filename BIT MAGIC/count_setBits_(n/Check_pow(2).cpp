#include <bits/stdc++.h>
using namespace std;

bool power(int n)
{

    return ((n != 0) && ((n & (n - 1)) == 0));

    // int res = 0;

    // if (n == 0)
    // {
    //     cout << "false" << endl;
    // }

    // if ((n & (n - 1)) == 0)
    // {
    //     cout << "yes" << endl;
    // }

    // if (res == 1)
    // {
    //     cout << "yes" << endl;
    // }
    // else
    // {
    //     cout << "false" << endl;
    // }
}

int main()
{
    int n;
    cin >> n;

    if (power(n))
    {
        cout << "true" << endl;
    }
    else
    {
        cout << "false" << endl;
    }
    return 0;
}