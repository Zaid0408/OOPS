#include <string.h>
#include <iostream>
#include <cstdlib>
#include <string>
#include <cstdio>
using namespace std;
class CustomerData;
class PersonData
{
    private:
    string lastName, firstName,phone;
    string address;
    public:
    string city,state;
    void read1()
    {
        cout<<"Enter First name of Customer:"<<endl;
        cin>>firstName;
        cout<<"Enter Last name of Customer:"<<endl;
        cin>>lastName;
        cout<<"Enter phone of Customer:"<<endl;
        cin>>phone;
        cout<<"Enter address of Customer:"<<endl;
        getline(cin, address,'*');
    }
    void display1()
    {
        cout<<"\nFirst Name is:"<<firstName;
        cout<<"\nLast Name is:"<<lastName;
        cout<<"\nPhone number is:"<<phone;
        cout<<"\nAddress is:"<<address;
    }

};
class CustomerData: public PersonData
{
    
    private:
    string  email, customerNumber;
    public:
    void read()
    {
        read1();
        cout<<"Enter Customer ID of Customer:"<<endl;
        cin>>customerNumber;
        cout<<"Enter email of Customer:"<<endl;
        cin>>email;
        cout<<"Enter city and state:"<<endl;
        cin>>city>>state;

    }
    void display()
    {
        cout<<"Details of the customer are:"<<endl;
        display1();
        cout<<"\nEmail is:"<<email;
        cout<<"\nCustomer ID is:"<<customerNumber;
    }
};
int main()
{
    CustomerData ob;
    ob.read();
    ob.display();
    return 1;
}