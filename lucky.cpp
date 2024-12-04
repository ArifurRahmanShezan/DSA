//https://codeforces.com/contest/1676/problem/A
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int sum=s[0]-'0'+s[1]-'0'+s[2]-'0';
        int sum1=s[3]-'0'+s[4]-'0'+s[5]-'0';
        
        if(sum==sum1){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}