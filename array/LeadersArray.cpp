#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr{2,3,1};
    vector<int> ans;
    int n = arr.size();
    int maxi = INT16_MIN;

    for(int i =n-1; i>=0; i--){
        if(arr[i] >= maxi){
            ans.push_back(arr[i]);
        }
        maxi = max(maxi, arr[i]);
    }
    reverse(ans.begin(), ans.end());

    // Print
    for(int x : ans) {
        cout << x << " ";
    }

    return 0;
}