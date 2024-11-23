//https://www.hackerrank.com/contests/mid-term-a-introduction-to-c-for-dsa/challenges/who-is-it-4
#include<bits/stdc++.h>
using namespace std;
class Student{
    public:
    int Id;
    char name[100];
    char sec;
    int marks;
};
int main(){
    int t;
    cin>>t;
    while(t--){
        Student a,b,c;
        cin>>a.Id>>a.name>>a.sec>>a.marks;
        cin>>b.Id>>b.name>>b.sec>>b.marks;
        cin>>c.Id>>c.name>>c.sec>>c.marks;

        if(a.marks>b.marks && a.marks>c.marks){
            cout<<a.Id<<" "<<a.name<<" "<<a.sec<<" "<<a.marks<<endl;
        }
        else if(b.marks>a.marks && b.marks>c.marks){
            cout<<b.Id<<" "<<b.name<<" "<<b.sec<<" "<<b.marks<<endl;
        }
        else if(c.marks>a.marks && c.marks>b.marks){
            cout<<c.Id<<" "<<c.name<<" "<<c.sec<<" "<<c.marks<<endl;
        }
        else if(a.marks==b.marks&&b.marks==c.marks){
            if (a.Id<b.Id&&a.Id<c.Id){
                cout<<a.Id<<" "<<a.name<<" "<<a.sec<<" "<<a.marks<<endl;
            } 
            else if (b.Id<a.Id&&b.Id<c.Id){
                cout<<b.Id<<" "<<b.name<<" " <<b.sec << " "<<b.marks<< endl;
            } 
            else{
                cout<<c.Id<<" " <<c.name<<" " << c.sec<<" " <<c.marks<< endl;
            }
        }
        else if (a.marks==b.marks && a.marks>c.marks){ 
            if (a.Id<b.Id){
                cout <<a.Id <<" " <<a.name <<" " <<a.sec<<" " <<a.marks<<endl;
            } 
            else{
                cout <<b.Id<<" " <<b.name<<" " <<b.sec <<" " <<b.marks<<endl;
            }
        } 
          else if (a.marks == c.marks && a.marks > b.marks){
            if (a.Id < c.Id){
                cout << a.Id << " " << a.name << " " << a.sec << " " << a.marks << endl;
            } else{
                cout << c.Id << " " << c.name << " " << c.sec << " " << c.marks << endl;
            }
        } 
        else if (b.marks == c.marks && b.marks > a.marks){
            if (b.Id < c.Id){
                cout << b.Id << " " << b.name << " " << b.sec << " " << b.marks << endl;
            } else{
                cout << c.Id << " " << c.name << " " << c.sec << " " << c.marks << endl;
            }
       }
    }
    return 0;
}