#include<iostream>
using namespace std;
main()
{
    int dates;
    string months;
    cout<<"Date =  ";
    cin>>dates;
    cout<<"Month = ";
    cin>>months;
    if((dates >= 21 && dates <= 31)||(dates >= 1 && dates <=19)) 
    {
        if(months == "march")
        cout<<"Aries";
    }
    if((dates >= 20 && dates <= 30)||(dates >= 1 && dates <=20))
    {
        if(months == "april")
       
        cout<<"Taurus";
    }
    if((dates >= 21 && dates <= 31)||(dates >= 1 && dates <=20))
    {
        if(months == "may")
        cout<<"Gemini";
    }
    if((dates >= 21 && dates <= 31)||(dates >= 1 && dates <=22))
    {
        if(months == "june")
        cout<<"Cancer";
    }
    if((dates >= 23 && dates <= 31)||(dates >= 1 && dates <=22))
    {
        if(months == "july")    
        cout<<"Leo";
    }
    if((dates >= 23 && dates <= 31)||(dates >= 1 && dates <=22))
    {
        if(months == "august")        
        cout<<"Virgo";
    }
    if((dates >= 23 && dates <= 30)||(dates >= 1 && dates <=22))
    {
        if(months == "september")    
        cout<<"Libra";
    }
    if((dates >= 23 && dates <= 31)||(dates >= 1 && dates <=21))
    {
        if(months == "october")
        cout<<"Scorpio";
    }
    if((dates >= 22 && dates <= 30)||(dates >= 1 && dates <=21))
    {
        if(months == "november")
        cout<<"Sagittarius";
    }
    if((dates >= 22 && dates <= 31)||(dates >= 1 && dates <=19))
    {
        if(months == "december")
        cout<<"Capricorn";
    }
    if((dates >= 20 && dates <= 31)||(dates >= 1 && dates <=18))
    {
        if(months == "january")
        cout<<"Aquarius";
    }
    if((dates >= 19 && dates <= 29)||(dates >= 1 && dates <=20))
    {
        if(months == "february")
        cout<<"Pices";
    }
}