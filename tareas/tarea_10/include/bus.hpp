#ifndef __BUS_H__
#define __BUS_H__

#include "vehicle.hpp"

class Bus : public Vehicle
{
private:
public:
    Bus();
    Bus(const Bus &);

    std::string toString() const;

    Bus &operator=(const Bus &);
};

#endif // __BUS_H__