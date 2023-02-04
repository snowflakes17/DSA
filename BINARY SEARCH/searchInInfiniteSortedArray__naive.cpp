#include <bits/stdc++.h>
using namespace std;

// TC === O(Position)........
// SC === O(1)........

int search(int arr[], int x)
{

     int i = 0;
     while (true)
     {
          if (arr[i] == x)
          {
               return i;
          }
          else if (arr[i] > x)
          {
               return -1;
          }
          i++;
     }
}

int main()
{

     int x;
     cin >> x;

     int arr[10000];

     search(arr, x);
     return 0;
}