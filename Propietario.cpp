#include <iostream>
#include "Propietario.h"

using std::string;

void Propietario::modificarDatos(){
    string nuevoTelefono;
    string nuevoNombre;
    string nuevoEmail;
    cout << "Cambiando datos de propietario. \n";
    cout << "El nuevo telefono del propietario es: ";
    cin >> nuevoTelefono;
    this->telefono = nuevoTelefono;
    cout << "El nuevo nombre del propietario es: ";
    cin >> nuevoNombre;
    this->nombre = nuevoNombre;
    cout << "El nuevo correo del propietario es: ";
    cin >> nuevoEmail;
    this->email = nuevoEmail;
}