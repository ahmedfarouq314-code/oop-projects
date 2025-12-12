#ifndef SCHOOL_H
#define SCHOOL_H

#include <iostream>
#include "Person.h"
#include "Student.h"
#include "Teacher.h"
#include "Staff.h"
#include "Course.h"
#include "Classroom.h"
#include "Exam.h"

using namespace std;

class school
{
private:
    string schoolName;
    string address;
    string principalName;
    int studentCounter = 0;
    int TeacherCounter = 0;
    int StaffCounter = 0;
    int CourseCounter = 0;
    int ClassroomCounter = 0;

  student students[1000];
    Teacher teachers[50];
    Staff staffs[50];
    Course courses[20];
    Classroom classrooms[50];

public:

    void addstudent(student s)
    {
        students[studentCounter] = s;
        studentCounter++;
    }

    void addTeacher(Teacher T)
    {
        teachers[TeacherCounter] = T;
        TeacherCounter++;
    }

    void addStaff(Staff f)
    {
        staffs[StaffCounter] = f;
        StaffCounter++;
    }

    void addClassroom(Classroom o)
    {
        classrooms[ClassroomCounter] = o;
        ClassroomCounter++;
    }

    void addCourse(Course u)
    {
        courses[CourseCounter] = u;
        CourseCounter++;
    }

    void AllStudents()
    {
        cout << "________________________" << endl;
        for (int i = 0; i < studentCounter; i++)
        {
            students[i].print();
            cout << endl;
        }
        cout << "________________________" << endl;
    }

    void AllTeacher()
    {
        cout << "________________________" << endl;
        for (int i = 0; i < TeacherCounter; i++)
        {
            teachers[i].print();
            cout << endl;
        }
        cout << "________________________" << endl;
    }

    void AllStaff()
    {
        cout << "________________________" << endl;
        for (int i = 0; i < StaffCounter; i++)
        {
            staffs[i].print();
            cout << endl;
        }
        cout << "________________________" << endl;
    }

    void AllClassroom()
    {
        cout << "________________________" << endl;
        for (int i = 0; i < ClassroomCounter; i++)
        {
            classrooms[i].print();
            cout << endl;
        }
        cout << "________________________" << endl;
    }

    void AllCourse()
    {
        cout << "________________________" << endl;
        for (int i = 0; i < CourseCounter; i++)
        {
            courses[i].print();
            cout << endl;
        }
        cout << "________________________" << endl;
    }

};

#endif // SCHOOL_H
