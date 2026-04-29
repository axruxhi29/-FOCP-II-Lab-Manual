#include <iostream>
using namespace std;
/
class Vehicle {
    protected:
        string vehicleNumber;
        float rentalPrice;

    public:
    Car(string vNum,float price ,int seats,string type)
    : Vehicle(vNum, price), numberOfSeats(seats), carType(type):