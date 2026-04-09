#ifndef __PROPIETARIO_H__
#define __PROPIETARIO_H__

#include "person.hpp"

class Owner : public Person
{
private:
    std::string rfc;

public:
    Owner();
    Owner(std::string rfc);
    Owner(const Owner &);

    void setRfc(const std::string &);

    std::string toString() const;

    std::string getRfc() const;

    Owner &operator=(const Owner &);
};

#endif // __PROPIETARIO_H__