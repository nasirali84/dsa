#include <bits/stdc++.h>
using namespace std;

// leetcode 268
int main(){
    
    int arr[] = {1,2,4,5};
    int n = sizeof(arr)/ sizeof(arr[0])+1;
    // int total = n*(n+1)/2;
    // int sum = 0;

    // for(int x:arr){
    //     sum += x;
    // }
    // cout<<total - sum;
    int xor1, xor2;
    for(int i=0; i<n; i++){
        xor1 = xor1 ^arr[i];
        xor2 = xor2 ^ (i+1);
    }
    int res = xor1 ^ xor2;
    cout<<res;
    
}