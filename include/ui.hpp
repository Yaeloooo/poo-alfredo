#ifndef __UI_H__
#define __UI_H__

#include <vector>
#include <string>
#include "patient.hpp"
#include "date.hpp"
#include "recordbook.hpp"
#include "record.hpp"

class UI
{
private:

    std::vector<Book> record;
    Record record;
    Patient patient;
    Date entryDate;
    Date depurateDate;
    int op;
    int dato;
    std::string cadena;

public:
    void menu();
    void add();
    void show();
    void saveFile();
    void readFile();
};

#endif // __UI_H__