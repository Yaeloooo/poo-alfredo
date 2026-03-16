#ifndef __RECORD_H__
#define __RECORD_H__
#include "patient.hpp"

class Record
{
private:

    int code;
    Patient patient;
    float bills;
    float totalBill;
    Date entryDate;
    Date depurateDate;


public:
    Record();
    Record(const Record&other);
    Record &operator=(const Record &other);

    void setCode(const int&);
    void setPatient(const Patient&);
    void setBills(const float&);
    void setTotalBill(const float&);
    void setEntryDate(const Date &);
    void setDepurateDate(const Date &);


    int getCode() const;
    Patient getPatient() const;
    float getBills() const;
    float getTotalBill() const;
    Date getEntryDate() const;
    Date getDepurateDate() const;

    std::string toString() const;

    bool operator==(const Record&) const;
    bool operator<(const Record&) const;

    
    friend std::ostream &operator<<(std::ostream&, const Record);
    friend std::istream &operator>>(std::istream&, Record&);

};

#endif // __RECORD_H__