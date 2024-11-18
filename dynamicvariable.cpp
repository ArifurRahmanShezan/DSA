#include<bits/stdc++.h>
using namespace std;
int *p;
// void fun(){
//     int x=10;
//     p=&x;
//     cout<<"Fun"<<*p<<endl;
//     return;
// }
void fun1(){
    int *x=new int;
    *x=10;
    p= x;
    cout<<"fun"<<*p<<endl;
    return;

}
int main(){
    fun1();
    cout<<"main"<<*p<<endl;
}