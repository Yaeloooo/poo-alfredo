#include <iostream>
#include "ui.hpp"
#include "date.hpp"
#include "patient.hpp"

int main(){
    UI ui;
    ui.readFile();
    ui.menu();
}