//https://www.hackerrank.com/contests/final-exam-a-introduction-to-c-for-dsa-a-batch-06/challenges/replace-word
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    cin.ignore();

    while(n--){
        
        string s;
        cin>>s;

        string t;
        cin>>t;

        while(1){
            int pos=s.find(t);
            if(pos!=-1){
                s.erase(pos,t.length());
                s.insert(s.begin()+pos,'#');
            }
            else{
                break;
            }
        }
        cout <<s<<endl;;
    }
    return 0;
}