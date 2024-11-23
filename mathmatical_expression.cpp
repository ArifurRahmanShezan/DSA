//https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/W
#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,res;
    char c,e;
    cin>>a;
    cin>>c;
    cin>>b;
    cin>>e;
    cin>>res;
    if(c=='+'){
        if(a+b==res){
            cout<<"Yes";
        }
        else{
            cout<<a+b;
        }
    }
    else if(c=='-'){
        if(a-b==res){
            cout<<"Yes";
        }
        else{
            cout<<a-b;
        }
    }
    else if(c=='*'){
        if(a*b==res){
            cout<<"Yes";
        }
        else{
            cout<<a*b;
        }
    }


    return 0;
}