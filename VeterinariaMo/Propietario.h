#ifndef PROPIETARIO_H
#define PROPIETARIO_H

#include <iostream>
#include <vector>

using std::string;
using std::vector;


class Propietario
{
private:
    double documentoIdentidad;
    string telefono;
    string nombre;
    string email;
    vector <double> mascotas;

public:
    void setDocumentoId(double cedula); // TODO
    void setTelefono(string telefono);
    void setNombre(string nombre);
    void setEmail(string email);
    double getDocumentoId();
    string getTelefono();
    string getNombre();
    string getEmail();
  
    int getNumeroMascotas();
    double getMascotaId(int posicion);
    void addMascota(double idMascota);
    bool searchMascota(double id);
    void eliminarMascota(double id);

};

#endif