#ifndef __UI_H__
#define __UI_H__

#include <vector>
#include <string>
#include <fstream>
#include <sstream>
#include "Building.hpp"
#include "Container.hpp"
#include "CommercialPremises.hpp"
#include "Department.hpp"
#include "HouseRoom.hpp"

typedef Container<Building> Build;
typedef Container<CommercialPremises> Commercial;
typedef Container<Department> Depa;
typedef Container<HouseRoom> House;

class Ui
{
private:
    Build *buildRef;
    Commercial *CommercialRef;
    Depa *depaRef;
    House *houseRef;

    void mainUI();

    // Menus de propiedades

    void menuBuilding();

    void menuCommercial();

    void menuDepartment();

    void menuHouse();

    // menus

    void addProperties();

    void showProperties();

    void delProperti();

    void findProperti();

    void sortProperties();

    void delAll();

    void writeToFile();

    void readFromFile();

    void enterToContinue();

public:
    Ui(Build &, Commercial &, Depa &, House &);
};

#endif // __UI_H__