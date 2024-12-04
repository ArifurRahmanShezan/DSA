//https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/V
#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    while(1){
        int n=s.find("EGYPT");
    if(n!=-1){
        s.erase(n,5);
        s.insert(s.begin()+n,' ');
    }
    else{
        break;
    }
    
    }
    cout<<s;
    
    return 0;
}