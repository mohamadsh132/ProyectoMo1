#ifndef MASCOTA_H
#define MASCOTA_H

#include <iostream>
#include <vector>

using std::vector;
using std::string;

class Mascota
{
private:
    float documentoIdentidad;
    int edad;
    string status;
    string fechaDefuncion;
    string tipoSangre;
    string telefono;
    string nombre;
    string email;
    string raza;
    string tipo;
    float peso;
    vector <int> propietarios;    
    

public:
    void setDocumentoIdentidad(double documentoIdentidad);
    void setEdad(int edad);
    void setStatus(string status);
    void setFechaDefuncion(string fechaDefuncion);
    void setTipoSangre(string tipoSangre);
    void setTelefono(string telefono);
    void setNombre(string nombre);
    void setEmail(string email);
    void setRaza(string raza);
    void setTipo(string tipo);
    void setPeso(float peso);

    double getDocumentoIdentidad();
    int getEdad();
    string getStatus();
    string getFechaDefuncion();
    string getTipoSangre();
    string getTelefono();
    string getNombre();
    string getEmail();
    string getRaza();
    string getTipo();
    float getPeso();

};

#endif