//https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/G
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int palindrome=0;
    for(int i=0;i<n;i++){
        if(arr[i]!=arr[n-1-i]){
            palindrome++;
        }
    }
    if(palindrome==0){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }

    return 0;
}