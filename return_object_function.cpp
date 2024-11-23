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

Student fun(){
    Student rahim(10,5.0,9);
    return rahim;
}
int main(){
    Student obj=fun();
    cout<<obj.roll<<" "<<obj.cgpa<<" "<<obj.semester;
    return 0;
}