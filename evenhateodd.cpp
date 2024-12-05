//https://codeforces.com/group/MWSDmqGsZm/contest/329103/problem/G
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--){
        int t;
        cin>>t;
        int arr[t];
        for(int i=0;i<t;i++){
            cin>>arr[i];
        }
        if(t%2!=0){
            cout<<"-1"<<endl;
        }
        else{
            int res=t/2;
            int count_odd=0;
            int count_even=0;
            for(int i=0;i<t;i++){
                if(arr[i]%2==0){
                    count_even++;
                }
            }
            if(count_even-res<0){
                cout<<-1*(count_even-res)<<endl;
            }
            else{
                cout<<count_even-res<<endl;
            }
        }
    }
    return 0;
}