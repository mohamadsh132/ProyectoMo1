#include <iostream>
#include "Propietario.h"

using std::string;
using namespace std;

// void Propietario::modificarDatos(){
//     string nuevoTelefono;
//     string nuevoNombre;
//     string nuevoEmail;
//     cout << "Cambiando datos de propietario. \n";
//     cout << "El nuevo telefono del propietario es: ";
//     cin >> nuevoTelefono;
//     this->telefono = nuevoTelefono;
//     cout << "El nuevo nombre del propietario es: ";
//     cin >> nuevoNombre;
//     this->nombre = nuevoNombre;
//     cout << "El nuevo correo del propietario es: ";
//     cin >> nuevoEmail;
//     this->email = nuevoEmail;
// }

void Propietario::setDocumentoId(double documentoIdentidad){
    this->documentoIdentidad = documentoIdentidad;
}

void Propietario::setTelefono(string telefono){
    this->telefono = telefono;
}

void Propietario::setNombre(string nombre){
    this->nombre = nombre;
}

void Propietario::setEmail(string email){
    this->email = email;
}

double Propietario::getDocumentoId(){
    return this->documentoIdentidad;
}

string Propietario::getEmail(){
    return this->email;
}

string Propietario::getNombre(){
    return this->nombre;
}

string Propietario::getTelefono(){
    return this->telefono;
}

void Propietario::addMascota(int idPropietario){
  this->mascotas.push_back(idPropietario);
}

int Propietario::getNumeroMascotas(){
    return this->mascotas.size();
}

int Propietario::getMascotaId(int posicion){
    return this->mascotas[posicion];
}

// Busca a una mascota dada su identificación
bool Propietario::searchMascota(int id){

    for (int i = 0; i < this->mascotas.size(); i++){
        if (this->mascotas[i] == id){
          return true;
        }
    }
    return false;
}

//Busca y elimina a una mascota de un propietario dada su id
void Propietario::eliminarMascota(int id){
  for (int i = 0; i < this->mascotas.size(); i++){
        if (this->mascotas[i] == id){          
          this->mascotas.erase(this->mascotas.begin()+i);
          i--;
          
        }
  }

}