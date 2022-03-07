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
    unordered_map <double,Propietario> propietarios;       
    unordered_map <double,Mascota> mascotas;   
        
public:
    void inicializarDatos();
    void agregarPropietario();
    void agregarMascota();
    void modificarPropietario(float cedula);
    void eliminarPropietario(float cedula);
    void listarContactoPropietario(float cedula);
    int contarPropietarios();
    void listarContactos();
    void listarMascotas();
    void consultarMascotas(float cedula);
    void consultarPropietarios(float idMascota);
    void asociarMascota(float cedula);
    void asociarPropietario(float idMascota);
    void cambiarEstadoMascotas(float idMascota);
    void desasociarPropietario(float idMascota);//TODO

};

#endif