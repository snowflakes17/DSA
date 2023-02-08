#include <bits/stdc++.h>
using namespace std;
// in this question we have to find the elements which
//  r greater than all the next elements of the array...
//  arr[]={7,10,4,3,6,5,2}
//  o/p :: 10 6 5 2

void leader(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        bool flag = false;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] <= arr[j])
            {
                flag = true;
                break;
            }
        }
        if (flag == false)
            cout << arr[i] << " ";
    }
}

int main()
{
    int n;
    cin >> n;

    int arr[100000];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    return 0;
}