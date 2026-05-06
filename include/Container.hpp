#ifndef __CONTAINER_H__
#define __CONTAINER_H__

#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <algorithm>
#include <fstream>

using namespace std;

template <class T>
class Container
{
private:
    vector<T> properties;
    /* data */
public:
    Container(/* args */);
    Container(const Container<T> &);

    Container<T> &operator=(const Container<T> &);

    void add(const T &);
    void del(const T &);
    void clear();
    void sort();

    T find(std::string &);

    bool isThere(const T &) const;

    std::string toString();

    int getCount() const;

    Container<T> operator+(const Container<T> &);
    Container<T> operator+(const T &);

    Container<T> operator+=(const Container<T> &);
    Container<T> operator+=(const T &);

    template <class X>
    friend std::istream &operator>>(std::istream &, Container<X> &);

    template <class X>
    friend std::ostream &operator<<(std::ostream &, Container<X> &);
};

template <class T>
Container<T>::Container(/* args */)
{
}

template <class T>
Container<T>::Container(const Container<T> &other) : properties(other.properties)
{
}

template <class T>
Container<T> &Container<T>::operator=(const Container<T> &other)
{
    if (this != &other)
    {
        this->properties = other.properties;
    }
    return *this;
}

template <class T>
void Container<T>::add(const T &p)
{
    this->properties.push_back(p);
}

template <class T>
void Container<T>::del(const T &p)
{
    if (!this->isThere(p))
    {
        return;
    }
    this->properties.erase(std::find(this->properties.begin(), this->properties.end(), p));
}

template <class T>
void Container<T>::clear()
{
    this->properties.clear();
}

template <class T>
void Container<T>::sort()
{
    std::sort(this->properties.begin(), this->properties.end());
}

template <class T>
T Container<T>::find(std::string &code)
{
    for (T p : this->properties)
    {
        if (p.getCatastralCode() == code)
        {
            return p;
        }
    }
    return T();
}

template <class T>
bool Container<T>::isThere(const T &p) const
{
    return (std::find(this->properties.begin(), this->properties.end(), p) != this->properties.end());
}

template <class T>
std::string Container<T>::toString()
{
    string result;

    for (size_t i = 0; i < this->properties.size(); ++i)
    {
        result += this->properties[i].toString();
        if (i + 1 < this->properties.size())
        {
            result += string(45, '-') + "\n";
        }
    }
    return result;
}

template <class T>
int Container<T>::getCount() const
{
    return this->properties.size();
}






template <class T>
Container<T> Container<T>::operator+=(const T &other)
{
    Container otherRegister(*this);
    otherRegister += other;
    return otherRegister;
}

template <class T>
Container<T> Container<T>::operator+=(const Container<T> &other)
{

    this->add(other);
    return *this;
}

template <class T>
Container<T> Container<T>::operator+(const T &other)
{
    Container otherRegister(*this);
    otherRegister += other;
    return otherRegister;
}

template <class T>
Container<T> Container<T>::operator+(const Container<T> &other)
{
    Container otherRegister(*this);
    otherRegister += other;
    return otherRegister;
}

template <class X>
std::istream &operator>>(std::istream &is, Container<X> &c)
{
    string myStr;
    X myT;

    while (!is.eof())
    {
        getline(is, myStr, '#');

        if (!myStr.empty())
        {
            stringstream mySStr(myStr);
            mySStr >> myT;

            c.properties.push_back(myT);
        }
    }

    return is;
}

template <class X>
std::ostream &operator<<(std::ostream &os, Container<X> &c)
{

    for (X prop : c.properties)
    {
        os << prop << '#';
    }
    return os;
}

#endif // __CONTAINER_H__