//https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/U
#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int count_E=0;
    int count_G=0;
    int count_Y=0;
    int count_P=0;
    int count_T=0;
    for(int i=0;i<s.length();i++){
        if(s[i]=='E'||s[i]=='e'){
            count_E++;
            continue;
        }
        else if(s[i]=='G'||s[i]=='g'){
            count_G++;
            continue;
        }
        else if(s[i]=='y'||s[i]=='Y'){
            count_Y++;
            continue;
        }
        else if(s[i]=='P'||s[i]=='p'){
            count_P++;
            continue;
        }
        else if(s[i]=='T'||s[i]=='t'){
            count_T++;
            continue;
        }
        else{
            continue;
        }
    }
    int arr[5]={count_E,count_G,count_Y,count_P,count_T};
    sort(arr,arr+5);
    cout<<arr[0];
    return 0;
}