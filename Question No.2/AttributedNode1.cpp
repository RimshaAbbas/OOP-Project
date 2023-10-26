
#include <iostream>
#include "AttributedNode1.h"
using namespace std;

AttributedNode1::AttributedNode1(){
    Gender='0';
    Age=0;
    }
AttributedNode1::AttributedNode1(char gender,int age){  //Getters and setters
    Gender=gender;
    Age=age;
    }

void AttributedNode1::setGender(char gender){
    Gender=gender;
    }
void AttributedNode1::setAge(int age){
    Age=age;
    }
char AttributedNode1::getGender(){
    return Gender;
    }
int AttributedNode1::getAge(){
    return Age;
    }

AttributedNode1::~AttributedNode1(){
    cout<<"Destroyed!";
}