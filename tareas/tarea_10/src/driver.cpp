#include "driver.hpp"
#include "person.hpp"

Driver::Driver() {}

Driver::Driver(std::string l) : license(l) {}

Driver::Driver(const Driver &other) : license(other.license)
{
}

void Driver::setLicense(const std::string &v)
{
    this->license = v;
}

std::string Driver::toString() const
{
    return Person::toString() + "Licencia: " + license + "\n";
}

std::string Driver::getLicense() const
{
    return this->license;
}

Driver &Driver::operator=(const Driver &other)
{

    if (this != &other)
    {
        this->name = other.name;
        this->curp = other.curp;
        this->license = other.license;
    }
    return *this;
}
