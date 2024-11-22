#include<bits/stdc++.h>
using namespace std;
class Student{
    public:
    int roll;
    double cgpa;
    int semester;

    Student(int r,double c,int s){
        roll=r;
        cgpa=c;
        semester=s;
    }
};
int main(){
    Student rahim(20,5.0,7);
    cout<<rahim.roll<<" "<<rahim.cgpa<<" "<<rahim.semester;
    return 0;
}