#ifndef __UI_H__
#define __UI_H__

#include <vector>
#include <string>
#include <fstream>
#include <sstream>
#include "patient.hpp"
#include "date.hpp"
#include "container.hpp"
#include "record.hpp"

typedef Container<Record> Book;

class UI
{
private:
    Book *bookRef;

    void mainUI();

    void addRecord();

    void delRecord();

    void findRecord();

    void sortRecord();

    void delAll();

    void showRecord();

    void writeToFile();

    void readFromFile();

    void enterToContinue();

public:
    UI(Book &);
};

#endif // __UI_H__