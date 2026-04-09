#ifndef __NAME_H__
#define __NAME_H__

#include <string>

class Name
{
private:
    std::string first;
    std::string last;

public:
    Name();
    Name(std::string f, std::string l);
    Name(const Name &);

    std::string getFirst() const;
    std::string getLast() const;

    std::string toString() const;

    void setFirst(const std::string &);
    void setLast(const std::string &);

    Name &operator=(const Name &);
};

#endif // __NAME_H__