#include "Owner.hpp"

Owner::Owner(/* args */) : curp("")
{
}

Owner::Owner(std::string c, Name n) : curp(c), name(n)
{
}

Owner::Owner(const Owner &other) : curp(other.curp), name(other.name)
{
}

std::string Owner::getCurp() const
{
    return this->curp;
}

Name Owner::getName() const
{
    return this->name;
}

std::string Owner::toString() const
{
    return "[" + curp + "] " + name.toString();
}

void Owner::setCurp(const std::string &v)
{
    this->curp = v;
}

void Owner::setName(const Name &v)
{
    this->name = v;
}

Owner &Owner::operator=(const Owner &other)
{
    if (this != &other)
    {
        this->curp = other.curp;
        this->name = other.name;
    }
    return *this;
}

std::istream &operator>>(std::istream &is, Owner &o)
{
    std::string tmp;

    getline(is, o.curp, '*');
    is >> o.name;

    return is;
}

std::ostream &operator<<(std::ostream &os, const Owner &o)
{
    os << o.curp << '*'
       << o.name;

    return os;
}
