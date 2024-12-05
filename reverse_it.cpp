//https://www.hackerrank.com/contests/final-exam-a-introduction-to-c-for-dsa-a-batch-06/challenges/reverse-it-8-2
#include<bits/stdc++.h>
using namespace std;
class Student{
    public:
    string name;
    int cls;
    char sec;
    int id;
};
int main(){
    int n;
    cin>>n;
    Student a[n];
    
    for(int i=0;i<n;i++){
        cin>>a[i].name>>a[i].cls>>a[i].sec>>a[i].id;
    }
    char temp[n];
    for(int i = 0;i<n;i++) {
        temp[i]=a[i].sec;
    }
    for (int i=0;i<n;i++) {
        a[i].sec=temp[n-i-1];
    }
    for(int i=0;i<n;i++){
        cout<<a[i].name<<" "<<a[i].cls<<" "<<a[i].sec<<" "<<a[i].id<<endl; 
    }
    
    return 0;
}