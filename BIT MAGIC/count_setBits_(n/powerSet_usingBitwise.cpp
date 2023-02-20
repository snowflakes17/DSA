#include <bits/stdc++.h>
using namespace std;

void printPowerSet(string s)
{

    int n = s.length();
    int setSize = pow(2, n);

    for (int i = 0; i < setSize; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i & (1 << j) != 0)
                cout << s[j];
        }
        cout << endl;
    }
}

int main()
{
    string s;
    cin >> s;

    printPowerSet(s);

    return 0;
}