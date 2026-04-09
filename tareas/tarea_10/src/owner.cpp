#include "owner.hpp"

Owner::Owner() : rfc("") {}

Owner::Owner(std::string r) : rfc(r) {}

Owner::Owner(const Owner &other) : rfc(other.rfc) {}

void Owner::setRfc(const std::string &v)
{
    this->rfc = v;
}

std::string Owner::toString() const
{
    return Person::toString() + "Rfc: " + rfc + "\n";
}

std::string Owner::getRfc() const
{
    return this->rfc;
}

Owner &Owner::operator=(const Owner &other)
{
    if (this != &other)
    {
        this->name = other.name;
        this->curp = other.curp;
        this->rfc = other.rfc;
    }
    return *this;
}
