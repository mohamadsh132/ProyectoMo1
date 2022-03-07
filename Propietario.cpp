#include <iostream>
#include "Propietario.h"

using std::string;
using namespace std;

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

void Propietario::addMascota(double idPropietario){
  this->mascotas.push_back(idPropietario);
}

int Propietario::getNumeroMascotas(){
    return this->mascotas.size();
}

double Propietario::getMascotaId(int posicion){
    return this->mascotas[posicion];
}

// Busca a una mascota dada su identificación
bool Propietario::searchMascota(double id){

    for (int i = 0; i < this->mascotas.size(); i++){
        if (this->mascotas[i] == id){
          return true;
        }
    }
    return false;
}

//Busca y elimina a una mascota de un propietario dada su id
void Propietario::eliminarMascota(double id){
  for (int i = 0; i < this->mascotas.size(); i++){
        if (this->mascotas[i] == id){          
          this->mascotas.erase(this->mascotas.begin()+i);
          i--;
          
        }
  }

}