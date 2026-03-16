#include "date.hpp"
using namespace std;

Date::Date() : dia(1), mes(1), anio(2005)
{
}

Date::Date(int d, int m, int a) : dia(d), mes(m), anio(a)
{
}

Date::Date(const Date &other) : dia(other.dia), mes(other.mes), anio(other.anio)
{
}

Date &Date::operator=(const Date &other)
{

    if (this != &other)
    {
        this->dia = other.dia;
        this->mes = other.mes;
        this->anio = other.anio;
    }

    return *this;
}

void Date::setDia(const int &v)
{
    this->dia = v;
}

void Date::setMes(const int &v)
{
    this->mes = v;
}

void Date::setAnio(const int &v)
{
    this->anio = v;
}

std::string Date::toString() const
{
    return to_string(dia) + "/" + to_string(mes) + "/" + to_string(anio);
}

int Date::getDia() const
{
    return this->dia;
}

int Date::getMes() const
{
    return this->mes;
}

int Date::getAnio() const
{
    return this->anio;
}

std::ostream &operator<<(std::ostream &os, const Date &n)
{

    os << n.dia << '*' << n.mes << '*' << n.anio;

    return os;
}

std::istream &operator>>(std::istream &is, Date &n)
{

    char sep;

    is >> n.dia >> sep >> n.mes >> sep >> n.anio;

    return is;
}
