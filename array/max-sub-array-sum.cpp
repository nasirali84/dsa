#include <bits/stdc++.h>
using namespace std;

// Maximum sum of subarray
int main()
{
    int arr[] = {5,4,-1,7,8};
    int n = sizeof(arr) / sizeof(arr[0]);

    int sum = 0;
    int maxi = INT_MIN;

    for(int i = 0; i < n; i++)
    {
        sum += arr[i];
        maxi = max(maxi, sum);

        if(sum < 0)
        {
            sum = 0;
        }
    }

    cout << maxi;
}