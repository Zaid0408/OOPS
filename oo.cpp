#include<iostream>
#include<string>
using namespace std;

class STUDENT
{
   
    public:
         string usn,name,course[6];
        float marks[6][3];

        void read()
        {
            cout<<"Enter Student details like USN number ,name:\n";  
            cin>>usn>>name; 
            for(int i=0;i<6;i++)
            {
                cout<<"Enter course name: "<<endl;
                cin>>course[i];
                cout<<"Enter all 3 CIE marks:"<<endl;
                for(int j=0;j<3;j++)
                {
                    cin>>marks[i][j];

                }

            } 
        }
        
        void display()
        {
            cout<<"Student details are:\nName:"<<name<<"\nUSN:"<<usn<<"\nCourse name\tTest1\tTest2\tTest3\tAvg\n"<<endl;
            for(int i=0;i<6;i++)
            {
                cout<<"\t"<<course[i]<<"\t";
                for(int j=0;j<3;j++)
                {
                    cout<<marks[i][j]<<"\t";
                }
                av(i);
            }
            
        }
        void av(int k)
        {
            float min=marks[k][0],sum=0;
            for(int j=0;j<3;j++)
                {
                    if(min>marks[k][j])
                        min=marks[k][j];
                    sum +=marks[k][j];
                }
            sum=(sum-min)/2.00;
            cout<<sum<<endl;
        }

};
int main()
{
    int b;
    cout<<"Enter number of students";
    cin>>b;
    STUDENT e1[b];
    for(int i=0;i<b;i++)
    {
        e1[i].read();

    }
    for(int i=0;i<b;i++)
    {
        e1[i].display();

    }
    return 1;
}