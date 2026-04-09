#include "name.hpp"

Name::Name() : first(""), last("") {}

Name::Name(std::string f, std::string l) : first(f), last(l) {}

Name::Name(const Name &other) : first(other.first), last(other.last) {}

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
    return "Nombre: " + first + "\nApellido: " + last + "\n";
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
