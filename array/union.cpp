#include <bits/stdc++.h>
using namespace std;

// union of two sorted array
int main(){
    int arr1[] = {5,1,2,4,1};
    int arr2[] = {5,1,2,4,6};
    int n1=5, n2 = 5;
    // vector<int> res;
    // bool found = false;
    
    // for(int i=0; i<n1; i++){
    //     for(int j=0; j<n2; j++){
    //         if(arr1[i] == arr2[j]){
    //             found = true;
    //             break;
    //         }
    //     }
    //     if(!found){
    //         res.push_back(arr1[i]);
    //     }
    // }

    // for(int i = 0; i < n2; i++) {
    //     res.push_back(arr2[i]);
    // }

    set<int> res;
    for(int i=0; i<n1; i++){
        res.insert(arr1[i]);
    }
    for(int i=0; i<n2; i++){
        res.insert(arr2[i]);
    }
    
    for(int x:res){
        cout<<x<<" ";
    }
    
}