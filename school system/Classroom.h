#ifndef CLASSROOM_H
#define CLASSROOM_H
#include <Classroom.h>
#include <iostream>
using namespace std;


class Classroom
{
private:
    int roomNumber;
    int capacity;
public:
    Classroom() {}
    Classroom(
        int roomNumber,
        int capacity)
    {

        this->roomNumber=roomNumber;
        this->capacity=capacity;
    }
    void setRoomNumber(int roomNumber)
    {
        this->roomNumber=roomNumber;
    }
    void setCapacity(int  capacity)
    {
        this->capacity=capacity;
    }
    int getRoomNumber()
    {
        return roomNumber;
    }
    int getCapacity()
    {
        return capacity;
    }
    void print()
    {

        cout<<"The RoomNumber is : "<<roomNumber<<endl;
        cout<<"The capacity is : "<<capacity<<endl;
    }
     void information()
    {
        cout<<"enter the roomNumber"<<endl;
        cin>>roomNumber;
        cout<<"enter the capCity"<<endl;
        cin>>capacity;
           cout<<"classroom added successfully"<<endl;
    }



};

#endif // CLASSROOM_H
