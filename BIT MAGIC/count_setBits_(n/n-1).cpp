#include <bits/stdc++.h>
using namespace std;

// solved in detail in copy notes....

// TC === O(no. of set bit count)....
void count(int n)
{

    int res = 0;

    while (n > 0)
    {
        // if(n & (n-1)!=0){
        //     res++;
        // }

        n = n & (n - 1);
        res++;
    }
    cout << res << endl;
}

int main()
{
    int n;
    cin >> n;

    count(n);
    return 0;
}