#include <bits/stdc++.h>
using namespace std;

// TC===(tot. bits in n)....
void count(int n)
{
    int ct = 0;

    while (n > 0)
    {

        if ((n & 1) == 1)
        {
            ct++;
        }
        n = n >> 1;
    }
    cout << ct << endl;
}

int main()
{
    int n;
    cin >> n;

    count(n);
    return 0;
}