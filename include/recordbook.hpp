#ifndef __RECORDBOOK_H__
#define __RECORDBOOK_H__
#include "record.hpp"
#include <vector>

class Book
{
private:
    Record record;
    
public:
    Book();
    Book(const Book&otra);
    Book operator=(const Book&otra);

    void setRecord(const Record&);
    Record getRecord() const;

    std::string toString() const;
};






#endif // __RECORDBOOK_H__