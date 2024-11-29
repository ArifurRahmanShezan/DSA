#include<bits/stdc++.h>
using namespace std;
int main(){
    string s="hello";
    string s2="World";
    //s+=s2;
    //cout<<s;
    s.append(s2);
    s.push_back('e');
    s.pop_back();
    s.pop_back();
    cout<<s;
    return 0;
}