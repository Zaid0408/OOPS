#include <iostream>

#include<string.h>

using namespace std;

int main(){  

    char cars[50]; // array declaration

    cout<< "Enter the name of some cars: ";   

    // using getline function

    cin.getline(cars, 50);

    std::cout << "\nCars list :"<<cars << std::endl;

    return 0;

}