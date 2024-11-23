#include<bits/stdc++.h>
using namespace std;
class Cricketer
{
    public:
	int jersey_no;
	char country[100];
};
int main(){
    Cricketer* Dhoni=new Cricketer;
    Dhoni->jersey_no=7;
    strcpy(Dhoni->country, "India");
    Cricketer* Kohli=new Cricketer;
    Kohli->jersey_no=Dhoni->jersey_no;
    //Kohli->country=Dhoni->country;
    strcpy(Kohli->country, Dhoni->country); 
    cout<<Kohli->jersey_no<<" "<<Kohli->country;
    
    return 0;
}