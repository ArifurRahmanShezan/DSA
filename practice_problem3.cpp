#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    string t;
    cin>>t;
    
    stringstream ss(s);
    string word;
    int count=0;
    while(ss>>word){
        if(word==t){
            count ++;
        }
        
        //continue;
    }
    cout <<count;
    return 0;
}