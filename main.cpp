#include <iostream>
#include <string>
#include "Person.h"
#include "Student.h"
#include "Instructor.h"
#include "Course.h"


using namespace std;
int main (){


Student s = new Student (2, "Informatics");
s.display();





Instructor i= new Instructor("Computer Science", 5);
i.display();





Course k= new Course ("CS101", "Intro to Programming", 3 ,1); 
k.addStudent(s);
k.displayCourseInfo();




