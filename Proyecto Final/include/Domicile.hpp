#ifndef __DOMICILIO_H__
#define __DOMICILIO_H__

#include <string>
#include <iostream>
#include <fstream>
#include <sstream>

class Domicile
{
private:
    std::string street;
    std::string num;
    std::string CP;
    /* data */
public:
    Domicile(/* args */);
    Domicile(std::string street, std::string num, std::string CP);
    Domicile(const Domicile &);

    std::string getStreet() const;
    std::string getNum() const;
    std::string getCP() const;

    std::string toString() const;

    void setStreet(const std::string &);
    void setNum(const std::string &);
    void setCP(const std::string &);

    Domicile &operator=(const Domicile &);

    friend std::ostream &operator<<(std::ostream &, const Domicile &);
    friend std::istream &operator>>(std::istream &, Domicile &);
};

#endif // __DOMICILIO_H__