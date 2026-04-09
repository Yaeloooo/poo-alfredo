#ifndef __UI_H__
#define __UI_H__

#include "owner.hpp"
#include "driver.hpp"
#include "vehicle.hpp"
#include "automobile.hpp"
#include "motorcycle.hpp"
#include "bus.hpp"
#include "yate.hpp"
#include "name.hpp"
#include <vector>

class Ui
{
private:
    Automobile car;
    Motorcycle motorcycle;
    Bus bus;
    Yate yate;

    void menu();
    void addCar();
    void addMotorcycle();
    void addBus();
    void addYate();
    void show();

public:
    Ui();

    std::string toString() const;
};

#endif // __UI_H__