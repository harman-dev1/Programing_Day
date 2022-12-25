#include<iostream>
using namespace std;
main(){
int intialVelocity;
int acceleration;
int time;
cout<<"Enter intial velocity of car:";
cin>>intialVelocity;
cout<<"Enter acceleration of car:";
cin>>acceleration;
cout<<"Enter time:";
cin>>time;
int finalVelocity;
finalVelocity=acceleration*time+intialVelocity;
cout<<"Final velocity of Car:"<<finalVelocity;
}
