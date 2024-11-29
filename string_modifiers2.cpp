#include<bits/stdc++.h>
using namespace std;
int main(){
    string s="Hello World";
    // string s2="hokkan";
    //s=s2;
    // s.assign(s2);
    //s.erase(5,1);
    s.replace(5,2,"ban");
    s.insert(5,"pias");

    cout<<s;

    return 0;
}