#include "Ui.hpp"
#include <vector>
#include <string>
#include <fstream>
#include <sstream>
#include "Container.hpp"

using namespace std;

void Ui::mainUI()
{
    int op = 0;

    do
    {

        cout << "=== Menu Principal ===" << endl
             << endl;

        cout << "1) Anadir Propiedad" << endl;
        cout << "2) Eliminar Propiedad" << endl;
        cout << "3) Buscar Propiedad" << endl;
        cout << "4) Ordenar Propiedades" << endl;
        cout << "5) Limpiar Propiedades" << endl;
        cout << "6) Mostrar Propiedades" << endl;
        cout << "7) Guardar Propiedades" << endl;
        cout << "8) Salir" << endl
             << endl;

        cin >> op;

        switch (op)
        {
        case 1:
            addProperties();
            break;

        case 2:
            delProperti();
            break;

        case 3:
            findProperti();
            break;

        case 4:
            sortProperties();
            break;

        case 5:
            delAll();
            break;

        case 6:
            showProperties();
            break;

        case 7:
            writeToFile();
            break;

        case 8:
            break;

        default:

            break;
        }

    } while (op != 8);
}

void Ui::addProperties()
{
    system("clear");
    int op = 0;

    cout << "=== Selecciona una Propiedad ===" << endl
         << endl;

    cout << "1) Casa" << endl;
    cout << "2) Departamento" << endl;
    cout << "3) Local Comercial" << endl;
    cout << "4) Edificio" << endl;

    cin >> op;

    switch (op)
    {
    case 1:
        menuHouse();
        break;
    case 2:
        menuDepartment();
        break;
    case 3:
        menuCommercial();
        break;
    case 4:
        menuBuilding();
        break;
    default:
        break;
    }
}

/// Menus de propiedades

void Ui::menuBuilding()
{
    system("clear");
    Building building;
    Domicile domicile;
    Owner owner;
    Name name;

    string cadena;

    cout << "=== Edificio ===" << endl
         << endl;
    cout << "Clave Catastral: " << endl;
    getline(cin >> ws, cadena);
    building.setCatastralCode(cadena);

    cout << "=== Direccion ===" << endl;
    cout << "Calle : " << endl;
    getline(cin >> ws, cadena);
    domicile.setStreet(cadena);

    cout << "Numero: " << endl;
    getline(cin >> ws, cadena);
    domicile.setNum(cadena);

    cout << "C.P: " << endl;
    getline(cin >> ws, cadena);
    domicile.setCP(cadena);

    building.setDomicile(domicile);

    cout << "=== Dueno ===" << endl;
    cout << "Curp: " << endl;
    getline(cin >> ws, cadena);
    owner.setCurp(cadena);

    cout << "Nombre: " << endl;
    getline(cin >> ws, cadena);
    name.setFirst(cadena);

    cout << "Apellido: " << endl;
    getline(cin >> ws, cadena);
    name.setLast(cadena);

    owner.setName(name);

    building.setOwner(owner);

    cout << "Superficie de terreno: " << endl;
    getline(cin >> ws, cadena);
    building.setLandArea(cadena);

    cout << "Supericie Construida: " << endl;
    getline(cin >> ws, cadena);
    building.setBuildArea(cadena);

    cout << "Numero de Pisos: " << endl;
    getline(cin >> ws, cadena);
    building.setNumberOfFloors(cadena);

    buildRef->add(building);

    cout << "Propiedad agregada correctamente...\n";
    enterToContinue();
}

void Ui::menuCommercial()
{
    system("clear");
    CommercialPremises store;
    Domicile domicile;
    Owner owner;
    Name name;

    string cadena;

    cout << "=== Local ===" << endl
         << endl;
    cout << "Clave Catastral: " << endl;
    getline(cin >> ws, cadena);
    store.setCatastralCode(cadena);

    cout << "=== Direccion ===" << endl;
    cout << "Calle : " << endl;
    getline(cin >> ws, cadena);
    domicile.setStreet(cadena);

    cout << "Numero: " << endl;
    getline(cin >> ws, cadena);
    domicile.setNum(cadena);

    cout << "C.P: " << endl;
    getline(cin >> ws, cadena);
    domicile.setCP(cadena);

    store.setDomicile(domicile);

    cout << "=== Dueno ===" << endl;
    cout << "Curp: " << endl;
    getline(cin >> ws, cadena);
    owner.setCurp(cadena);

    cout << "Nombre: " << endl;
    getline(cin >> ws, cadena);
    name.setFirst(cadena);

    cout << "Apellido: " << endl;
    getline(cin >> ws, cadena);
    name.setLast(cadena);

    owner.setName(name);

    store.setOwner(owner);

    cout << "Superficie de terreno: " << endl;
    getline(cin >> ws, cadena);
    store.setLandArea(cadena);

    cout << "Supericie Construida: " << endl;
    getline(cin >> ws, cadena);
    store.setBuildArea(cadena);

    cout << "Giro Comercial: " << endl;
    getline(cin >> ws, cadena);
    store.setCommercialLine(cadena);

    CommercialRef->add(store);

    cout << "Propiedad agregada correctamente...\n";
    enterToContinue();
}

