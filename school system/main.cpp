#include <iostream>
using namespace std;
#include <person.h>
#include<student.h>
#include<Teacher.h>
#include<Staff.h>
#include<Course.h>
#include<Classroom.h>
#include<Exam.h>
#include<school.h>


int main()
{


    school sh;
    int n;
    do
    {
        cout<<"press 0 To exit "<<endl;
        cout<<"press 1 To add student"<<endl;
        cout<<"press 2 To add Teacher"<<endl;
        cout<<"press 3 To add Staff"<<endl;
        cout<<"press 4 To add ClassRomm"<<endl;
        cout<<"press 5 To add Course"<<endl;
        cout<<"press 6 To add All  students"<<endl;
        cout<<"press 7 To add All  Teachers"<<endl;
        cout<<"press 8 To add All  staffs"<<endl;
        cout<<"press 9 To add All  Courses"<<endl;
        cout<<"press 10 To add All  ClassRooms"<<endl;
cin>>n;
switch(n)
{
case 0:
    return 0;
    case 1:
    {
      student  s;
      s.information();
      sh.addstudent(s);
      break;
    }
     case 2:
    {
      Teacher  T;
      T.information();
      sh.addTeacher(T);
       break;
    }
     case 3:
    {
      Staff  f;
      f.information();
      sh.addStaff(f);
       break;
    }
     case 4:
    {
      Classroom  m;
      m.information();
      sh.addClassroom(m);
       break;
    }
     case 5:
    {
      Course  r;
      r.information();
      sh.addCourse(r);
       break;
    }
     case 6:

      sh.AllStudents();
      break;
    case 7  :

      sh.AllTeacher();
      break;
       case 8 :

      sh.AllStaff();
      break;
       case 9  :

      sh.AllCourse();
      break;
       case 10  :

      sh.AllCourse();
      break;




    }
    }
    while(n!=0);
    return 0;
    }
