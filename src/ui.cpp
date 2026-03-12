
#include "ui.hpp"
#include "date.hpp"
#include "patient.hpp"
#include <vector>
#include <iostream>
#include <string>
#include <fstream>
#include "recordbook.hpp"
#include "record.hpp"

using namespace std;

vector<Book> record;
Record record;
Patient patient;
Date entryDate;
Date depurateDate;

int cont;
int op = 0;
int dato;
string cadena;
float dato2;

void UI::menu()
{
    readFile();

    do
    {

        cout << "1) Agrager Nuevo Registro \n";
        cout << "2) mostrar \n";
        cout << "3) Salior \n";
        cin >> op;
        cin.ignore();

        switch (op)
        {
        case 1:

            add();

            break;

        case 2:

            show();
            break;
        }

    } while (op != 3);
}

void UI::add()
{

    char op;

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

        record.setCode(cont + 1);

        Book.push_back(record);

        saveFile();

        do
        {

            cout << "Deseas agregar otro?";
            cin >> op;
            cin.ignore();

            op = toupper(op);
            /* code */
        } while (op != 'S' && op != 'N');

    } while (op == 'S');
}

/*


void UI::show()
{

    for (const Patient &p : office)
    {
        cout << p << endl;
    }
}

void UI::saveFile()
{

    ofstream file("paciente.file", ios::app);

    if (file.is_open())
    {

        for (Patient p : office)
        {

            file << p << '#';
        }
    }
}


void UI::readFile()
{

    char sep;

    ifstream file("paciente.file");

    if (file.is_open())
    {

        while (file >> patient >> sep)
        {

            office.push_back(patient);
        }
    }
    else
    {
        cout << "no se pudo abrir el archivo \n";
    }
}
*/