#include <bits/stdc++.h>
using namespace std;

// LeetCode 73: Set Matrix Zeroes
int main()
{
    vector<vector<int>> arr = {
        {1, 2, 3},
        {4, 0, 6},
        {7, 8, 9}
    };

    int col0 = 1;
    int n = arr.size(), m = arr[0].size();

    

    // Print the matrix
    for (int i = 0; i < n-1; i++) {
        for (int j = i+1; j < n; j++) {
            swap(arr[i][j], arr[j][i]);
        }
    }

    for(int i=0; i<n; i++){
        reverse(arr[i].begin(), arr[i].end());
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}