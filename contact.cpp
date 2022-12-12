#include <iostream>
#include <string.h>

using namespace std;
class contact
{
    public:
    long long num;
    string mail,name;
    contact()
    {
        num=0;
        mail=name="";
    }
    contact(int a)
    {
        cout<<"Enter name email and contact number of a person in order:"<<endl;
        cin>>name;
        cin>>mail;
        cin>>num;
    }
    void display(contact a)
    {
        cout<<"\nName : "<<a.name<<"\nEmail: "<<a.mail<<"\nNumber: "<<a.num<<endl;
    }
    void update(contact b)
    {
        int a;
        cout<<"Enter no of fields to be changed:"<<endl;
        cin>>a;
        string s[a];
        for(int i=0;i<a;i++)
        {
            cout<<"Enter which fireld to be changed be it name,email,number:"<<endl;
            cin>>s[i];
            if(s[i] == "name" || s[i] == "Name" || s[i] == "NAME")
            {
                cout<<"Enter new name:"<<endl;
                cin>>b.name;
            }
            else if(s[i] == "email" || s[i] == "Email" || s[i] == "EMAIL")
            {
                cout<<"Enter new email:"<<endl;
                cin>>b.mail;
            }
            else if(s[i] == "number" || s[i] == "Number" || s[i] == "NUMBER")
            {
                cout<<"Enter new number:"<<endl;
                cin>>b.num;
            }
            else
            {
                cout<<"Inavlid field\n";
                if(i==a-1)
                {
                    break;
                }
                else
                    continue;
            }
        }
    }


};
int main()
{
    contact c1[5],c2;
    int a,b=0;
    for(int i=0;i<5;i++)
    {
        c1.[i](1);
    }
    return 1;
}