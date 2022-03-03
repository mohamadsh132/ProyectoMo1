#ifndef PROPIETARIO_H
#define PROPIETARIO_H

#include <iostream>

using std::string;

class Propietario
{
private:
    int documentoIdentidad;
    string telefono;
    string nombre;
    string email;

public:
    void modificarDatos(); // TODO

};

#endif