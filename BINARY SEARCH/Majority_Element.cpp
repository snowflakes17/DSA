#include <bits/stdc++.h>
using namespace std;

int majorityElement(vector<int> &a)
{

    int count = 0;
    int ele = 0;

    for (int i = 0; i < a.size(); i++)
    {
        if (count == 0)
        {
            ele = a[i];
        }
        if (ele == a[i])
        {
            count++;
        }
        else
        {
            count--;
        }
    }
    return ele;
}

int main()
{
    vector<int> v;

    for (int i = 0; i < v.size(); i++)
    {
        cin >> v[i];
    }

    cout << majorityElement(v) << endl;
    return 0;
}