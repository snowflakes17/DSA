// to ckeck if the kth bit is et or not....

#include <bits/stdc++.h>
using namespace std;

void checkLS(int n, int k)
{

    // left shift
    if (n & (1 << (k - 1)) != 0)
    {
        cout << "yes" << endl;
    }
    else
    {
        cout << "no" << endl;
    }
}

void checkRS(int n, int k)
{

    // right shift
    if ((n >> (k - 1)) & 1 == 1)
    {
        cout << "yes" << endl;
    }
    else
    {
        cout << "no" << endl;
    }
}

int main()
{
    int n, k;
    cin >> n >> k;

    checkLS(n, k);
    checkRS(n, k);

    return 0;
}