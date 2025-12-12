#ifndef EXAM_H
#define EXAM_H
#include <iostream>
using namespace std;



class Exam
{
private:
    string examName;
    string courseCode;
    string examDate;
public:
    Exam() {}
    Exam(
        string examName,
        string courseCode,
        string examDate)
    {

        this->examName=examName;
        this->courseCode=courseCode;
        this->examDate=examDate;
    }
    void setExamName(string examName)
    {
        this->examName=examName;
    }
    void setCourseCode(string courseCode)
    {
        this->courseCode=courseCode;
    }
    void setExamData(string examDate)
    {
        this->examDate=examDate;
    }
    string getExamName()
    {
        return examName;
    }
    string getCourseCode()
    {
        return courseCode;
    }
    string getExamDate()
    {
        return examDate;
    }
    void print()
    {

        cout<<"the ExamName is : "<<examDate<<endl;
        cout<<" the CourseCode : " <<courseCode<<endl;
        cout<<"the ExamData : " <<examDate<<endl;
    }
    void information()
    {
       cout<<" enter the ExamName   "<<endl;
       cin>>examDate;
        cout<<"  enter the CourseCode  " <<endl;
        cin>>courseCode;
        cout<<" enter the ExamData"<<endl;
        cin>>examDate;
    }


};

#endif // EXAM_H
