//https://codeforces.com/contest/1703/problem/B
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int alphabet[26]={0};
        int count=0;
        for(char word:s){
            int n=word-'A';
            if(alphabet[n]==0){
                alphabet[n]=1;
                count+=2;
            }
            else{
                count+=1;
            }
            
        }
        cout<<count<<endl;
    }
    return 0;
}