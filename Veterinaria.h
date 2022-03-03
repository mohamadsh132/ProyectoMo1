#ifndef VETERINARIA_H
#define VETERINARIA_H

#include <iostream>
#include <map>
#include <vector>
#include "Mascota.h"
#include "Propietario.h"

using std::string;
using std::multimap; //tengo  que hacer un mapa no ordenado

using std::vector;

class Veterinaria
{
private:
    multimap <Propietario,Mascota> contactos;   
    vector <Propietario> propietarios;       
    vector <Mascota> mascotas;       
        
public:
    void inicializarDatos();// TODO     
    void agregarPropietario();
    void modificarPropietario(int cedula);
    void eliminarPropietario(int cedula);
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