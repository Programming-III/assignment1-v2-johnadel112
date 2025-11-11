#ifndef PERSON_H
#define PERSON_H

#include <string>
using namespace std;
PRIVATE:
string name;
int id;

PUBLIC:
string getname();
void setname();
void setID();
int getID();
void Person(string name, int id);
void displayPerson();
#endif
#include "PERSON_H"
class Person{
void Person:: Person(){
  this-> name= name;
  this-> id= id;}

string Person:: getname(){
return name;
}
int Person:: getID(){
  return id;}
void Person:: setname(){
  this-> name= name;
}
void Person:: setID(){
this->id=id;
}
void Person:: displayPerson(){
cout<< "Name:"<< name;
cout << "ID:"<< id;
}
}
