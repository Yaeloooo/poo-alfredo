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
    vector<T> record;

public:
    Container();

    Container(const Container<T> &);

    Container<T> &operator=(const Container<T> &);

    void add(const T &);

    void ad(const Container<T> &);

    void del(const T &);

    void clear();

    void sort();

    T find(int &);

    bool isThere(const T &) const;

    std::string toString();

    int getCount() const;

    void writeToDisk(const std::string &);

    void readFromDisk(const std::string &);

    Container<T> operator+(const Container<T> &);
    Container<T> operator+(const T &);

    Container<T> &operator+=(const Container<T> &);
    Container<T> &operator+=(const T &);

    template <class X>
    friend std::istream &operator>>(std::istream &, Container<X> &);

    template <class X>
    friend std::ostream &operator<<(std::ostream &, const Container<X> &);
};
template <class T>
Container<T>::Container() {}

template <class T>
Container<T>::Container(const Container<T> &other) : record(other.record) {}

template <class T>
Container<T> &Container<T>::operator=(const Container<T> &other)
{
    if (this != &other)
    {

        this->record = other.record;
    }
    return *this;
}

template <class T>
void Container<T>::add(const T &r)
{

    this->record.push_back(r);
}

// template<class T>
// void Container<T>::add(const T& b)
// {
//     this->book.push_back(b);
// }

template <class T>
void Container<T>::del(const T &r)
{
    if (!this->isThere(r))
    {
        return;
    }
    this->record.erase(std::find(this->record.begin(), this->record.end(), r));
}

template <class T>
void Container<T>::clear()
{
    this->record.clear();
}

template <class T>
void Container<T>::sort()
{
    std::sort(this->record.begin(), this->record.end());
}

template <class T>
T Container<T>::find(int &code)
{
    for (T r : this->record)
    {
        if (r.getCode() == code)
        {
            return r;
        }
    }
    return T();
}

template <class T>
bool Container<T>::isThere(const T &r) const
{
    return (std::find(this->record.begin(), this->record.end(), r) != this->record.end());
}

template <class T>
std::string Container<T>::toString()
{
    string result;

    for (T r : this->record)
    {
        result += r.toString() + "\n";
    }

    return result;
}

template <class T>
int Container<T>::getCount() const
{
    return this->record.size();
}

template <class T>
void Container<T>::writeToDisk(const std::string &)
{
    string myStr;
    system("cls");

    cout << "Escribiendo...";
    cout << "Nobmre del archivo: ";
    getline(cin >> ws, myStr);

    ofstream myFile(myStr, ios_base::trunc);

    if (myFile.is_open())
    {
        myFile << *this;
        myFile.close();
        cout << "Registro guardado en el libro..." << endl;
    }
    else
    {
        cout << "error al guardar..." << endl;
    }
}

template <class T>
void Container<T>::readFromDisk(const std::string &)
{
    string myStr;
    system("cls");

    cout << "leyendo del disco..." << endl
         << endl;
    cout << "Nombre del archivo: " << endl;
    getline(cin >> ws, myStr);

    ifstream myFile(myStr);

    if (myFile.is_open())
    {

        myFile >> *this;

        myFile.close();

        cout << "Grupo leido correctamente";
    }
    else
    {
        cout << "nose pudo leer el arhiov";
    }

    cout << endl
         << endl;
}

template <class T>
Container<T> &Container<T>::operator+=(const Container<T> &other)
{

    this->add(other);
    return *this;
}

template <class T>
Container<T> &Container<T>::operator+=(const T &other)
{
    Container otherBook(*this);

    otherBook += other;

    return otherBook;
}

template <class T>
Container<T> Container<T>::operator+(const T &other)
{
    Container otherBook(*this);

    otherBook += other;

    return otherBook;
}

template <class T>
Container<T> Container<T>::operator+(const Container<T> &other)
{
    Container otherBook(*this);

    otherBook += other;

    return otherBook;
}

template <class X>
std::ostream &operator<<(std::ostream &os, const Container<X> &b)
{
    for (X r : b.record)
    {

        os << r << '#';
    }

    return os;
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

            c.record.push_back(myT);
        }
    }

    return is;
}

#endif // __CONTAINER_H__