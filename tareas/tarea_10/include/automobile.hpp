#ifndef __AUTOMOBILE_H__
#define __AUTOMOBILE_H__

#include "vehicle.hpp"

class Automobile : public Vehicle
{
private:
    int numberCylinders;
    int numberDoors;
    /* data */
public:
    Automobile();
    Automobile(int numberCylinders, int numberDoors);
    Automobile(const Automobile &);

    void setNumberCylinders(const int &);
    void setNumberDoors(const int &);

    std::string toString() const;

    int getNumberCylinders() const;
    int getNumberDoors() const;

    Automobile &operator=(const Automobile &);
};

#endif // __AUTOMOBIL_H__