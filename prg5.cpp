#include<iostream>
#include<string>
using namespace std;
class vehicle
{
    public:
    string regno;
    static int ctr;
    
    void setregno()
    {
        cout<<"Enter register number\n";
        cin>>regno;
        

    }
    vehicle()
    {
        ++ctr;
        cout<<"Vehicle no. "<<ctr<<" created\n";
    }
    void getregno()
    {
        cout<<"Registration number : "<<regno<<endl;
    }
    ~vehicle()
    {
        cout<<"Vehicle no. "<<ctr<<" destroyed"<<endl;
        ctr--;
    }
    

};
int vehicle::ctr=0;
static void getVehiclecount()
    {
        cout<<"Number of vehicles in garage : "<<vehicle::ctr<<endl;
    }

int main()
{
    
    int i,n;
    cout<<"Enter number of vehicles:"<<vehicle::ctr<<endl;
    cin>>n;
    vehicle v[n];
    for(i=0;i<n;i++)
    {
        v[i].setregno();
    }
    for(i=0;i<n;i++)
    {
        v[i].getregno();
    }
    getVehiclecount();

}