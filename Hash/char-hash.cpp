#include <iostream>
using namespace std;

int main(){
    string s;
    cout<<"Enter a String: ";
    cin>>s;

    int hash[26] = {0};
    for(int i=0; i<s.size(); i++){
        hash[s[i] - 'a']++;
    }

    int q; 
    cout<<"Enter number of queries: ";
    cin>>q;

    while(q--){
        char c;
        cout<<"Enter characters: ";
        cin>>c;
        // fetch
        cout<<"Frequency: "<<hash[c - 'a']<<endl;
    }
}