void Ui::menuDepartment()
{
    system("clear");
    Department department;
    Domicile domicile;
    Owner owner;
    Name name;

    string cadena;

    cout << "=== Departamento ===" << endl
         << endl;
    cout << "Clave Catastral: " << endl;
    getline(cin >> ws, cadena);
    department.setCatastralCode(cadena);

    cout << "=== Direccion ===" << endl;
    cout << "Calle : " << endl;
    getline(cin >> ws, cadena);
    domicile.setStreet(cadena);

    cout << "Numero: " << endl;
    getline(cin >> ws, cadena);
    domicile.setNum(cadena);

    cout << "C.P: " << endl;
    getline(cin >> ws, cadena);
    domicile.setCP(cadena);

    department.setDomicile(domicile);

    cout << "=== Dueno ===" << endl;
    cout << "Curp: " << endl;
    getline(cin >> ws, cadena);
    owner.setCurp(cadena);

    cout << "Nombre: " << endl;
    getline(cin >> ws, cadena);
    name.setFirst(cadena);

    cout << "Apellido: " << endl;
    getline(cin >> ws, cadena);
    name.setLast(cadena);

    owner.setName(name);

    department.setOwner(owner);

    cout << "Superficie de terreno: " << endl;
    getline(cin >> ws, cadena);
    department.setLandArea(cadena);

    cout << "Supericie Construida: " << endl;
    getline(cin >> ws, cadena);
    department.setBuildArea(cadena);

    cout << "Numero Interior: " << endl;
    getline(cin >> ws, cadena);
    department.setInsideNumber(cadena);

    depaRef->add(department);

    cout << "Propiedad agregada correctamente...\n";
    enterToContinue();
}

void Ui::menuHouse()
{
    system("clear");
    HouseRoom house;
    Domicile domicile;
    Owner owner;
    Name name;

    string cadena;

    cout << "=== Casa ===" << endl
         << endl;
    cout << "Clave Catastral: " << endl;
    getline(cin >> ws, cadena);
    house.setCatastralCode(cadena);

    cout << "=== Direccion ===" << endl;
    cout << "Calle : " << endl;
    getline(cin >> ws, cadena);
    domicile.setStreet(cadena);

    cout << "Numero: " << endl;
    getline(cin >> ws, cadena);
    domicile.setNum(cadena);

    cout << "C.P: " << endl;
    getline(cin >> ws, cadena);
    domicile.setCP(cadena);

    house.setDomicile(domicile);

    cout << "=== Dueno ===" << endl;
    cout << "Curp: " << endl;
    getline(cin >> ws, cadena);
    owner.setCurp(cadena);

    cout << "Nombre: " << endl;
    getline(cin >> ws, cadena);
    name.setFirst(cadena);

    cout << "Apellido: " << endl;
    getline(cin >> ws, cadena);
    name.setLast(cadena);

    owner.setName(name);

    house.setOwner(owner);

    cout << "Superficie de terreno: " << endl;
    getline(cin >> ws, cadena);
    house.setLandArea(cadena);

    cout << "Supericie Construida: " << endl;
    getline(cin >> ws, cadena);
    house.setBuildArea(cadena);

    cout << "Numero Cuartos: " << endl;
    getline(cin >> ws, cadena);
    house.setNumberRooms(cadena);

    houseRef->add(house);

    cout << "Propiedad agregada correctamente...\n";

    enterToContinue();
}

void Ui::showProperties()
{

    system("clear");
    cout << "Mostrando Propiedades..." << endl
         << endl;

    bool anyDisplayed = false;

    if (houseRef->getCount() > 0)
    {
        cout << "=== Casas ===" << endl
             << string(60, '-') << endl;
        cout << houseRef->toString() << endl;
        anyDisplayed = true;
    }

    if (depaRef->getCount() > 0)
    {
        cout << "=== Departamentos ===" << endl
             << string(60, '-') << endl;
        cout << depaRef->toString() << endl;
        anyDisplayed = true;
    }

    if (CommercialRef->getCount() > 0)
    {
        cout << "=== Locales Comerciales ===" << endl
             << string(60, '-') << endl;
        cout << CommercialRef->toString() << endl;
        anyDisplayed = true;
    }

    if (buildRef->getCount() > 0)
    {
        cout << "=== Edificios ===" << endl
             << string(60, '-') << endl;
        cout << buildRef->toString() << endl;
        anyDisplayed = true;
    }

    if (!anyDisplayed)
    {
        cout << "No hay propiedades registradas." << endl;
    }

    cout << "Propiedades mostradas correctamente..." << endl;
    cin.get();
    enterToContinue();
}

