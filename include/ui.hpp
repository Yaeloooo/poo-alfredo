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

    
    Book* bookRef;

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
     UI(Book&);
};

#endif // __UI_H__