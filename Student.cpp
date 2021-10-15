#include "Student.h"
#include <iostream>
#include <cstring>

using namespace std;
   int studentId;
   char name[20];

// Assign studentId and name
void Student::assignDetails(int pID, char pname[20])  {
  studentId =pID;
  strcpy(name, pname);
}


void Student::display() {
  cout<<"Student ID : "<<studentId<<endl<<"  Student name  :  "<<name;
}
