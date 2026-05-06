#ifndef __OWNER_H__
#define __OWNER_H__

#include <string>
#include "Name.hpp"
#include "Domicile.hpp"

#include <iostream>
#include <fstream>
#include <sstream>

class Owner
{
private:
    std::string curp;
    Name name;

    /* data */
public:
    Owner(/* args */);
    Owner(std::string curp, Name name);
    Owner(const Owner &);

    std::string getCurp() const;
    Name getName() const;

    std::string toString() const;

    void setCurp(const std::string &);
    void setName(const Name &);

    Owner &operator=(const Owner &);

    friend std::ostream &operator<<(std::ostream &, const Owner &);
    friend std::istream &operator>>(std::istream &, Owner &);
};

#endif // __OWNER_H__