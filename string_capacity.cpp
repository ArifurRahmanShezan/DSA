#include<bits/stdc++.h>
using namespace std;
int main(){
    string s="Hello";
    s="wsdsddcvdfvsdsds";
    cout<<s<<endl;
    cout<<s.size()<<endl;
    cout<<s.max_size()<<endl;
    cout<<s.capacity()<<endl;
    s.clear();
    cout<<s.size()<<endl;
    if(s.empty()==true){
        cout<<"Empty"<<endl;
    }
    else{
        cout<<"Not empty"<<endl;
    }
    s="Hello World";
    s.resize(15,'y');
    cout<<s;

    return 0;
}