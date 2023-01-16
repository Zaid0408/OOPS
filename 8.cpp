#include <string>
#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

class Person
{
    public: 
    int age;
    string name;

};
class Student: virtual public Person
{
    public:
    string usn,sem;
    void get()
    {
        cout<<"Enter student name and age:"<<endl;
        cin>>name>>age;
        cout<<"Enter USN:"<<endl;
        cin>>usn;
        cout<<"Enter sem:"<<endl;
        cin>>sem;
    }
    void display()
    {
        cout<<"Student details are:\n"<<"Name:"<<name<<endl<<"Age:"<<age<<endl<<"USN:"<<usn<<endl<<"Semester:"<<sem<<endl;
    }
};
class Teacher:  virtual public Person
{
    public:
    string dep,id;
    void get()
    {
        cout<<"Enter Teacher name and age:"<<endl;
        cin>>name>>age;
        cout<<"Enter department:"<<endl;
        cin>>dep;
        cout<<"Enter ID number:"<<endl;
        cin>>id;
    }
    void display()
    {
        cout<<"Teacher details are:\n"<<"Name:"<<name<<endl<<"Age:"<<age<<endl<<"ID:"<<id<<endl<<"Department:"<<dep<<endl;
    }
};
class TA:  virtual public Student, virtual public Teacher
{
    public:
    Student s;
    Teacher t;
    TA()
    {
        s.get();
        t.get();
        s.display();
        t.display();
    }
};
int main()
{
    TA ta;
    return 1;
}