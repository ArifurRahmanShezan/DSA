//https://www.hackerrank.com/contests/mid-term-a-introduction-to-c-for-dsa/challenges/monkey-1-2
#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    while(getline(cin,s)){
        string s1="";
        for (int i=0;i<s.length();i++) {
            if (s[i]==' ') {
                continue; 
            }
            else{
                s1+=s[i]; 
            }
        }
        sort(s1.begin(),s1.end());
        cout<<s1<<endl;
        }
    return 0;
}