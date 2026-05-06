#include "CommercialPremises.hpp"

CommercialPremises::CommercialPremises(/* args */) : commercialLine("")
{
}

CommercialPremises::CommercialPremises(std::string cL) : commercialLine(cL)
{
}

CommercialPremises::CommercialPremises(const CommercialPremises &other) : Property(other), commercialLine(other.commercialLine)
{
}

std::string CommercialPremises::getCommercialLine() const
{
    return this->commercialLine;
}

std::string CommercialPremises::toString() const
{
    return Property::toString().substr(0, Property::toString().length() - 1) + " LOCAL | " + commercialLine + " |\n";
}

void CommercialPremises::setCommercialLine(const std::string &v)
{
    this->commercialLine = v;
}

CommercialPremises &CommercialPremises::operator=(const CommercialPremises &other)
{
    if (this != &other)
    {
        Property::operator=(other);
        this->commercialLine = other.commercialLine;
    }

    return *this;
}

bool CommercialPremises::operator==(const CommercialPremises &other) const
{
    return this->catastralCode == other.catastralCode;
}

bool CommercialPremises::operator<(const CommercialPremises &other) const
{
    return this->catastralCode < other.catastralCode;
}

std::istream &operator>>(std::istream &is, CommercialPremises &c)
{
    std::string tmp;
    is >> static_cast<Property &>(c);
    getline(is, c.commercialLine, '*');

    return is;
}

std::ostream &operator<<(std::ostream &os, const CommercialPremises &c)
{

    os << static_cast<const Property &>(c)
       << c.commercialLine << '*';

    return os;
}
