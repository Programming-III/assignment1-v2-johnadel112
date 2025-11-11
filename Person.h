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
void Person();
void displayPerson();
#endif
class Person{
void Person(){
  this-> name= name;
  this-> id= id;}

string getname(){
return name;
}
int getID(){
  return id;}
void setname(){
  this-> name= name;
}
void setID(){
this->id=id;
}
void displayPerson(){
cout<< "Name:"<< name;
cout << "ID:"<< id;
}
}
