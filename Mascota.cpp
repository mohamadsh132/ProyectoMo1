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

string Mascota::getTelefono() {
  return this->telefono;
}

string Mascota::getRaza() {
  return this->raza;
}

string Mascota::getNombre() {
  return this->nombre;
}

string Mascota::getEmail() {
  return this->email;
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



void Mascota::setTelefono(string telefono){
  this->telefono = telefono;
}


void Mascota::setNombre(string nombre){
  this->nombre = nombre;
}


void Mascota::setEmail(string email){
  this->email = email;
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