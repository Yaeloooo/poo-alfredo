#ifndef __UI_H__
#define __UI_H__

#include <vector>
#include <string>
#include "patient.hpp"
#include "date.hpp"
#include "container.hpp"
#include "record.hpp"


class UI
{
private:

    
    Container<Record>* containerRef;

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
     UI(Container<Record>&);
};

#endif // __UI_H__