#include "ui.hpp"
#include <string>
#include <iostream>
#include "vehicle.hpp"

using namespace std;

Ui::Ui()
{
    this->menu();
}

void Ui::menu()
{
    int op;

    do
    {
        cout << "";
        cout << "=== Selecciona Unidad ===\n";
        cout << "1) Automobil\n";
        cout << "2) Motocleta\n";
        cout << "3) Autobus\n";
        cout << "4) Yate\n";
        cout << "5) Mostrar\n";
        cout << "6) Salir\n";
        cin >> op;

        switch (op)
        {
        case 1:
            addCar();
            break;

        case 2:
            addMotorcycle();
            break;

        case 3:
            addBus();
            break;

        case 4:
            addYate();
            break;

        case 5:
            show();
            break;

        case 6:
            break;

        default:
            break;
        }

    } while (op != 6);
}

void Ui::addCar()
{
    system("cls");
    string cadena;
    int dato;

    Name nameOwner;
    Name nameDriver;
    Owner owner;
    Driver driver;
    Automobile car;

    cout << "";
    cout << "=== Registrar Automobil ===\n\n";
    cout << "Ingresa numero de serie: ";
    getline(cin >> ws, cadena);
    car.setSerialNumber(cadena);

    cout << "=== Propietario ===\n\n";

    cout << "Ingresa Nombre: ";
    getline(cin >> ws, cadena);
    nameOwner.setFirst(cadena);

    cout << "Ingresa Apellido: ";
    getline(cin >> ws, cadena);
    nameOwner.setLast(cadena);

    owner.setName(nameOwner);

    cout << "Ingresa Curp: ";
    getline(cin >> ws, cadena);
    owner.setCurp(cadena);

    cout << "Ingresa Rfc: ";
    getline(cin >> ws, cadena);
    owner.setRfc(cadena);

    car.setOwner(owner);

    cout << "=== Conductor ===\n\n";

    cout << "Ingresa Nombre: ";
    getline(cin >> ws, cadena);
    nameDriver.setFirst(cadena);

    cout << "Ingresa Apellido: ";
    getline(cin >> ws, cadena);
    nameDriver.setLast(cadena);

    driver.setName(nameDriver);

    cout << "Ingresa Curp: ";
    getline(cin >> ws, cadena);
    driver.setCurp(cadena);

    cout << "Ingresa Licencia: ";
    getline(cin >> ws, cadena);
    driver.setLicense(cadena);

    car.setDriver(driver);

    cout << "=== Caracteristicas ===\n\n";

    cout << "Color: ";
    getline(cin >> ws, cadena);
    car.setColor(cadena);

    cout << "Numero de asientos: ";
    cin >> dato;
    car.setNumberSeats(dato);

    cout << "Numero de Ruedas: ";
    cin >> dato;
    car.setNumberWheels(dato);

    cout << "Numero de cilindros: ";
    cin >> dato;
    car.setNumberCylinders(dato);

    cout << "Numero de Puertas: ";
    cin >> dato;
    car.setNumberDoors(dato);

    this->car = car;
}

void Ui::addMotorcycle()
{

    system("cls");
    string cadena;
    int dato;

    Name nameOwner;
    Name nameDriver;
    Owner owner;
    Driver driver;
    Motorcycle motorcycle;

    cout << "";
    cout << "=== Registrar Motocicleta ===\n\n";
    cout << "Ingresa numero de serie: ";
    getline(cin >> ws, cadena);
    motorcycle.setSerialNumber(cadena);

    cout << "=== Propietario ===\n\n";

    cout << "Ingresa Nombre: ";
    getline(cin >> ws, cadena);
    nameOwner.setFirst(cadena);

    cout << "Ingresa Apellido: ";
    getline(cin >> ws, cadena);
    nameOwner.setLast(cadena);

    owner.setName(nameOwner);

    cout << "Ingresa Curp: ";
    getline(cin >> ws, cadena);
    owner.setCurp(cadena);

    cout << "Ingresa Rfc: ";
    getline(cin >> ws, cadena);
    owner.setRfc(cadena);

    motorcycle.setOwner(owner);

    cout << "=== Conductor ===\n\n";

    cout << "Ingresa Nombre: ";
    getline(cin >> ws, cadena);
    nameDriver.setFirst(cadena);

    cout << "Ingresa Apellido: ";
    getline(cin >> ws, cadena);
    nameDriver.setLast(cadena);

    driver.setName(nameDriver);

    cout << "Ingresa Curp: ";
    getline(cin >> ws, cadena);
    driver.setCurp(cadena);

    cout << "Ingresa Licencia: ";
    getline(cin >> ws, cadena);
    driver.setLicense(cadena);

    motorcycle.setDriver(driver);

    cout << "=== Caracteristicas ===\n\n";

    cout << "Color: ";
    getline(cin >> ws, cadena);
    motorcycle.setColor(cadena);

    cout << "Numero de asientos: ";
    cin >> dato;
    motorcycle.setNumberSeats(dato);

    cout << "Numero de Ruedas: ";
    cin >> dato;
    motorcycle.setNumberWheels(dato);

    cout << "Cilindraje: ";
    cin >> dato;
    motorcycle.setCylinderCapacity(dato);

    cout << "Tipo: ";
    getline(cin >> ws, cadena);
    motorcycle.setType(cadena);

    this->motorcycle = motorcycle;
}

