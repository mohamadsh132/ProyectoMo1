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
    vector <int> mascotas;

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
    int getMascotaId(int posicion);
    void addMascota(int idMascota);
    bool searchMascota(int id);
    void eliminarMascota(int id);

};

#endif