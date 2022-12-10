#include <iostream>
#include <math.h>
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
    return 1;
}