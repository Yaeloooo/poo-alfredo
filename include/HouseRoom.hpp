#ifndef __HOUSEROOM_H__
#define __HOUSEROOM_H__

#include "Property.hpp"

class HouseRoom : public Property
{
private:
    std::string numberRooms;

public:
    HouseRoom();
    HouseRoom(std::string numberRooms);
    HouseRoom(const HouseRoom &);

    std::string getNumberRooms() const;

    std::string toString() const;

    void setNumberRooms(const std::string &);

    HouseRoom &operator=(const HouseRoom &);

    bool operator==(const HouseRoom &) const;
    bool operator<(const HouseRoom &) const;

    friend std::ostream &operator<<(std::ostream &, const HouseRoom &);
    friend std::istream &operator>>(std::istream &, HouseRoom &);
};

#endif // __HOUSEROOM_H__