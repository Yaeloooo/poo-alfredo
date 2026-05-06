#ifndef __PROPERTY_H__
#define __PROPERTY_H__

#include <string>
#include "Domicile.hpp"
#include "Owner.hpp"

class Property
{
protected:
    std::string catastralCode;
    Domicile domicile;
    Owner owner;
    std::string landArea;
    std::string buildArea;

public:
    Property();
    Property(const Property &);

    std::string getCatastralCode() const;
    Domicile getDomicile() const;
    Owner getOwner() const;
    std::string getLandArea() const;
    std::string getBuildArea() const;

    std::string toString() const;

    void setCatastralCode(const std::string &);
    void setDomicile(const Domicile &);
    void setOwner(const Owner &);
    void setLandArea(const std::string &);
    void setBuildArea(const std::string &);

    Property &operator=(const Property &);

    friend std::ostream &operator<<(std::ostream &, const Property &);
    friend std::istream &operator>>(std::istream &, Property &);
};

#endif // __PROPERTY_H__