#include <iostream>
#include "ui.hpp"
#include "date.hpp"
#include "patient.hpp"

#include "container.hpp"
#include "ui.hpp"
#include "record.hpp"

int main()
{
    Container<Record> myContainer;
    UI myUI(myContainer);
    return 0;
}