#include <bits/stdc++.h>
using namespace std;

// LeetCode 118:
int main()
{
    vector<vector<int>> ans;
    int nrow = 5;
    
    for(int i=0; i<nrow; i++){
        vector<int> row(i+1,1);
        for(int j=1; j<i; j++){
            row[j] = ans[i-1][j-1] + ans[i-1][j];
        }
        ans.push_back(row);
    }
    
    for (auto row : ans)
    {
        for (int x : row)
        {
            cout << x << " ";
        }
        cout << endl;
    }
}