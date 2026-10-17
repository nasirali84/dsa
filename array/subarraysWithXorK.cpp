#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> nums = {4, 2, 2, 6, 4};
    int k = 6;
    int cnt =0;
    int n = nums.size();
    map<int, int> mpp;
    int xr = 0;
    mpp[xr]++;
    for(int i=0; i < n; i++){
        xr = xr ^ nums[i];

        int x = xr ^ k;
        cnt += mpp[x];
        mpp[xr]++;
    }
    cout<<cnt;
}