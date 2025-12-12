#ifndef STUDENT_H
#define STUDENT_H
#include<person.h>
#include <iostream>
#include <string>
using namespace std;



class student:public person
{
private:
    int studentID;
    string gradeLevel;
    float gpa;
public:
    student() {}
    student(
             string name,
            int age,
            string gender,
            string address,
            string phoneNumber,
            string email,int studentID,
            string gradeLevel,float gpa)
    {

        this->name=name;
        this->age=age;
        this->gender=gender;
        this->address=address;
        this->phoneNumber=phoneNumber;
        this->email=email;
        this->studentID=studentID;
        this->gradeLevel=gradeLevel;
        this->gpa=gpa;
    }
    void setStudentID(int  studentID)
    {
        this->studentID=studentID;
    }
    void setGradeLevel(string gradeLevel)
    {
        this->gradeLevel=gradeLevel;
    }
    void setGpa(float gpa)
    {
        this->gpa=gpa;
    }
    int getStudentID()
    {
        return studentID;
    }
    string getGradeLevel()
    {
        return gradeLevel;
    }
    float getGpa()
    {
        return gpa;
    }
    void print()
    {
        person::print();
        cout<< "the Id is : "<<studentID<<endl;
        cout<<" the gradeLevel is  : " <<gradeLevel<<endl;
        cout<<" the gpa  is : " <<gpa<<endl;
    }
void information()
{
    cout<<"please enter your name"<<endl;
    cin>>name;
     cout<<"please enter your age"<<endl;
    cin>>age;
     cout<<"please enter your Address"<<endl;
    cin>>address;
     cout<<"please enter your Gender"<<endl;
    cin>>gender;
     cout<<"please enter your phoneNumber"<<endl;
    cin>>phoneNumber;
     cout<<"please enter your email"<<endl;
    cin>>email;
     cout<<"please enter your ID"<<endl;
    cin>>studentID;
     cout<<"please enter your Level"<<endl;
    cin>>gradeLevel;
     cout<<"please enter your Gpa"<<endl;
    cin>>gpa;
    cout<<"student added successfully"<<endl;

}



};

#endif // STUDENT_H
