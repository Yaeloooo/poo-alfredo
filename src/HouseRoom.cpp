#include "HouseRoom.hpp"

HouseRoom::HouseRoom(/* args */) : numberRooms("")
{
}

HouseRoom::HouseRoom(std::string n) : numberRooms(n)
{
}

HouseRoom::HouseRoom(const HouseRoom &other) : Property(other), numberRooms(other.numberRooms)
{
}

std::string HouseRoom::getNumberRooms() const
{
    return this->numberRooms;
}

std::string HouseRoom::toString() const
{
    return Property::toString().substr(0, Property::toString().length() - 1) + " CASA | " + numberRooms + " hab |\n";
}

void HouseRoom::setNumberRooms(const std::string &v)
{
    this->numberRooms = v;
}

HouseRoom &HouseRoom::operator=(const HouseRoom &other)
{
    if (this != &other)
    {
        Property::operator=(other);
        this->numberRooms = other.numberRooms;
    }

    return *this;
}

bool HouseRoom::operator==(const HouseRoom &other) const
{
    return this->catastralCode == other.catastralCode;
}

bool HouseRoom::operator<(const HouseRoom &other) const
{
    return this->catastralCode < other.catastralCode;
}

std::istream &operator>>(std::istream &is, HouseRoom &h)
{
    std::string tmp;
    is >> static_cast<Property &>(h);
    getline(is, h.numberRooms, '*');

    return is;
}

std::ostream &operator<<(std::ostream &os, const HouseRoom &h)
{
    os << static_cast<const Property &>(h)
       << h.numberRooms << '*';

    return os;
}
