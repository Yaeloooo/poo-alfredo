#ifndef __MOTORCYCLE_H__
#define __MOTORCYCLE_H__

#include "vehicle.hpp"

class Motorcycle : public Vehicle
{
private:
    int cylinderCapacity;
    std::string type;

public:
    Motorcycle();
    Motorcycle(int cylinderCapacity, std::string type);
    Motorcycle(const Motorcycle &);

    void setCylinderCapacity(const int &);
    void setType(const std::string &);

    std::string toString() const;

    int getCylinderCapacity() const;
    std::string getType() const;

    Motorcycle &operator=(const Motorcycle &);
};

#endif // __MOTORCYCLE_H__