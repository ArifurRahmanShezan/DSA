//https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/I
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int minres=INT_MAX;
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                int res=arr[i]+arr[j]+(j+1)-(i+1);
                if(res<minres){
                    minres=res;
                }
            }
            
        }
        cout<<minres;
    }
    return 0;
}