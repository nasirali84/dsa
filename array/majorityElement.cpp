#include <bits/stdc++.h>
using namespace std;

// leetcode 169 problem

int main()
{

    int arr[] = {3,2,3};
    int n = sizeof(arr) / sizeof(arr[0]);
    map<int, int> mpp;
    for(int i=0; i<n; i++){
        mpp[arr[i]]++;
    }
    for(auto it: mpp){
        if(it.second> n/2){
            cout<<it.first;
            break;
        }
    }
    
}