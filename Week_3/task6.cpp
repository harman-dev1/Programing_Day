#include<iostream>
using namespace std;
main(){
int bagSize;
int bagCost;
int areaSquare;
cout<<"Enter the size of fertilizer bag:";
cin>>bagSize;
cout<<"Enter the cost of bag:";
cin>>bagCost;
cout<<"area in square feet that can be covered by bag:";
cin>>areaSquare;
int fertilizerCost;
fertilizerCost=bagCost/bagSize;
int fertilizerSquare;
fertilizerSquare=bagCost/areaSquare;
cout<<"_____________________________"<<endl;
cout<<"The cost of fertilizer per pound:"<<fertilizerCost<<endl;
cout<<"The cost of fertilizing the area per square foot:"<<fertilizerSquare;
}
