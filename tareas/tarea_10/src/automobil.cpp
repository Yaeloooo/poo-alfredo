#include "automobile.hpp"

using namespace std;

Automobile::Automobile() : numberCylinders(2), numberDoors(2) {}

Automobile::Automobile(int c, int d) : numberCylinders(c), numberDoors(d) {}

Automobile::Automobile(const Automobile &other) : numberCylinders(other.numberCylinders), numberDoors(other.numberDoors) {}

void Automobile::setNumberCylinders(const int &v)
{
    this->numberCylinders = v;
}

void Automobile::setNumberDoors(const int &v)
{
    this->numberDoors = v;
}

std::string Automobile::toString() const
{
    return "\n" + Vehicle::toString() + "\nNumero de cilindros: " + to_string(numberCylinders) + "\nNumero de puertas: " + to_string(numberDoors) + "\n";
}

int Automobile::getNumberCylinders() const
{
    return this->numberCylinders;
}

int Automobile::getNumberDoors() const
{
    return this->numberDoors;
}

Automobile &Automobile::operator=(const Automobile &other)
{

    if (this != &other)
    {
        this->serialNumber = other.serialNumber;
        this->owner = other.owner;
        this->driver = other.driver;
        this->color = other.color;
        this->numberWheels = other.numberWheels;
        this->numberSeats = other.numberSeats;
        this->numberCylinders = other.numberCylinders;
        this->numberDoors = other.numberDoors;
    }

    return *this;
}
