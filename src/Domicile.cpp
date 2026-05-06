#include "Domicile.hpp"

using namespace std;

Domicile::Domicile(/* args */) : street(""), num(""), CP("")
{
}

Domicile::Domicile(std::string c, std::string n, std::string p) : street(c), num(n), CP(p)
{
}

Domicile::Domicile(const Domicile &other) : street(other.street), num(other.num), CP(other.CP)
{
}

std::string Domicile::getStreet() const
{
    return this->street;
}

std::string Domicile::getNum() const
{
    return this->num;
}

std::string Domicile::getCP() const
{
    return this->CP;
}

std::string Domicile::toString() const
{
    return street + ", " + num + ", CP: " + CP;
}

void Domicile::setStreet(const std::string &v)
{
    this->street = v;
}

void Domicile::setNum(const std::string &v)
{
    this->num = v;
}

void Domicile::setCP(const std::string &v)
{
    this->CP = v;
}

Domicile &Domicile::operator=(const Domicile &other)
{
    if (this != &other)
    {
        this->street = other.street;
        this->num = other.num;
        this->CP = other.CP;
    }

    return *this;
}

std::istream &operator>>(std::istream &is, Domicile &d)
{
    string tmp;

    getline(is, d.street, '*');
    getline(is, d.num, '*');
    getline(is, d.CP, '*');

    return is;
}

std::ostream &operator<<(std::ostream &os, const Domicile &d)
{
    os << d.street << '*'
       << d.num << '*'
       << d.CP;

    return os;
}
