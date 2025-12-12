#ifndef TEACHER_H
#define TEACHER_H
#include<person.h>
#include <iostream>
using namespace std;



class Teacher:public person
{
private:
    int id;
    string subject;
    float salary;
public:
    Teacher() {}
    Teacher(string name,
            int age,
            string gender,
            string address,
            string phoneNumber,
            string email,

            int id,
            string subject,
            float salary)
    {
        this->name=name;
        this->age=age;
        this->gender=gender;
        this->address=address;
        this->phoneNumber=phoneNumber;
        this->email=email;
        this->id=id;
        this->subject=subject;
        this->salary=salary;
    }
    void setID(int id)
    {
        this->id=id;
    }
    void setSubject(string subject)
    {
        this->subject=subject;
    }
    void setSalary(float salary)
    {
        this->salary=salary;
    }
    int getID()
    {
        return id;
    }
    string getSubject()
    {
        return subject;
    }
    float getSalary()
    {
        return salary;
    }
    void print()
    {
person::print();
        cout<< "the ID IS : " <<id<<endl;
        cout<<" the Subject : " << subject<<endl;
        cout<<" the salary : " << salary<<endl;

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
    cin>>id;
     cout<<"please enter your Subject"<<endl;
    cin>>subject;
     cout<<"please enter your Salary"<<endl;
    cin>>salary;
       cout<<"Teacher  added successfully"<<endl;

}






};

#endif // TEACHER_H
