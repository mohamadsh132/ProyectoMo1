#include "Mascota.h"

double Mascota::getDocumentoIdentidad(){
  return this->documentoIdentidad;
}

int Mascota::getEdad(){
  return this->edad;
}

string Mascota::getStatus(){
  return this->status;
}

string Mascota::getFechaDefuncion(){
  return this->fechaDefuncion;
}

string Mascota::getTipoSangre(){
  return this->tipoSangre;
}

string Mascota::getRaza() {
  return this->raza;
}

string Mascota::getNombre() {
  return this->nombre;
}

string Mascota::getTipo() {
  return this->tipo;
}

float Mascota::getPeso() {
  return this->peso;
}


void Mascota::setDocumentoIdentidad(double documentoIdentidad){
  this->documentoIdentidad = documentoIdentidad;
}


void Mascota::setEdad(int edad){
  this->edad = edad;
}


void Mascota::setStatus(string status){
  this->status = status;
}


void Mascota::setFechaDefuncion(string fechaDefuncion){
  this->fechaDefuncion = fechaDefuncion;
}


void Mascota::setTipoSangre(string tipoSangre){
  this->tipoSangre = tipoSangre;
}

void Mascota::setNombre(string nombre){
  this->nombre = nombre;
}

void Mascota::setRaza(string raza){
  this->raza = raza;
}



void Mascota::setTipo(string tipo){
  this->tipo = tipo;
}


void Mascota::setPeso(float peso){
  this->peso = peso;
}

void Mascota::addPropietario(int idMascota){
  this->propietarios.push_back(idMascota);
}

int Mascota::getNumeroPropietarios(){
    return this->propietarios.size();
}

int Mascota::getPropietarioId(int posicion){
    return this->propietarios[posicion];
}

// Busca a un propietario dada su cédula 
bool Mascota::searchPropietario(int cedula){

    for (int i = 0; i < this->propietarios.size(); i++){
        if (this->propietarios[i] == cedula){
          return true;
        }
    }
    return false;
}

//Busca y elimina a un propietario de una mascota dada su cédula
void Mascota::eliminarPropietario(int cedula){
  for (int i = 0; i < this->propietarios.size(); i++){
        if (this->propietarios[i] == cedula){          
          this->propietarios.erase(this->propietarios.begin()+i);
          i--;
          
        }
  }

}
