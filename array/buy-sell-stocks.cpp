#include <bits/stdc++.h>
using namespace std;

// Maximum sum of subarray
int main()
{
    int arr[] = {7,1,5,3,6,4};
    int n = sizeof(arr) / sizeof(arr[0]);
    int maxProfit = 0, minPrice = INT16_MAX;
    for(int price : arr){
        minPrice = min(minPrice, price);
        maxProfit = max(maxProfit, price - minPrice);
    }
    cout<<maxProfit;
}