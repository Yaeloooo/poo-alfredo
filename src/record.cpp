#include "record.hpp"

using namespace std;

Record::Record()
{
}

Record::Record(const Record &other) : code(other.code), patient(other.patient), bills(other.bills), totalBill(other.totalBill), entryDate(other.entryDate), depurateDate(other.depurateDate)
{
}

Record &Record::operator=(const Record &other)
{

    if (this != &other)
    {

        this->code = other.code;
        this->patient = other.patient;
        this->bills = other.bills;
        this->totalBill = other.totalBill;
        this->entryDate = other.entryDate;
        this->depurateDate = other.depurateDate;
    }
    return *this;
}

void Record::setCode(const int &v)
{
    this->code = v;
}

void Record::setPatient(const Patient &v)
{
    this->patient = v;
}

void Record::setBills(const float &v)
{
    this->bills = v;
}

void Record::setTotalBill(const float &v)
{
    this->totalBill = v;
}

void Record::setEntryDate(const Date &v)
{
    this->entryDate = v;
}

void Record::setDepurateDate(const Date &v)
{
    this->depurateDate = v;
}

int Record::getCode() const
{
    return this->code;
}

Patient Record::getPatient() const
{
    return this->patient;
}

float Record::getBills() const
{
    return this->bills;
}

float Record::getTotalBill() const
{
    return this->totalBill;
}

Date Record::getEntryDate() const
{
    return this->entryDate;
}

Date Record::getDepurateDate() const
{
    return this->depurateDate;
}

std::string Record::toString() const
{
    return "Codigo: " + to_string(code) + "\n" +
           "=== Paciente === " + patient.toString() +
           "Gastos: " + to_string(bills) + "\n" +
           "Factura: " + to_string(totalBill) + "\n" +
           "Fecha Entrada: " + entryDate.toString() + "\n" +
           "Fecha de Salida: " + depurateDate.toString() + "\n";
}

bool Record::operator==(const Record &other) const
{
    return this->code == other.code;
}

bool Record::operator<(const Record &other) const
{
    return this->code < other.code;
}

std::istream &operator>>(std::istream &is, Record &r)
{
    std::string tmp;

    getline(is, tmp, '*');
    r.code = stoi(tmp); // 1
    is >> r.patient;    // consume: nss*name*bloodType*
    getline(is, tmp, '*');
    r.bills = stof(tmp);
    getline(is, tmp, '*');
    r.totalBill = stof(tmp);
    is >> r.entryDate;    // consume: dia*mes*anio*
    is >> r.depurateDate; // consume: dia*mes*anio  (sin * final)

    return is;
}

std::ostream &operator<<(std::ostream &os, const Record r)
{
    os << r.code << '*'
       << r.patient << '*' // nss*name*bloodType*
       << r.bills << '*'
       << r.totalBill << '*'
       << r.entryDate << '*' // dia*mes*anio*
       << r.depurateDate;    // dia*mes*anio  (sin * al final, el # lo pone Container)
    return os;
}
