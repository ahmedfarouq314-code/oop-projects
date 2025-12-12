#ifndef STAFF_H
#define STAFF_H
#include<person.h>
#include <iostream>
using namespace std;


class Staff:public person
{
private:
    int staffID;
    string role;
    float salary;
public:
    Staff() {}
    Staff(string name,
          int age,
          string gender,
          string address,
          string phoneNumber,
          string email,
          int staffID,
          string role,
          float salary)
    {
        this->name=name;
        this->age=age;
        this->gender=gender;
        this->address=address;
        this->phoneNumber=phoneNumber;
        this->email=email;
        this->staffID=staffID;
        this->role=role;
        this->salary=salary;
    }
    void setStaffID(int staffID)
    {
        this->staffID=staffID;
    }
    void setRole(string role)
    {
        this->role=role;
    }
    void setSalary(float salary)
    {
        this->salary=salary;
    }
    int getStaffID()
    {
        return staffID;
    }
    string getRole()
    {
        return role;
    }
    float getSalary()
    {
        return salary;
    }
    void print()
    {
        person::print();
        cout<<"the staffID : " <<staffID<<endl;
        cout<<"the role : " <<role<<endl;
        cout<<"the salary : " <<salary<<endl;
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
     cout<<"please enter your StaffId"<<endl;
    cin>>staffID;
     cout<<"please enter your role"<<endl;
    cin>>role;
     cout<<"please enter your Salary"<<endl;
    cin>>salary;
       cout<<"staff added successfully"<<endl;

}







};

#endif // STAFF_H
