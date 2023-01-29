#include<iostream>
#include<string>
using namespace std;
class Ship{
    private:
        string name;
        int year;
    public:
        Ship(){ name = "Unknown"; year = 0; }
        Ship(string n, int y){ name = n; year = y;}


        string getName() { return name; }
        int getYear() { return year; }


        void setName(string n) { name = n; }
        void setYear(int y) { year = y; }

        virtual void print() { cout << "Name: " <<name << ", Year: " << year << endl; }
};

class CruiseShip : public Ship {
     private:

        int maxPassengers;
    public:

        CruiseShip(){ maxPassengers = 0; }
        CruiseShip(string n, int y, int max) :

        Ship(n, y){ maxPassengers = max; }

        // Accessors
        int getMaxPassengers() { return maxPassengers; }
        void setMaxPassengers(int max) {maxPassengers = max; }

        // Overriding print function
        void print() { cout << "Name: " << getName() << ", Max Passengers: " << maxPassengers
        << endl; }
};

class CargoShip : public Ship {
        private:
        int cargoCapacity;
        public:
        CargoShip(){ cargoCapacity = 0; }

        CargoShip(string n, int y, int cargo) :Ship(n, y){ cargoCapacity = cargo; }
        int getCargoCapacity() { return cargoCapacity; }
        void setCargoCapacity(int cargo) {cargoCapacity = cargo; }
        void print() { cout << "Name: " << getName() << ", Cargo Capacity: " << cargoCapacity<< endl; }
};

int main(){
    Ship* fleet[3];
    fleet[0] = new Ship("Titanic", 1912);
    fleet[1] = new CruiseShip("Freedom", 2010,4000);
    fleet[2] = new CargoShip("Ever Given", 2018,200000);

    for(int i = 0; i < 3; i++){
        fleet[i]->print();
    }

    return 0;
}