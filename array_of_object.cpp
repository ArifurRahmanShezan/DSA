#include<bits/stdc++.h>
using namespace std;
class Student{
    public:
    string name;
    int roll;
    int marks;
};
int main(){
    int n;
    cin>>n;
    Student a[n];
    for(int i=0;i<n;i++){
        cin>>a[i].name>>a[i].roll>>a[i].marks;
    }
    //int min=INT_MAX;
    Student min;
    min.marks=INT_MAX;
    for(int i=0;i<n;i++){
        //cout<<a[i].name<<" "<<a[i].roll<<" "<<a[i].marks<<endl;
        // if(a[i].marks<min){
        //     min=a[i].marks;
        if(a[i].marks<min.marks){
            min=a[i];
        }
    }
    
    cout<<min.name<<" "<<min.marks<<" "<<min.roll;
    return 0;
}