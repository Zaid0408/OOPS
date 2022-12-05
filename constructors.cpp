#include <iostream>
#include <math.h>
using namespace std;

class Point
{
    public:
    float x,y;
    Point()
    {
        x=0;
        y=0;
    }
    void read()
    {
        cout<<"Enter the x co-ordinates of the point:\n";
        cin>>x;
        cout<<"Enter the y co-ordinates of the point:\n";
        cin>>y;
    }
    void dist (Point p1[])

    {
    float arr[3],a;
    int po[3],b;
    for(int i=1;i<4;i++)
    {
         arr[i-1]=sqrt(pow(abs(p1[0].x-p1[i].x),2)+pow(abs(p1[0].y-p1[i].y),2));
        po[i-1]=i+2;


    }
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<2-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                a=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=a;
                b=po[j];
                po[j]=po[j+1];
                po[j+1]=a;
            }
        }
    }
    cout<<"Smallest distance between first point is from point "<<po[0]<<" at a distance of: "<<arr[0]<<endl;
    cout<<"Ascending order is: "<<endl;
    for(int i=0;i<3;i++)
    {
         cout<<"Distance between 1st point and point "<<po[i]<<" is: "<<arr[i]<<endl;
    }
    }


};

int main()
{
    Point p1[4],p2;
    for (int i=0;i<=3;i++)
    {
        cout<<"enter the details of "<<i+1<<" point"<<endl;
        p1[i].read();
    }
    p2.dist(p1);
    return 1;
}
