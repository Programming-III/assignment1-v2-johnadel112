#ifndef STUDENT_H
#define STUDENT_H
#include "Person.h"
#include <string>
#using namespace std;
PRIVATE:
int yearLevel;
string major;

PUBLIC:
void Student();
void Display();
#endif
class Student: public Person{
void Student(){
this -> yearLevel= yearLevel;
  this-> major= major;
}
void display(){
cout<< "Year:" << yearLevel;
cout << "Major:"<< major;
  
}





}
