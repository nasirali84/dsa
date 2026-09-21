#include <bits/stdc++.h>
using namespace std;

// leetcode 268
int main(){
    
    int arr[] = {1,2,3,5};
    int n = sizeof(arr)/ sizeof(arr[0])+1;
    int total = n*(n+1)/2;
    int sum = 0;

    for(int x:arr){
        sum += x;
    }
    cout<<total - sum;
}