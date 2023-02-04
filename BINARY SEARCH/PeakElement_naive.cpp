// input: arr[] = {5,10,20,15,7}
// o/p: 20

// i/p: arr[]= {10,20,15,5,23,90,76}
// o/p: 20 or 90

// i/p: arr[]= {80,70,90}
// o/p: 80 or 90

#include <bits/stdc++.h>
using namespace std;

int peakelement(int arr[], int n)
{

     if (n == 1)
     {
          return arr[0];
     }
     else if (arr[0] >= arr[1])
     {
          return arr[0];
     }
     else if (arr[n - 1] >= arr[n - 2])
     {
          return arr[n - 1];
     }

     for (int i = 0; i < n; i++)
     {
          if (arr[i] >= arr[i + 1] && arr[i] >= arr[i - 1])
          {
               return arr[i];
          }
     }
     // return -1;
}
int main()
{
     int n;
     cin >> n;

     int arr[1000];

     for (int i = 0; i < n; i++)
     {
          cin >> arr[i];
     }

     cout << peakelement(arr, n) << endl;
     return 0;
}