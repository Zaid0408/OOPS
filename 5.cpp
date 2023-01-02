#include <string>
#include <iostream>
#include <cstdlib>
using namespace std;

class Matrix
{
    public:
    int m,n,x,mat[10][10];
    Matrix()
    {
        x=m=n=0;
    }
    void read(int y,int z)
    {
        m=y;
        n=z;
        mat[m][n];
        cout<<"Enter elements of the 2d array"<<endl;
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                cin>>mat[i][j];
            }
        }
    }
    Matrix operator + (Matrix  a)
    {
        Matrix a1;
         for(int i=0;i<a.m;i++)
        {
            for(int j=0;j<a.n;j++)
            {
                a1.mat[i][j]=x+a.mat[i][j];
            }
        }
         cout<<"Matrix is:"<<endl;
         for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                cout<<a1.mat[i][j]<<"\t";
            }
            cout<<"\n";
        }
        return a1;
    }
     Matrix operator - (Matrix a)
    {
        Matrix a1;
         for(int i=0;i<a.m;i++)
        {
            for(int j=0;j<a.n;j++)
            {
                a1.mat[i][j]=x-a.mat[i][j];
            }
        }
         cout<<"Matrix is:"<<endl;
         for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                cout<<a1.mat[i][j]<<"\t";
            }
            cout<<"\n";
        }
        return a1;
    }

};
int main()
{
    int a,b,c,d;
    cout<<"Enter the size of matrix 1:"<<endl;
    cout<<"Enter rows:"<<endl;
    cin>>a;
    cout<<"Enter coulums:"<<endl;
    cin>>b;
    Matrix M1,M2;
    M1.read(a,b);
    cout<<"Enter the size of matrix 2:"<<endl;
    cout<<"Enter rows:"<<endl;
    cin>>c;
    cout<<"Enter coulums:"<<endl;
    cin>>d;
    M2.read(c,d);
    Matrix M3,M4;
    M3=M2+M1;
    M4=M2-M1;
    return 1;
}