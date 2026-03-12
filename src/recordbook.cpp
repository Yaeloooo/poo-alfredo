#include "recordbook.hpp"
#include "record.hpp"

Book::Book(){
    
}

Book::Book(const Book&otra): record(otra.record) {
    
}

Book Book::operator=(const Book&otra)
{
    if(this != &otra){

        this-> record = otra.record;
    }
}

void Book::setRecord(const Record& v){
    
     this->record = v;
}

Record Book::getRecord() const
{
    return this-> record;
}

std::string Book::toString() const
{
    return "=== Registro ===\n" + record.toString();
}
