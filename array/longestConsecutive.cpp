#include <bits/stdc++.h>
using namespace std;

// leetcode 128
int main(){
    vector<int> arr = {100,4,200,1,3,2};
    int n = arr.size();
    int count =1;
    int maxi = 0;

    set<int> st(arr.begin(), arr.end());

    for(int num : st){
        if(st.find(num -1 ) == st.end()){
            count = 1;
            while(st.find(num+count) != st.end()){
                count++;
            }
            maxi = max(count, maxi);
        }
    }
    cout<<maxi;
}