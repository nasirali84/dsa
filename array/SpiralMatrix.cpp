#include <bits/stdc++.h>
using namespace std;

// leetcode 54
int main()
{
    vector<vector<int>> arr = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    vector<int> ans;

    int n = arr.size(), m = arr[0].size();

    int left = 0, right = m - 1;
    int top = 0, bot = n - 1;

    while (left <= right && top <= bot)
    {
        // 1. Traverse left to right
        for (int i = left; i <= right; i++)
        {
            ans.push_back(arr[top][i]);
        }
        top++;

        // 2. Traverse top to bottom
        for (int i = top; i <= bot; i++)
        {
            ans.push_back(arr[i][right]);
        }
        right--;

        // 3. Traverse right to left
        if (top <= bot)
        {
            for (int i = right; i >= left; i--)
            {
                ans.push_back(arr[bot][i]);
            }
            bot--;
        }

        // 4. Traverse bottom to top
        if (left <= right)
        {
            for (int i = bot; i >= top; i--)
            {
                ans.push_back(arr[i][left]);
            }
            left++;
        }
    }

    for (int x : ans)
    {
        cout << x << " ";
    }

    return 0;
}