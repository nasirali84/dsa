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

    // Step 1: Mark rows and columns
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (arr[i][j] == 0) {
                arr[i][0] = 0;

                if (j != 0) {
                    arr[0][j] = 0;
                } else {
                    col0 = 0;
                }
            }
        }
    }

    // Step 2: Set elements to zero using markers
    for (int i = 1; i < n; i++) {
        for (int j = 1; j < m; j++) {
            if (arr[i][0] == 0 || arr[0][j] == 0) {
                arr[i][j] = 0;
            }
        }
    }

    // Step 3: Handle the first row
    if (arr[0][0] == 0) {
        for (int j = 0; j < m; j++) {
            arr[0][j] = 0;
        }
    }

    // Step 4: Handle the first column
    if (col0 == 0) {
        for (int i = 0; i < n; i++) {
            arr[i][0] = 0;
        }
    }

    // Print the matrix
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}