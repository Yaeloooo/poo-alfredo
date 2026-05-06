#ifndef __BUILDING_H__
#define __BUILDING_H__

#include "Property.hpp"

class Building : public Property
{
private:
    std::string numbersOfFloors;

public:
    Building(/* args */);
    Building(std::string numbersOfFloors);
    Building(const Building &);

    std::string getNumberOfFloors() const;

    std::string toString() const;

    void setNumberOfFloors(const std::string &);

    Building &operator=(const Building &);

    bool operator==(const Building &) const;
    bool operator<(const Building &) const;

    friend std::ostream &operator<<(std::ostream &, const Building &);
    friend std::istream &operator>>(std::istream &, Building &);
};

#endif // __BUILDING_H__