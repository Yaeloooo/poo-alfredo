#include "Property.hpp"
#include <iostream>
#include <fstream>

Property::Property()
{
}

Property::Property(const Property &other) : catastralCode(other.catastralCode), domicile(other.domicile), owner(other.owner), landArea(other.landArea), buildArea(other.buildArea)
{
}

std::string Property::getCatastralCode() const
{
    return this->catastralCode;
}

Domicile Property::getDomicile() const
{
    return this->domicile;
}

Owner Property::getOwner() const
{
    return this->owner;
}

std::string Property::getLandArea() const
{
    return this->landArea;
}

std::string Property::getBuildArea() const
{
    return this->buildArea;
}

std::string Property::toString() const
{
    return "| " + catastralCode + " | " + domicile.toString() + " | " + owner.toString() + " | " + landArea + "m2 | " + buildArea + "m2 |\n";
}

void Property::setCatastralCode(const std::string &v)
{
    this->catastralCode = v;
}

void Property::setDomicile(const Domicile &v)
{
    this->domicile = v;
}

void Property::setOwner(const Owner &v)
{
    this->owner = v;
}

void Property::setLandArea(const std::string &v)
{
    this->landArea = v;
}

void Property::setBuildArea(const std::string &v)
{
    this->buildArea = v;
}

Property &Property::operator=(const Property &other)
{
    if (this != &other)
    {
        this->catastralCode = other.catastralCode;
        this->domicile = other.domicile;
        this->owner = other.owner;
        this->landArea = other.landArea;
        this->buildArea = other.buildArea;
    }
    return *this;
}

std::istream &operator>>(std::istream &is, Property &p)
{
    getline(is, p.catastralCode, '*');
    is >> p.domicile;
    is >> p.owner;
    getline(is, p.landArea, '*');
    getline(is, p.buildArea, '*');

    return is;
}

std::ostream &operator<<(std::ostream &os, const Property &p)
{
    os << p.catastralCode << '*'
       << p.domicile << '*'
       << p.owner << '*'
       << p.landArea << '*'
       << p.buildArea << '*';

    return os;
}
