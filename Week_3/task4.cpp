#include<iostream>
using namespace std;
main(){
string name;
cout<<"Enter your Name:";
cin>>name;
float subject1;
cout<<"Enter subject 1 marks:";
cin>>subject1;
float subject2;
cout<<"Enter subject 2 marks:";
cin>>subject2;
float subject3;
cout<<"Enter subject 3 marks:";
cin>>subject3;
float subject4;
cout<<"Enter subject 4 marks:";
cin>>subject4;
float subject5;
cout<<"Enter subject 5 marks:";
cin>>subject5;
cout<<"Student name is :"<<name<<endl;
float percentage;
percentage=((subject1+subject2+subject3+subject4+subject5)/500)*100;
cout<<"total percentage is :"<<percentage;
} 