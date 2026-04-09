#include "motorcycle.hpp"

using namespace std;

Motorcycle::Motorcycle() {}

Motorcycle::Motorcycle(int c, std::string t) : cylinderCapacity(c), type(t)
{
}

Motorcycle::Motorcycle(const Motorcycle &other) : cylinderCapacity(other.cylinderCapacity), type(other.type)
{
}

void Motorcycle::setCylinderCapacity(const int &v)
{
    this->cylinderCapacity = v;
}

void Motorcycle::setType(const std::string &v)
{
    this->type = v;
}

std::string Motorcycle::toString() const
{
    return "\n" + Vehicle::toString() + "\nCilindraje: " + to_string(cylinderCapacity) + "\nTipo: " + type + "\n";
}

int Motorcycle::getCylinderCapacity() const
{
    return this->cylinderCapacity;
}

std::string Motorcycle::getType() const
{
    return this->type;
}

Motorcycle &Motorcycle::operator=(const Motorcycle &other)
{
    if (this != &other)
    {
        this->serialNumber = other.serialNumber;
        this->owner = other.owner;
        this->driver = other.driver;
        this->color = other.color;
        this->numberWheels = other.numberWheels;
        this->numberSeats = other.numberSeats;
        this->cylinderCapacity = other.cylinderCapacity;
        this->type = other.type;
    }
    return *this;
}
