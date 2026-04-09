#ifndef __VEHICLE_H__
#define __VEHICLE_H__

#include <string>
#include "owner.hpp"
#include "driver.hpp"

class Vehicle
{
protected:
    std::string serialNumber;
    Owner owner;
    Driver driver;
    std::string color;
    int numberWheels;
    int numberSeats;

public:
    Vehicle();
    Vehicle(const Vehicle &);

    void setSerialNumber(const std::string &);
    void setOwner(const Owner &);
    void setDriver(const Driver &);
    void setColor(const std::string &);
    void setNumberWheels(const int &);
    void setNumberSeats(const int &);

    std::string toString() const;

    std::string getSerialNumber() const;
    Owner getOwner() const;
    Driver getDriver() const;
    std::string getColor() const;
    int getNumberWheels() const;
    int getNumberSeats() const;

    Vehicle &operator=(const Vehicle &);
};

#endif // __VEHICLE_H__