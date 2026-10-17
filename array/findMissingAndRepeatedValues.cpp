#include<bits/stdc++.h>
using namespace std;

// leetcode: 2965. Find Missing and Repeated Values

int main(){
    vector<vector<int>> grid =  {{1,3},{2,2}};
    int n = grid.size();
    int N = n*n;
    vector<int> freq(N+1, 0);
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            freq[grid[i][j]]++;
        }
    }
    int a = -1, b = -1;
    for(int i=1; i<=N; i++){
        if(freq[i] == 2){
            a = i;
        }else if(freq[i] == 0){
            b = i;
        }
    }
    cout <<a<< " "<<b;
}