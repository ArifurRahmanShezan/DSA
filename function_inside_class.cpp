#include<bits/stdc++.h>
using namespace std;
class Student{
    public:
    string name;
    int roll;
    int eng_marks;
    int math_marks;

    Student(string name,int roll,int eng_marks,int math_marks){
        this->name=name;
        this->roll=roll;
        this->eng_marks=eng_marks;
        this->math_marks=math_marks;
    }
    void total_marks(){
        cout<<name<< "roll "<<roll<<" got total "<<eng_marks+math_marks;
    }

};
int main(){
    Student s("sakib ahmed ",1,67,90);
    s.total_marks();


    
    return 0;
}