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
Student* fun(){
    Student* karim= new Student(15,3.88,6);
    return karim;
}


int main(){
    //Student* karim= new Student(20,3.33,2);
    Student* p=fun();
    cout<<p->roll<<" "<<p->cgpa<<" "<<p->semester;
    return 0;
}