#ifndef __CONDUCTOR_H__
#define __CONDUCTOR_H__

#include "person.hpp"

class Driver : public Person
{
private:
    std::string license;

public:
    Driver();
    Driver(std::string license);
    Driver(const Driver &);

    void setLicense(const std::string &);

    std::string toString() const;

    std::string getLicense() const;

    Driver &operator=(const Driver &);
};

#endif // __CONDUCTOR_H__