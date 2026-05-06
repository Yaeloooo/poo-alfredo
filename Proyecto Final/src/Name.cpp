#include "Name.hpp"

Name::Name(/* args */) : first(""), last("")
{
}

Name::Name(std::string f, std::string l) : first(f), last(l)
{
}

Name::Name(const Name &other) : first(other.first), last(other.last)
{
}

std::string Name::getFirst() const
{
    return this->first;
}

std::string Name::getLast() const
{
    return this->last;
}

std::string Name::toString() const
{
    return first + " " + last;
}

void Name::setFirst(const std::string &v)
{
    this->first = v;
}

void Name::setLast(const std::string &v)
{
    this->last = v;
}

Name &Name::operator=(const Name &other)
{

    if (this != &other)
    {
        this->first = other.first;
        this->last = other.last;
    }

    return *this;
}

std::istream &operator>>(std::istream &is, Name &n)
{
    getline(is, n.first, '*');
    getline(is, n.last, '*');

    return is;
}

std::ostream &operator<<(std::ostream &os, const Name &n)
{
    os << n.first << '*'
       << n.last;

    return os;
}
