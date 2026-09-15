#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    map<int, int> mpp;

    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
        mpp[arr[i]]++;
    }

    int q;
    cout<<"Enter number of queries: ";
    cin>>q;
    while(q--){
        int num;
        cout<<"Enter number: ";
        cin>>num;
        cout<<"Frequency of elements: "<<mpp[num]<<endl;
    }

    
}