#include<bits/stdc++.h>
using namespace std;
class Student{
    public:
    char name[100];
    int roll;
    char sec;
    double math_marks;
    int cls;
    Student(char* name,int roll,char sec,double math_marks,int cls){
        strcpy(this->name,name);
        this->roll=roll;
        this->sec=sec;
        this->math_marks=math_marks;
        this->cls=cls;

    }

};
int main(){
    Student a("rahim",2,'a',94,5);
    Student b("karim",4,'a',95,6);
    Student c("jasim",8,'a',98,9);
    if(a.math_marks>=b.math_marks&&a.math_marks>=c.math_marks){
        cout<<a.name;
    }
    else if(b.math_marks>=a.math_marks&&b.math_marks>=c.math_marks){
        cout<<b.name;
    }
    else if(c.math_marks>=a.math_marks &&c.math_marks>=b.math_marks){
        cout<<c.name;
    }


    return 0;
}