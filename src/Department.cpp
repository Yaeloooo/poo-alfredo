#include "Department.hpp"

Department::Department(/* args */) : insideNumber("")
{
}

Department::Department(std::string i) : insideNumber(i)
{
}

Department::Department(const Department &other) : Property(other), insideNumber(other.insideNumber)
{
}

std::string Department::getInsideNumber() const
{
    return this->insideNumber;
}

std::string Department::toString() const
{
    return Property::toString().substr(0, Property::toString().length() - 1) + " DEPTO | #" + insideNumber + " |\n";
}

void Department::setInsideNumber(const std::string &v)
{
    this->insideNumber = v;
}

Department &Department::operator=(const Department &other)
{
    if (this != &other)
    {
        Property::operator=(other);
        this->insideNumber = other.insideNumber;
    }
    return *this;
}

bool Department::operator==(const Department &other) const
{
    return this->catastralCode == other.catastralCode;
}

bool Department::operator<(const Department &other) const
{
    return this->catastralCode < other.catastralCode;
}

std::istream &operator>>(std::istream &is, Department &d)
{
    std::string tmp;

    is >> static_cast<Property &>(d);
    getline(is, d.insideNumber, '*');

    return is;
}

std::ostream &operator<<(std::ostream &os, const Department &d)
{
    os << static_cast<const Property &>(d)
       << d.insideNumber << '*';

    return os;
}
