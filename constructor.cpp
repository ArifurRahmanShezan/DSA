#include<bits/stdc++.h>
using namespace std;
class Student{
    public:
    int roll;
    double cgpa;
    int semester;

    Student(int roll,double cgpa,int semester){
        this->roll=roll;
        this->cgpa=cgpa;
        this->semester=semester;
    }
};
int main(){
    Student rahim(20,5.0,9);
    cout<<rahim.roll<<" "<<rahim.cgpa<<" "<<rahim.semester;
    return 0;
}