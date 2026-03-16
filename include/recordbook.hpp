#ifndef __RECORDBOOK_H__
#define __RECORDBOOK_H__
#include "record.hpp"
#include <vector>


class Book
{
private:

    std::vector<Record> record;
    std::vector<Book> book;

   
public:

    Book();

    Book(const Book&);

    void add(const Record&);

    void add(const Book&);

    void del(const Record&);

    void del(const std::string&);

    void clear();
    
    void sort();

   
    bool isThere(const Record&) const;

    bool isThere(const std::string&) const;

    std::string toString();

    int getCount() const;

    void writeToDisk(const std::string&);

    void readFromDisk(const std::string&);

     Book& operator = (const Book&);
     Book operator + (const Book&);
     Book operator + (const Record&);
     Book& operator += (const Book&);
     Book& operator += (const Record&);

    friend std::istream& operator >> (std::istream&, Book&);

    friend std::ostream& operator << (std::ostream&, const Book&);


};

#endif // __RECORDBOOK_H__