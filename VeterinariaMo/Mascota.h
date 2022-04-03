#ifndef MASCOTA_H
#define MASCOTA_H

#include <iostream>
#include <vector>

using std::vector;
using std::string;

class Mascota
{
private:
    double documentoIdentidad;
    int edad;
    string status;
    string fechaDefuncion;
    string tipoSangre;
    string nombre;
    string raza;
    string tipo;
    float peso;
    vector <double> propietarios;    
    

public:
    void setDocumentoIdentidad(double documentoIdentidad);
    void setEdad(int edad);
    void setStatus(string status);
    void setFechaDefuncion(string fechaDefuncion);
    void setTipoSangre(string tipoSangre);
    void setNombre(string nombre);
    void setRaza(string raza);
    void setTipo(string tipo);
    void setPeso(float peso);

    double getDocumentoIdentidad();
    int getEdad();
    string getStatus();
    string getFechaDefuncion();
    string getTipoSangre();
    string getNombre();
    string getRaza();
    string getTipo();
    float getPeso();

    void addPropietario(double idPropietario);
    int getNumeroPropietarios();
    double getPropietarioId(int posicion);
    bool searchPropietario(double cedula);
    void eliminarPropietario(double cedula);
};

#endif