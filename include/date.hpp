#ifndef __FECHA_H__
#define __FECHA_H__

#include <iostream>
#include <string>

class Date
{
private:
    int dia;
    int mes;
    int anio;
    /* data */
public:
    Date();
    Date(int dia, int mes, int anio);
    Date(const Date &otra);
    Date &operator=(const Date &otra);

    void setDia(const int &);
    void setMes(const int &);
    void setAnio(const int &);

    std::string toString() const;

    int getDia() const;
    int getMes() const;
    int getAnio() const;

    friend std::ostream &operator<<(std::ostream &, const Date &);
    friend std::istream &operator>>(std::istream &, Date &);
};

#endif // __FECHA_H__