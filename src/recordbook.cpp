#include "recordbook.hpp"
#include "record.hpp"
#include <algorithm>
#include <vector>
#include "patient.hpp"
#include <fstream>
#include <sstream>

using namespace std;

Book::Book() {}

Book::Book(const Book &other) : record(other.record), book(other.book)
{
}

void Book::add(const Record &r)
{

    this->record.push_back(r);
}

void Book::add(const Book &b)
{

    this->book.push_back(b);
}

void Book::del(const Record &r)
{

    if (!this->isThere(r))
    {
        return;
    }
    this->record.erase(std::find(this->record.begin(), this->record.end(), r));
}

void Book::del(const std::string &)
{
}

void Book::clear()
{

    this->record.clear();
}

void Book::sort()
{

    std::sort(this->record.begin(), this->record.end());
}

bool Book::isThere(const Record &r) const
{

    return (std::find(this->record.begin(), this->record.end(), r) != this->record.end());
}

std::string Book::toString()
{

    string result;

    for (Record r : this->record)
    {
        result += r.toString() + "\n";
    }

    return result;
}

int Book::getCount() const {
    return this->record.size();
}

void Book::writeToDisk(const std::string &)
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

std::istream &operator>>(std::istream &is, Book &b)
{
    string myStr;
    Record record;

    while (!is.eof())
    {
        getline(is, myStr, '#');

        if (!myStr.empty())
        {
            stringstream mySStr(myStr);

            mySStr >> record;

            b.record.push_back(record);
        }
    }

    return is;
}

std::ostream &operator<<(std::ostream &os, const Book &b)
{
    for (Record r : b.record){
    
        os << r << '#';
    }

    return os;
}

void Book::readFromDisk(const std::string &){

    string myStr;
    system("cls");

    cout << "leyendo del disco..." << endl << endl;
    cout << "Nombre del archivo: " << endl;
    getline(cin >> ws,myStr);

    ifstream myFile(myStr);

    if (myFile.is_open()){

        myFile >> *this;

        myFile.close();

         cout << "Grupo leido correctamente";
       
    }else{
        cout << "nose pudo leer el arhiov";
    }
    
    cout << endl << endl;

}

 Book &Book::operator=(const Book &other)
{
    if(this != &other){

        this-> record = other.record;
        this-> book = other.book;

    }
    return *this;
 }

 Book &Book::operator+=(const Record &other){


    this->add(other);
    return *this;

 }

 Book &Book::operator+=(const Book &other){

       this->add(other);
        return *this;
 }
 
 Book Book::operator+(const Record &other){

    Book otherBook(*this);
    
    otherBook += other;

    return otherBook;

    
 }
 Book Book::operator+(const Book &other){

    Book otherBook(*this);
    
    otherBook += other;

    return otherBook;
 }
