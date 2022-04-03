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
    void modificarPropietario(double cedula);
    void eliminarPropietario(double cedula);
    void listarContactoPropietario(double cedula);
    int contarPropietarios();
    void listarContactos();
    void listarMascotas();
    void consultarMascotas(double cedula);
    void consultarPropietarios(double idMascota);
    void asociarMascota(double cedula);
    void asociarPropietario(double idMascota);
    void cambiarEstadoMascotas(double idMascota);
    void desasociarPropietario(double idMascota);//TODO
    void noEliminarProMasDos(double cedula);

};

#endif