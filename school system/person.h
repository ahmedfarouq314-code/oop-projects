#ifndef PERSON_H
#define PERSON_H
#include <iostream>
#include <string>
using namespace std;



class person
{
protected:
    string name;
    int age;
    string gender;
    string address;
    string phoneNumber;
    string email;
public:

    person()
    {

    }
    person( string name,
            int age,
            string gender,
            string address,
            string phoneNumber,
            string email)

    {
this->name=name;
this->age=age;
this->gender=gender;
this->address=address;
this->phoneNumber=phoneNumber;
this->email=email;
    }
    void setName(string name)
    {
        this->name=name;
    }
    void setAge(int age)
    {
        this->age=age;
    }
    void setGender(string gender)
    {
        this->gender=gender;
    }
    void setAddress(string address)
    {
        this->address=address;
    }
    void setPhoneNumber(string phoneNumber)
    {
        this->phoneNumber=phoneNumber;
    }
    void setEmail(string email)
    {
        this->email=email;
    }
    string getName()
    {
        return name;
    }
    int getAge()
    {
        return age;
    }
    string getGender()
    {
        return gender;
    }
    string getAddress()
    {
        return address;
    }
    string getPhoneNumber()
    {
        return phoneNumber;
    }
    string getEmail()
    {
        return email;
    }
    void print()
    {
        cout<<"the name is  : "<<name<<endl;
        cout<<" the age is : "<<age<<endl;
        cout<< "the Gender is : "<<gender<<endl;
        cout<< "the Address is :  "<<address<<endl;
        cout<<"the phoneNumber is : " <<phoneNumber<<endl;
        cout<<"the email is : " <<email<<endl;
    }





};

#endif // PERSON_H
