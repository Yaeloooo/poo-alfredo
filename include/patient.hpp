#ifndef __PATIENT_H__
#define __PATIENT_H__

#include <string>
#include <iostream>
#include "date.hpp"

class Patient
{
private:
    std::string nss;
    std::string name;
    std::string bloodType;

public:
    Patient();
    Patient(const Patient &otra);
    Patient &operator=(const Patient &otra);

    void setNss(const std::string &);
    void setName(const std::string &);
    void setBloodType(const std::string &);


    std::string toString() const;

    std::string getNss() const;
    std::string getName() const;
    std::string getBloodType() const;


    friend std::ostream &operator<<(std::ostream &, const Patient &);
    friend std::istream &operator>>(std::istream &, Patient &);
};

#endif // __PACIENTE_H__