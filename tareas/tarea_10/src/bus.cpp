#include "bus.hpp"

Bus::Bus()
{
}

std::string Bus::toString() const
{
    return "\n" + Vehicle::toString();
}

Bus &Bus::operator=(const Bus &other)
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
