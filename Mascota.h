#ifndef MASCOTA_H
#define MASCOTA_H

#include <iostream>

using std::string;

class Mascota
{
private:
    int documentoIdentidad;
    int edad;
    bool status;
    string fechaDefuncion;
    string tipoSangre;
    string telefono;
    string nombre;
    string email;
    string raza;
    string tipo;
    float peso;
    

public:
    void modificarEstado(); // TODO

};

#endif