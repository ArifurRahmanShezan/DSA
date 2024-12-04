//https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/I
#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int n=s.length();
    int count=0;
    for(int i=0;i<n/2;i++){
        if(s[i]==s[n-1-i]){
            continue;
        }
        else{
            count=1;
            break;
        }
    }
    if(count==1){
        cout<<"NO";
    }
    else{
        cout<<"YES";
    }
    return 0;
}