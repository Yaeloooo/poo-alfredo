#include "vehicle.hpp"
#include "name.hpp"
#include "owner.hpp"
#include "driver.hpp"

using namespace std;

Vehicle::Vehicle() {}

Vehicle::Vehicle(const Vehicle &other) : serialNumber(other.serialNumber), owner(other.owner), driver(other.driver), color(other.color), numberWheels(other.numberWheels), numberSeats(other.numberSeats) {}

void Vehicle::setSerialNumber(const std::string &v)
{
    this->serialNumber = v;
}

void Vehicle::setOwner(const Owner &v)
{
    this->owner = v;
}

void Vehicle::setDriver(const Driver &v)
{
    this->driver = v;
}

void Vehicle::setColor(const std::string &v)
{
    this->color = v;
}

void Vehicle::setNumberWheels(const int &v)
{
    this->numberWheels = v;
}

void Vehicle::setNumberSeats(const int &v)
{
    this->numberSeats = v;
}

std::string Vehicle::toString() const
{

    return "Numero Serial: " + serialNumber + "\nPropietario: " + owner.toString() + "\nConductor: " + driver.toString() + "\nColor: " + color + "\nNumero de llantas: " + to_string(numberWheels) + "\nNumero de asientos: " + to_string(numberSeats) + "\n";
}

std::string Vehicle::getSerialNumber() const
{
    return this->serialNumber;
}

Owner Vehicle::getOwner() const
{
    return this->owner;
}

Driver Vehicle::getDriver() const
{
    return this->driver;
}

std::string Vehicle::getColor() const
{
    return this->color;
}

int Vehicle::getNumberWheels() const
{
    return this->numberWheels;
}

int Vehicle::getNumberSeats() const
{
    return this->numberSeats;
}

Vehicle &Vehicle::operator=(const Vehicle &other)
{
    if (this != &other)
    {
        this->serialNumber = other.serialNumber;
        this->owner = other.owner;
        this->driver = other.driver;
        this->color = other.color;
        this->numberWheels = other.numberWheels;
        this->numberSeats = other.numberSeats;
    }

    return *this;
}
