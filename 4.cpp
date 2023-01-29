#include <string>
#include <iostream>
#include <cstdlib>
using namespace std;
class Lamborghini;
class Royce
{
    public:

    float mil,price;
    string Mod_name,year;
    void read()
    {
        cout<<"Enter the details of the Rolls Royce: "<<endl;
        cout<<"Model name:\n";
        cin>>Mod_name;
        cout<<"Year:\n";
        cin>>year;
        cout<<"Mileage:\n";
        cin>>mil;
        cout<<"Price:\n";
        cin>>price;
        
    }
    void print()
    {
        cout<<"Details are\nRolls Royce Model name: "<<Mod_name<<"\nYear of release: "<<year<<"\nMileage: "<<mil<<"\nPrice: "<<price<<endl;
    }
    friend void comp(Royce,Lamborghini);
};
class Lamborghini
{
    public:
    float mil,price;
    string Mod_name,year;
    void read()
    {
        cout<<"Enter the details of the Lamborghini: "<<endl;
        cout<<"Model name:\n";
        cin>>Mod_name;
        cout<<"Year:\n";
        cin>>year;
        cout<<"Mileage:\n";
        cin>>mil;
        cout<<"Price:\n";
        cin>>price;
        
    }
    void print()
    {
        cout<<"Details are\nLamborghini Model name: "<<Mod_name<<"\nYear of release: "<<year<<"\nMileage: "<<mil<<"\nPrice: "<<price<<endl;
    }
    friend void comp(Royce,Lamborghini);
};
void comp(Royce r,Lamborghini l)
{
    cout<<"The difference in price is: "<<abs(r.price-l.price)<<endl;
    cout<<"The mileage difference is: "<<abs(r.mil-l.mil)<<endl;
}
int main()
{
    Lamborghini l1;
    Royce r1;
    r1.read();
    l1.read();
    comp(r1,l1);
    r1.print();
    l1.print();
    return 1;
}