#include "yate.hpp"

using namespace std;

Yate::Yate() : length(100) {}

Yate::Yate(int l) : length(l) {}

Yate::Yate(const Yate &other) : length(other.length) {}

void Yate::setLength(const int &v)
{
    this->length = v;
}

std::string Yate::toString() const
{
    return "\n" + Vehicle::toString() + "Eslora: " + to_string(length) + "\n";
}

int Yate::getLength() const
{
    return this->length;
}

Yate &Yate::operator=(const Yate &other)
{
    if (this != &other)
    {
        this->serialNumber = other.serialNumber;
        this->owner = other.owner;
        this->driver = other.driver;
        this->color = other.color;
        this->numberWheels = other.numberWheels;
        this->numberSeats = other.numberSeats;
        this->length = other.length;
    }
    return *this;
}
