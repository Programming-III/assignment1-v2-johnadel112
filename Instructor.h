#ifndef INSTRUCTOR_H
#define INSTRUCTOR_H

#include "Person.h"
using namespace std;
PRIVATE:
string department;
int experienceYears;
Public:
void Instructor();
void display();
#endif
#include "INSTRUCTOR_H"
class Instructor: public Person {
void Instructor:: Instructor(){
this-> department= department;
  this-> experienceYears= experienceYears;
}
void Instructor::display(){
cout <<"Department:"<< department;
  cout<< "Experience Years :"<< experienceYears;
}





}
