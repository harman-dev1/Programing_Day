#include<iostream>
using namespace std;
main(){
string name;
int adultTicket;
int childTicket;
int adultSold;
int childSold;
int percent;
cout<<"Enter movie name:";
cin>>name;
cout<<"Adult ticket price:";
cin>>adultTicket;
cout<<"Child ticket price:";
cin>>childTicket;
cout<<"Enter number of adult ticket sold:";
cin>>adultSold;
cout<<"Enter number of chlid ticket sold:";
cin>>childSold;
cout<<"Enter percentage to donate:";
cin>>percent;
cout<<"_____________________________";
int total;
total=childSold*childTicket+adultSold*adultTicket;
cout<<"Total amount:"<<total;
int afterCharity;
afterCharity=total-((total/100)*percent);
cout<<"After Charity amount:"<<afterCharity;

}