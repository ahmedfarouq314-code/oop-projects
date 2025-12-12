#ifndef COURSE_H
#define COURSE_H
#include<Course.h>
#include <iostream>
using namespace std;


class Course
{
private:
    string courseCode;
    string courseName;
    string teacherName;
public:
    Course() {}
    Course(
        string courseCode,
        string courseName,
        string teacherName)
    {

        this-> courseCode=courseCode;
        this-> courseName=courseName;
        this-> teacherName=teacherName;
    }
    void setCourseCode(string courseCode)
    {
        this-> courseCode=courseCode;
    }
    void setCourseName(string courseName)
    {
        this-> courseName=courseName;
    }
    void setTeacherName(string teacherName )
    {
        this->teacherName=teacherName;
    }
    string getCourseCode()
    {
        return courseCode;
    }
    string getCourseName()
    {
        return courseName;
    }
    string getTeacherName()
    {
        return teacherName;
    }
    void print()
    {

        cout<<"The course code is : "<<courseCode<<endl;
        cout<<"The Course Name is : " << courseName<<endl;
        cout<<"The Teacher Name is : " << teacherName<<endl;
    }

   void information()
    {
          cout<<"enter the  course code  : "<<endl;
          cin>>courseCode;
        cout<<"enter the  Course Name : " <<endl;
        cin>>courseName;
        cout<<"The Teacher Name is : " <<endl;
        cin>>teacherName;
           cout<<"Course added successfully"<<endl;
    }




};

#endif // COURSE_H
