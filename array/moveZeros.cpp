#include <bits/stdc++.h>
using namespace std;

// leetcode: 283 Move Zeros
int main(){
    int n = 5;
    int nums[n] = {0,1,2,0,0};
    int j=0;

    for(int i=0; i<n; i++){
        if((nums[i]) != 0){
            if(i != j){
                swap(nums[i], nums[j]);
            }
            j++;
        }
    }
    for(int i=0; i<n; i++){
        cout<<nums[i]<<" ";
    }
}