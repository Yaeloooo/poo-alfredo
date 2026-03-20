
#include "ui.hpp"
#include "date.hpp"
#include "patient.hpp"
#include <vector>
#include <iostream>
#include <string>
#include <fstream>
#include "container.hpp"
#include "record.hpp"

using namespace std;



UI::UI(Container<Record> &b) : containerRef(&b)
{
    this->mainUI();
}

void UI::mainUI()
{

    char op;

    do
    {

        system("cls");

        cout << "Menu de Registros" << endl
             << endl;

        cout << "[A]nadir" << endl;
        cout << "[E]liminar" << endl;
        cout << "[B]uscar" << endl;
        cout << "[O]rdenar" << endl;
        cout << "[L]impiar" << endl;
        cout << "[M]ostrar" << endl;
        cout << "e[S]cribir al disco" << endl;
        cout << "Lee[R] del disco" << endl;
        cout << "Sal[I]r" << endl;

        cin >> op;

        op = toupper(op);
        cin.ignore();

        switch (op)
        {
        case 'A':
            this->addRecord();
            break;

        case 'E':
            this->delRecord();
            /* code */
            break;
        case 'B':
            this->findRecord();
            /* code */
            break;
        case 'O':

            this->sortRecord();
            /* code */
            break;
        case 'L':
            this->delAll();
            /* code */
            break;
        case 'M':
            this->showRecord();
            /* code */
            break;
        case 'S':

            this->writeToFile();
            /* code */
            break;
        case 'R':
            this->readFromFile();
            /* code */
            break;
        case 'I':
            cout << "saleindo...";
            this->enterToContinue();
            /* code */
            break;

        default:
            break;
        }

        /* code */
    } while (op != 'I');
}

void UI::addRecord()
{
    int cont = 0;
    Record record;
    Patient patient;
    Date entryDate;
    Date depurateDate;

    int op = 0;
int dato;
string cadena;
float dato2;

    char opp;

    record.setCode(cont + 1);

    do
    {
        cout << "===== Registros =====\n";

        cout << "Nss: ";
        getline(cin >> ws, cadena);
        patient.setNss(cadena);

        cout << "Nombre: ";
        getline(cin >> ws, cadena);
        patient.setName(cadena);

        cout << "Tipo de sangre: ";
        getline(cin >> ws, cadena);
        patient.setBloodType(cadena);

        cout << "Gastos: ";
        cin >> dato2;
        cin.ignore();
        record.setBills(dato2);

        cout << "Factura: ";
        cin >> dato2;
        cin.ignore();
        record.setTotalBill(dato2);

        cout << "==== Fecha de entrada ==== \n";

        cout << "Dia: ";
        cin >> dato;
        cin.ignore();
        entryDate.setDia(dato);

        cout << "Mes: ";
        cin >> dato;
        cin.ignore();
        entryDate.setMes(dato);

        cout << "Anio: ";
        cin >> dato;
        cin.ignore();
        entryDate.setAnio(dato);

        record.setEntryDate(entryDate);

        cout << "==== Fecha de Salida ==== \n";

        cout << "Dia: ";
        cin >> dato;
        cin.ignore();
        depurateDate.setDia(dato);

        cout << "Mes: ";
        cin >> dato;
        cin.ignore();
        depurateDate.setMes(dato);

        cout << "Anio: ";
        cin >> dato;
        cin.ignore();
        depurateDate.setAnio(dato);

        record.setDepurateDate(depurateDate);

        record.setPatient(patient);

        containerRef->add(record);

        do
        {

            cout << "Deseas agregar otro?";
            cin >> opp;
            cin.ignore();

            opp = toupper(opp);
            /* code */
        } while (opp != 'S' && opp != 'N');

    } while (op == 'S');
}

void UI::delRecord()
{

    Record record;
    int data;
    system("cls");

    cout << "Elinando un registro" << endl;

    cout << "Codigo: ";
    cin >> data;
    cin.ignore();
    record.setCode(data);

    containerRef->del(record);

    cout << "Si el registro existe ya fue eliminado" << endl;
}

void UI::findRecord()
{

    Record record;
    int myStr;
    system("cls");

    cout << "Buscando un registro" << endl;

    cout << "Codigo: ";
    cin >> myStr;
    cin.ignore();
    record.setCode(myStr);

    if (this->containerRef->isThere(record))
    {

        if (this->containerRef->isThere(record))
        {
            Record found = containerRef->find(myStr);
            cout << found.toString();
        }
        else
        {
            cout << "El registro no fue encontrado" << endl;
        }
    }
  

    this->enterToContinue();
}

void UI::sortRecord()
{

    system("cls");

    cout << "Ordenando... << endl" << endl;
    this->containerRef->sort();
    cout << endl
         << endl;

    cout << "El registro se ha ordenado" << endl;
    this->enterToContinue();
}

void UI::delAll()
{

    system("cls");
    cout << "Limpiar todo el registro" << endl
         << endl;

    containerRef->clear();

    this->enterToContinue();
}

void UI::showRecord()
{

    system("cls");
    cout << "Mostrando registro" << endl;

    cout << containerRef->toString();

    this->enterToContinue();
}

void UI::writeToFile()
{

    string myStr;
    system("cls");
    cout << "Escribiendo al disco" << endl;

    cout << "Nombre del archivo: ";
    getline(cin >> ws, myStr);

    ofstream myFile(myStr, ios_base::trunc);

    if (myFile.is_open())
    {
        myFile << *containerRef;
        myFile.close();
        cout << "Gruopo escrito" << endl;
    }
    else
    {
        cout << "error" << endl;
    }
}

void UI::readFromFile()
{

    string myStr;
    system("cls");

    cout << "leyendo del disco..." << endl
         << endl;
    cout << "Nombre del archivo: " << endl;
    getline(cin >> ws, myStr);

    ifstream myFile(myStr);

    if (myFile.is_open())
    {

        myFile >> *this->containerRef;

        myFile.close();

        cout << "Grupo leido correctamente";
    }
    else
    {
        cout << "nose pudo leer el arhiov";
    }

    cout << endl
         << endl;
}

void UI::enterToContinue()
{
    cout << "[Enter] para continuar...";
    cin.get();
}
