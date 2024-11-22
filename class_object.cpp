#include<bits/stdc++.h>
using namespace std;
class Student{
    public:
    char name[100];
    int roll;
    double cgpa;
};
int main(){
    Student a,b;
    // char temp[100]="sakib";
    // strcpy(a.name,temp);
    // a.roll=10;
    // a.cgpa=3.55;

    cin.getline(a.name,100);
    cin>>a.roll>>a.cgpa;
    
    cin.ignore();
    cin.getline(b.name,100);
    cin>>b.roll>>b.cgpa;
    cout<<a.name<<" "<<a.roll<<" "<<a.cgpa<<endl;
    cout<<b.name<<" "<<b.roll<<" "<<b.cgpa;

    return 0;
}