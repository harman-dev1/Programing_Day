#include<iostream>
using namespace std;
main()
{
    int subject1Marks,subject2Marks,subject3Marks,subject4Marks,subject5Marks;
    float totalMarks;
    cout<<"Enter subject1 marks ";
    cin>>subject1Marks;
    cout<<"Enter subject2 marks ";
    cin>>subject2Marks;
    cout<<"Enter subject3 marks ";
    cin>>subject3Marks;
    cout<<"Enter subject4 marks ";
    cin>>subject4Marks;
    cout<<"Enter subject5 marks ";
    cin>>subject5Marks;
    string name;
    cout<<"Enter your name ";
    cin>>name;
    totalMarks = subject1Marks+subject2Marks+subject3Marks+subject4Marks+subject5Marks;
    cout<<"Total marks "<<totalMarks<<endl;
    cout<<"Name is "<<name<<endl;
    float percentage;
    percentage = (totalMarks/500);
    percentage = percentage*100;
    cout<<"Percentage is "<<percentage<<endl;
    if(percentage<40)
    cout<<"F";
    if(percentage>=40&&percentage<50)
    cout<<"D";
    if(percentage>=50&&percentage<60)
    cout<<"C";
    if(percentage>=60&&percentage<70)
    cout<<"B";
    if(percentage>=70&&percentage<80)
    cout<<"B+";
    if(percentage>=80&&percentage<90)
    cout<<"A";
    if(percentage>=90&&percentage<=100)
    cout<<"A+";
}