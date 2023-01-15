#include<iostream>
using namespace std;
main()
{
    string temperature,humidity;
    cin>>temperature;
    cin>>humidity;
    if(temperature == "warm")
    {
        if(humidity == "dry")
        cout<<"Play tennis ";
        if(humidity == "humid")
        cout<<"Swim ";
    }  
    if(temperature == "cold")
    {
        if(humidity == "dry")
        cout<<"Play basketball";
        if(humidity == "humid")
        cout<<"Watch TV";
    } 
}