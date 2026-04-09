#ifndef __YATE_H__
#define __YATE_H__

#include <string>
#include "vehicle.hpp"

class Yate : public Vehicle
{
private:
    int length;

public:
    Yate();
    Yate(int length);
    Yate(const Yate &);

    void setLength(const int &);

    std::string toString() const;

    int getLength() const;

    Yate &operator=(const Yate &);
};

#endif // __YATE_H__