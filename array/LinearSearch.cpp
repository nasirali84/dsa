#include <bits/stdc++.h>
using namespace std;


int main(){
    int n = 5;
    int nums[n] = {0,1,2,0,0};
    int x =2;
    for(int i=0; i<n; i++){
        if(nums[i] == x){
            cout<<i;
        }
    }
}