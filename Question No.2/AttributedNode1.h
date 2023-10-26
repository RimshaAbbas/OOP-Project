#ifndef ATTRIBUTEDNODE1_H
#define ATTRIBUTEDNODE1_H

class AttributedNode1{
    private:
    char Gender;
    int Age;

    public:
    AttributedNode1();
    AttributedNode1(char gender,int age);
   
    void setGender(char gender);
    void setAge(int age);
    char getGender();
    int getAge();

    ~AttributedNode1();
};
#endif