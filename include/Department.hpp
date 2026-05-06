#ifndef __DEPARTMENT_H__
#define __DEPARTMENT_H__

#include "Property.hpp"

class Department : public Property
{
private:
    std::string insideNumber;
    /* data */
public:
    Department(/* args */);
    Department(std::string insideNumber);
    Department(const Department &);

    std::string getInsideNumber() const;

    std::string toString() const;

    void setInsideNumber(const std::string &);

    Department &operator=(const Department &);

    bool operator==(const Department &) const;
    bool operator<(const Department &) const;

    friend std::ostream &operator<<(std::ostream &, const Department &);
    friend std::istream &operator>>(std::istream &, Department &);
};

#endif // __DEPARTMENT_H__