void Ui::delProperti()
{
    system("clear");
    string cadena;
    string op;

    CommercialPremises commerial;
    Building building;
    Department department;
    HouseRoom house;

    cout << "Clave catastral: " << endl;
    getline(cin >> ws, cadena);

    cout << "Estas seguro de eliminar la propiedad S/N?" << endl;
    cin >> op;

    if (op != "N")
    {
        commerial.setCatastralCode(cadena);
        building.setCatastralCode(cadena);
        department.setCatastralCode(cadena);
        house.setCatastralCode(cadena);

        CommercialRef->del(commerial);
        buildRef->del(building);
        depaRef->del(department);
        houseRef->del(house);

        cout << "Propiedad eliminada..." << endl;

        enterToContinue();
    }
}

void Ui::findProperti()
{
    system("clear");
    string cadena;
    CommercialPremises commerial;
    Building building;
    Department department;
    HouseRoom house;

    cout << "Clave Catastral: " << endl;
    getline(cin >> ws, cadena);
    commerial.setCatastralCode(cadena);
    building.setCatastralCode(cadena);
    department.setCatastralCode(cadena);
    house.setCatastralCode(cadena);

    if (this->CommercialRef->isThere(commerial))
    {
        CommercialPremises found = CommercialRef->find(cadena);
        cout << found.toString();
    }
    else if (this->buildRef->isThere(building))
    {
        Building found = buildRef->find(cadena);
        cout << found.toString();
    }
    else if (this->depaRef->isThere(department))
    {
        Department found = depaRef->find(cadena);
        cout << found.toString();
    }
    else if (this->houseRef->isThere(house))
    {
        HouseRoom found = houseRef->find(cadena);
        cout << found.toString();
    }
    else
    {
        cout << "\nPropiedad no encontrada";
    }

    enterToContinue();
}

void Ui::sortProperties()
{
    system("clear");

    cout << "Ordenando..." << endl;
    this->houseRef->sort();
    this->depaRef->sort();
    this->CommercialRef->sort();
    this->buildRef->sort();

    cout << "Registro ordenado " << endl;
    enterToContinue();
}

void Ui::delAll()
{
    system("clear");
    string op;

    cout << "Estas seguro de eliminar todos los registros S/N?" << endl;
    cin >> op;

    if (op != "N")
    {
        CommercialRef->clear();
        buildRef->clear();
        depaRef->clear();
        houseRef->clear();

        enterToContinue();
    }
}

void Ui::writeToFile()
{
    system("clear");
    cout << "Escribiendo al disco..." << endl;

    ofstream houseFIle("house.file", ios_base::trunc);
    ofstream depaFile("depa.file", ios_base::trunc);
    ofstream commercialFile("commercial.file", ios_base::trunc);
    ofstream buildFIle("build.file", ios_base::trunc);

    if (houseFIle.is_open())
    {
        houseFIle << *houseRef;
        houseFIle.close();

        if (depaFile.is_open())
        {
            depaFile << *depaRef;
            depaFile.close();

            if (commercialFile.is_open())
            {
                commercialFile << *CommercialRef;
                commercialFile.close();

                if (buildFIle.is_open())
                {
                    buildFIle << *buildRef;
                    buildFIle.close();
                }
            }
        }

        cout << "Propiedades guardadas correctamente" << endl;
        enterToContinue();
    }
    else
    {
        cout << "error" << endl;
    }
}

void Ui::readFromFile()
{

    ifstream house("house.file");
    ifstream depa("depa.file");
    ifstream commercial("commercial.file");
    ifstream building("build.file");

    if (house.is_open())
    {
        house >> *houseRef;
        house.close();
    }
    if (depa.is_open())
    {
        depa >> *depaRef;
        depa.close();
    }
    if (commercial.is_open())
    {
        commercial >> *CommercialRef;
        commercial.close();
    }
    if (building.is_open())
    {
        building >> *buildRef;
        building.close();
    }
}

void Ui::enterToContinue()
{
    cout << "\nPresione [Enter] para continuar...";
    cin.get();
    system("clear");
}

Ui::Ui(Build &b, Commercial &c, Depa &d, House &h)
    : buildRef(&b), CommercialRef(&c), depaRef(&d), houseRef(&h)
{
    readFromFile();
    mainUI();
}
