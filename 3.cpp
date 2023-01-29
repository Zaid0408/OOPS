#include <iostream>
using namespace std;

class complex1
{
    public:
        int real=0,imag=0;
        void read()
        {
            cout<<"Enter real part of a complex number:"<<endl;
            cin>>real;
            cout<<"Enter imaginary part of complex number:"<<endl;
            cin>>imag;
        }
        void add(int a,complex1 s2)
        {
            cout<<"Given complex number is: "<<a<<"+"<<s2.imag<<"i"<<endl;
        }
        complex1 Add(complex1 s1,complex1 s2)
        {
            complex1 m1;
            m1.real=s1.real+s2.real;
            cout<<m1.real<<endl;
            m1.imag=s1.imag+s2.imag;
            cout<<m1.imag<<endl;
            return m1;
        };
};

int main()
{
    complex1 c1,c2,c3,c4;
    
    c1.read();
    c2.read();
    c4.add(c1.real,c1);
    c3=c3.Add(c1,c2);
    cout<<"Sum is "<<c3.real<<"+"<<c3.imag<<"i"<<endl;
    return 1;
}