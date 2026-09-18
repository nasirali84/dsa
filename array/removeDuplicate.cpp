#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[5] = {1,1,2,2,3};
    int n = 5;
    int i=0;
    for(int j=0; j<n; j++){
        if(arr[i] != arr[j]){
            arr[i+1] = arr[j];
            i++;
        }
    }
    for(int j=0; j<=i; j++){
        cout<<arr[j]<<" ";
    }
}