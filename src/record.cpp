#include "record.hpp"

using namespace std;

Record::Record(){
    
}

Record::Record(const Record &otra): code(otra.code),patient(otra.patient), bills(otra.bills), totalBill(otra.totalBill), entryDate(otra.entryDate), depurateDate(otra.depurateDate) {
    
}

Record& Record::operator=(const Record &otra){

    if(this != &otra){

        this->code = otra.code;
        this->patient = otra.patient;
        this->bills = otra.bills;
        this->totalBill = otra.totalBill;
        this->entryDate = otra.entryDate;
        this->depurateDate = otra.depurateDate;

    }
    return *this;
    
}

void Record::setCode(const int& v){
    this-> code = v;
}



void Record::setPatient(const Patient& v){
    this->patient = v;
}

void Record::setBills(const float& v)
{
    this->bills = v;
}

void Record::setTotalBill(const float& v)
{
    this->totalBill = v;
}

void Record::setEntryDate(const Date & v)
{
    this->entryDate = v;
}

void Record::setDepurateDate(const Date & v)
{
    this->depurateDate = v;
}

int Record::getCode() const{
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
    return this-> totalBill;
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
    return "Codigo: " + to_string(code) + "Paciente: " + patient.toString() + "Gastos: " + to_string(bills) + "Factura: " + to_string(totalBill) + "Fecha Entrada: " + entryDate.toString() + "Fecha de Salida: " + depurateDate.toString() + "\n";
}

