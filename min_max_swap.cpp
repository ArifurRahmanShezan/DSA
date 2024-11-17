#include<iostream>
#include<algorithm>

using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    // if (a>b){
    //     cout<<"Max is "<<a;
    // }
    // else{
    //     cout<<"Max is "<<b;
    // }
    cout<<min(a,b)<<endl;
    cout<<max(a,b)<<endl;
    cout<< min({1,2,3,4,5,6,7})<<endl;
    cout << max({1,2,3,4,5,6,78,99})<<endl;

    int temp=a;
    a=b;
    b=temp;
    cout<< a<< " "<< b<<endl;
    swap(a,b);
    cout<<a<<" "<<b;
}