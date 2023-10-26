#include <iostream>
using namespace std;
#include "AttributedNode2.h"

AttributedNode2::AttributedNode2() 
{
    Profession="0";
    CityName="0";
    cout << "AttributedNode2 default constructor called" <<endl;
}
AttributedNode2::AttributedNode2 (string Pro,string Cit)
{
    Profession=Pro;
    CityName= Cit;
    cout << "AttributedNode2 constructor called for Profession and CityName : " <<Pro<< Cit<<endl;
}
AttributedNode2::~AttributedNode2() {
    cout << "AttributedNode2 destructor called  " <<endl;
}
string AttributedNode2::getProfession() {
    return Profession;
}
void AttributedNode2::setProfession(string p) 
{
    Profession=p;
}
string AttributedNode2::getCityName() {
    return CityName;
}
void AttributedNode2::setCityName(string c)
{
   CityName=c;
}