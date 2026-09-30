#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr{2,3,1};

    int n = arr.size();
    int idx = -1;

    // Step 1
    for(int i = n - 2; i >= 0; i--) {
        if(arr[i] < arr[i + 1]) {
            idx = i;
            break;
        }
    }

    // Step 2
    if(idx == -1) {
        reverse(arr.begin(), arr.end());
        return 0;
    }

    // Step 3
    for(int i = n - 1; i > idx; i--) {
        if(arr[i] > arr[idx]) {
            swap(arr[i], arr[idx]);
            break;
        }
    }

    // Step 4
    reverse(arr.begin() + idx + 1, arr.end());

    // Print
    for(int x : arr) {
        cout << x << " ";
    }

    return 0;
}