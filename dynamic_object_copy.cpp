#include<bits/stdc++.h>
using namespace std;
class Cricketer{
    public:
    string country;
    int jersey_no;

    Cricketer(string country,int jersey_no){
        this->country=country;
        this->jersey_no=jersey_no;
    }
};
int main(){
    Cricketer* Dhoni= new Cricketer("India",7);
    Cricketer* Kohli=new Cricketer("India",18);
    //Kohli=Dhoni;
    // Kohli->country=Dhoni->country;
    // Kohli->jersey_no=Dhoni->jersey_no;
    *Kohli=*Dhoni;
    delete Dhoni;
    //cout<< Dhoni->jersey_no<< " "<< Kohli->jersey_no;
    cout<< Kohli->country<<" "<<Kohli->jersey_no;
    return 0;

}