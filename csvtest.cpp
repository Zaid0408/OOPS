// Online C++ compiler to run C++ program online
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
{
    // file pointer
    fstream fout;
  
    // opens an existing csv file or creates a new file.
    fout.open("reportcard.csv", ios::out | ios::app);
  
    cout << "Enter the details of 5 students:"<< " roll name maths phy chem bio"<< endl;
  
    int i, roll, phy, chem, math, bio;
    string name;
  
    // Read the input
    for (i = 0; i < 5; i++) {
        cout << "Enter the details of "<<i+1<<" student:"<<endl;
        cin >> roll
            >> name
            >> math
            >> phy
            >> chem
            >> bio;
  
        // Insert the data to file
        fout << roll << ", "
             << name << ", "
             << math << ", "
             << phy << ", "
             << chem << ", "
             << bio
             << "\n";
    }
    return 1;
}