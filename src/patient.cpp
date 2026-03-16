#include "patient.hpp"
#include "date.hpp"
#include <iostream>
using namespace std;

Patient::Patient()
{
}

Patient::Patient(const Patient &other) : nss(other.nss), name(other.name), bloodType(other.bloodType){
}

Patient &Patient::operator=(const Patient &other)
{
    if (this != &other)
    {
        this->nss = other.nss;
        this->name = other.name;
        this->bloodType = other.bloodType;

    }
    return *this;
}

void Patient::setNss(const std::string &v)
{

    this->nss = v;
}

void Patient::setName(const std::string &v)
{
    this->name = v;
}

void Patient::setBloodType(const std::string &v)
{
    this->bloodType = v;
}



std::string Patient::toString() const
{
    return "\nNss: " + nss + "\n" + "Name: " + name + "\n" + "Tipo de sangre: " + bloodType + "\n";
}

std::string Patient::getNss() const
{
    return this->nss;
}

std::string Patient::getName() const
{
    return this->name;
}

std::string Patient::getBloodType() const
{
    return this->bloodType;
}



ostream &operator<<(ostream &os, const Patient &n)
{
    os << n.nss << '*' << n.name << '*' << n.bloodType;

    return os;
}

istream &operator>>(istream &is, Patient &n)
{
   

    getline(is, n.nss, '*');

    getline(is, n.name, '*');

    getline(is, n.bloodType, '*');

    return is;
}