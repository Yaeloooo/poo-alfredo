#include "Building.hpp"

Building::Building(/* args */) : numbersOfFloors("")
{
}

Building::Building(std::string n) : numbersOfFloors(n)
{
}

Building::Building(const Building &other) : Property(other), numbersOfFloors(other.numbersOfFloors)
{
}

std::string Building::getNumberOfFloors() const
{
    return this->numbersOfFloors;
}

std::string Building::toString() const
{
    return Property::toString().substr(0, Property::toString().length() - 1) + " EDIF | " + numbersOfFloors + " pisos |\n";
}

void Building::setNumberOfFloors(const std::string &v)
{
    this->numbersOfFloors = v;
}

Building &Building::operator=(const Building &other)
{
    if (this != &other)
    {
        Property::operator=(other);
        this->numbersOfFloors = other.numbersOfFloors;
    }

    return *this;
}

bool Building::operator==(const Building &other) const
{
    return this->catastralCode == other.catastralCode;
}

bool Building::operator<(const Building &other) const
{
    return this->catastralCode < other.catastralCode;
}

std::ostream &operator<<(std::ostream &os, const Building &b)
{
    os << static_cast<const Property &>(b)
       << b.numbersOfFloors << '*';

    return os;
}

std::istream &operator>>(std::istream &is, Building &b)
{
    std::string tmp;

    is >> static_cast<Property &>(b);
    getline(is, b.numbersOfFloors, '*');

    return is;
}
