#include "patient.hpp"
#include "date.hpp"
#include <iostream>
using namespace std;

Patient::Patient()
{
}

Patient::Patient(const Patient &otra) : nss(otra.nss), name(otra.name), bloodType(otra.bloodType), entryDate(otra.entryDate), depurateDate(otra.depurateDate)
{
}

Patient &Patient::operator=(const Patient &otra)
{
    if (this != &otra)
    {
        this->nss = otra.nss;
        this->name = otra.name;
        this->bloodType = otra.bloodType;
        this->entryDate = otra.entryDate;
        this->depurateDate = otra.depurateDate;
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

void Patient::setEntryDate(const Date &v)
{
    this->entryDate = v;
}

void Patient::setDepurateDate(const Date &v)
{
    this->depurateDate = v;
}

std::string Patient::toString() const
{
    return "Nss: " + nss + "\n" + "Name: " + name + "\n" + "Tipo de sangre: " + bloodType + "\n" + "Fecha Entrada: " + entryDate.toString() + "\n" + "Fecha Salida: " + depurateDate.toString() + "\n";
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

Date Patient::getEntryDate() const
{
    return this->entryDate;
}

Date Patient::getDepurateDate() const
{
    return this->depurateDate;
}

ostream &operator<<(ostream &os, const Patient &n)
{
    os << n.nss << '*' << n.name << '*' << n.bloodType << '*' << n.entryDate << '*' << n.depurateDate;

    return os;
}

istream &operator>>(istream &is, Patient &n)
{
    char sep;

    getline(is, n.nss, '*');

    getline(is, n.name, '*');

    getline(is, n.bloodType, '*');

    is >> ws;
    is >> n.entryDate;
    is >> sep;
    is >> n.depurateDate;

    return is;
}