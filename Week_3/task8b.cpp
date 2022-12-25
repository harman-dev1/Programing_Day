#include<iostream>
using namespace std;
main(){
    float vegetablesPrice;
    float fruitsPrice;
    cout<<"Vegetable price per kilogram:";
    cin>>vegetablesPrice;
    cout<<"Fruits price per kilogram:";
    cin>>fruitsPrice;
    int vegetableskg;
    int fruitskg;
    cout<<"Total kg of vegetables:";
    cin>>vegetableskg;
    cout<<"total kg of fruits:";
    cin>>fruitskg;
    float totalv;
    totalv =vegetablesPrice*vegetableskg;
    float totalf;
    totalf =fruitsPrice*fruitskg;
    float coinf;
    coinf =totalf/1.94;
    float coinv;
    coinv =totalv/1.94;
    float rps;
    rps=coinf+coinv;
    cout<<"Price in RPS :"<<rps;
}
