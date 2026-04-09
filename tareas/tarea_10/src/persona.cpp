#include "person.hpp"

Person::Person() {}

Person::Person(Name n, std::string c) : name(n), curp(c) {}

Person::Person(const Person &other) : name(other.name), curp(other.curp) {}

void Person::setName(const Name &v)
{
    this->name = v;
}

void Person::setCurp(const std::string &v)
{
    this->curp = v;
}

std::string Person::toString() const
{
    return "Name: " + name.toString() + "\nCurp: " + curp + "\n";
}

Name Person::getName() const
{
    return this->name;
}

std::string Person::getCurp() const
{
    return this->curp;
}

Person &Person::operator=(const Person &other)
{
    if (this != &other)
    {

        this->name = other.name;
        this->curp = other.curp;
    }

    return *this;
}