void Ui::addBus()
{
    system("cls");
    string cadena;
    int dato;

    Name nameOwner;
    Name nameDriver;
    Owner owner;
    Driver driver;
    Bus bus;

    cout << "";
    cout << "=== Registrar Autobus ===\n\n";
    cout << "Ingresa numero de serie: ";
    getline(cin >> ws, cadena);
    bus.setSerialNumber(cadena);

    cout << "=== Propietario ===\n\n";

    cout << "Ingresa Nombre: ";
    getline(cin >> ws, cadena);
    nameOwner.setFirst(cadena);

    cout << "Ingresa Apellido: ";
    getline(cin >> ws, cadena);
    nameOwner.setLast(cadena);

    owner.setName(nameOwner);

    cout << "Ingresa Curp: ";
    getline(cin >> ws, cadena);
    owner.setCurp(cadena);

    cout << "Ingresa Rfc: ";
    getline(cin >> ws, cadena);
    owner.setRfc(cadena);

    bus.setOwner(owner);

    cout << "=== Conductor ===\n\n";

    cout << "Ingresa Nombre: ";
    getline(cin >> ws, cadena);
    nameDriver.setFirst(cadena);

    cout << "Ingresa Apellido: ";
    getline(cin >> ws, cadena);
    nameDriver.setLast(cadena);

    driver.setName(nameDriver);

    cout << "Ingresa Curp: ";
    getline(cin >> ws, cadena);
    driver.setCurp(cadena);

    cout << "Ingresa Licencia: ";
    getline(cin >> ws, cadena);
    driver.setLicense(cadena);

    bus.setDriver(driver);

    cout << "=== Caracteristicas ===\n\n";

    cout << "Color: ";
    getline(cin >> ws, cadena);
    bus.setColor(cadena);

    cout << "Numero de Ruedas: ";
    cin >> dato;
    bus.setNumberWheels(dato);

    cout << "Numero de asientos: ";
    cin >> dato;
    bus.setNumberSeats(dato);

    this->bus = bus;
}

void Ui::addYate()
{
    system("cls");
    string cadena;
    int dato;

    Name nameOwner;
    Name nameDriver;
    Owner owner;
    Driver driver;
    Yate yate;

    cout << "";
    cout << "=== Registrar Yate ===\n\n";
    cout << "Ingresa numero de serie: ";
    getline(cin >> ws, cadena);
    yate.setSerialNumber(cadena);

    cout << "=== Propietario ===\n\n";

    cout << "Ingresa Nombre: ";
    getline(cin >> ws, cadena);
    nameOwner.setFirst(cadena);

    cout << "Ingresa Apellido: ";
    getline(cin >> ws, cadena);
    nameOwner.setLast(cadena);

    owner.setName(nameOwner);

    cout << "Ingresa Curp: ";
    getline(cin >> ws, cadena);
    owner.setCurp(cadena);

    cout << "Ingresa Rfc: ";
    getline(cin >> ws, cadena);
    owner.setRfc(cadena);

    yate.setOwner(owner);

    cout << "=== Conductor ===\n\n";

    cout << "Ingresa Nombre: ";
    getline(cin >> ws, cadena);
    nameDriver.setFirst(cadena);

    cout << "Ingresa Apellido: ";
    getline(cin >> ws, cadena);
    nameDriver.setLast(cadena);

    driver.setName(nameDriver);

    cout << "Ingresa Curp: ";
    getline(cin >> ws, cadena);
    driver.setCurp(cadena);

    cout << "Ingresa Licencia: ";
    getline(cin >> ws, cadena);
    driver.setLicense(cadena);

    yate.setDriver(driver);

    cout << "=== Caracteristicas ===\n\n";

    cout << "Color: ";
    getline(cin >> ws, cadena);
    yate.setColor(cadena);

    cout << "Numero de asientos: ";
    cin >> dato;
    yate.setNumberSeats(dato);

    cout << "Numero de Ruedas: ";
    cin >> dato;
    yate.setNumberWheels(dato);

    cout << "Eslora: ";
    cin >> dato;
    yate.setLength(dato);

    this->yate = yate;
}

void Ui::show()
{
    system("cls");

    cout << "=== Vehiculos ===\n";
    cout << this->toString() << endl
         << endl;

    cin.get();
}

std::string Ui::toString() const
{
    return "=== Automobil ===\n" + car.toString() + "=== Motocicleta ===\n" + motorcycle.toString() + "=== Autobus ===\n" + bus.toString() + "=== Yate ===\n" + yate.toString();
}
