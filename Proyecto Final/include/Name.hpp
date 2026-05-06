#ifndef __NAME_H__
#define __NAME_H__

#include <string>
#include <iostream>
#include <fstream>
#include <sstream>

class Name
{
private:
    std::string first;
    std::string last;
    /* data */
public:
    Name(/* args */);
    Name(std::string f, std::string l);
    Name(const Name &);

    std::string getFirst() const;
    std::string getLast() const;

    std::string toString() const;

    void setFirst(const std::string &);
    void setLast(const std::string &);

    Name &operator=(const Name &);

    friend std::ostream &operator<<(std::ostream &, const Name &);
    friend std::istream &operator>>(std::istream &, Name &);
};

#endif // __NAME_H__