#ifndef __PERSONA_H__
#define __PERSONA_H__

#include "name.hpp"
#include <string>

class Person
{
protected:
    Name name;
    std::string curp;

public:
    Person();
    Person(Name name, std::string curp);
    Person(const Person &);

    void setName(const Name &);
    void setCurp(const std::string &);

    std::string toString() const;

    Name getName() const;
    std::string getCurp() const;

    Person &operator=(const Person &);
};

#endif // __PERSONA_H__