#ifndef VETERINARIA_H
#define VETERINARIA_H

#include <iostream>
#include <unordered_map>
#include <vector>
#include "Mascota.h"
#include "Propietario.h"

using std::string;
using std::unordered_map; //tengo  que hacer un mapa no ordenado

using std::vector;

class Veterinaria
{
private:
    unordered_map <int,Propietario> propietarios;       
    unordered_map <int,Mascota> mascotas;   
        
public:
    void inicializarDatos();
    void agregarPropietario();
    void modificarPropietario(int cedula);
    void eliminarMascota(int cedula);
    void listarContactoPropietario(int cedula);
    int contarPropietarios();
    void listarContactos();
    void listarMascotas();
    void consultarMascotas(int cedula);
    void consultarPropietario(int idMascota);
    void asociarMascota(int cedula);
    void asociarPropietario(int idMascota);
    void cambiarEstadoMascotas(int idMascota);
    void eliminarPropietario(int idMascota);

};

#endif