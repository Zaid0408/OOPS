#include <iostream>
#include <math.h>
#include <fstream>
#include<string>

using namespace std;

class fd
{
    public:
    double p,r,t,ma,in,n;
    public:
    fd() // default constructor
    {
        cin>>p;
        cin>>r;
        cin>>t;
        cin>>n;
    }
    
    fd(fd & f1) //copy constructor and a parameterized passing an object by reference 
    {
        f1.ma=f1.p*(pow((1+(0.01*f1.r/f1.n)),f1.n*f1.t));
        cout<< "Maturity amount is: "<<f1.ma<<endl;
    }
    fd(double a,double b,double c,double d) // overloading constructors
    {
        cout<<"Interest earned is: "<<(a-b)<<"\nRate of interest per period is: "<<(c/d)<<endl;
    }

    
};
int main()
{
    cout<<"Enter the values of amount ,rate of interest, time in years and number of compounding frequency per year (n) :"<<endl;
    fd f1;
    fd f2(f1);
    fd f3(f1.ma,f1.p,f1.r,f1.n);
    fstream cs;
    cs.open("FixedDeposit.csv", ios::out | ios::app);
    cs<<"Principal Amount"<<","<<f1.p<<endl;
    cs<<"Rate of Interest"<<","<<f1.r<<endl;
    cs<<"Time in years"<<","<<f1.t<<endl;
    cs<<"Compound frequency per year"<<","<<f1.n<<endl;
    cs<<"Rate of Interest per period "<<","<<(f1.r/f1.n)<<endl;
    cs<<"Maturity Amount"<<","<<f1.ma<<endl;
    cs<<"Compound Interest"<<","<<(f1.ma-f1.p)<<endl;
    return 1;
}