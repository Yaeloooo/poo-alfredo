#include <iostream>

#include "Property.hpp"
#include "Building.hpp"
#include "CommercialPremises.hpp"
#include "Department.hpp"
#include "HouseRoom.hpp"
#include "Property.hpp"
#include "Container.hpp"
#include "Ui.hpp"

using namespace std;

int main()
{
    Container<Building> myBuilding;
    Container<CommercialPremises> myCommercial;
    Container<HouseRoom> myHouse;
    Container<Department> myDepartment;

    Ui myInterface(myBuilding, myCommercial, myDepartment, myHouse);
    
    
    return 0;
}

