#include<iostream>
using namespace std;
main(){
int inputnumber;
cout<<"Enter 4 digit number:";
cin>>inputnumber;
int a;
a=inputnumber%10;
cout<<a;
int b,c;
b=inputnumber/10;
c=b%10;
cout<<c;
int d,e;
d=b/10;
e=d%10;
cout<<e;
int f,g;
f=d/10;
g=f%10;
cout<<g;
int sum;
sum=a+c+e+g;
cout<<"sum:"<<sum;
}

