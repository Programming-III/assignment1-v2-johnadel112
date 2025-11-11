#ifndef COURSE_H
#define COURSE_H

#include <string>
#include "Student.h"
using namespace std;
PRIVATE:
string CourseCode;
string CourseName;
int maxStudents;
Student * students;
int currentStudents;

PUBLIC:
 Course();
~Course();
void addStudent(const Student &s);
void displayCourseInfo();
#endif
#include <COURSE_H>
class Course {
Course :: Course {
  this-> CourseCode= CourseCode;
  this->CourseName= CourseName;
  this->maxStudents= maxStudents;
  this-> currentStudents=CurrentStudents;
}
~Course(){
  delete students;
}
void addStudent(const Student & s){
 Student s= new Student [maxStudents+1];
  for (int i=0; i<maxStudents; i++){
    students[i]= s[i];
  }
  delete students;
  maxStudents++;
}
void displayCourseInfo(){
  cout<<"Code:"<< CourseCode;
   cout<<"name:"<< CourseName;
  cout<<"current students :"<< currentStudents;
  cout<<"maximum number of students"<< maxStudent;

  

}








}
