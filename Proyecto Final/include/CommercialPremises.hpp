#ifndef __COMMERCIALPREMISES_H__
#define __COMMERCIALPREMISES_H__

#include "Property.hpp"
#include <string>
#include <iostream>
#include <fstream>
#include <sstream>

class CommercialPremises : public Property
{
private:
    std::string commercialLine;

public:
    CommercialPremises(/* args */);
    CommercialPremises(std::string commercialLine);
    CommercialPremises(const CommercialPremises &);

    std::string getCommercialLine() const;

    std::string toString() const;

    void setCommercialLine(const std::string &);

    CommercialPremises &operator=(const CommercialPremises &);

    bool operator==(const CommercialPremises &) const;
    bool operator<(const CommercialPremises &) const;

    friend std::ostream &operator<<(std::ostream &, const CommercialPremises &);
    friend std::istream &operator>>(std::istream &, CommercialPremises &);
};

#endif // __COMMERCIALPREMISES_H__