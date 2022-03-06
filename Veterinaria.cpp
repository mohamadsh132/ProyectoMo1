#include <iostream>
#include <string>
#include "Veterinaria.h"
#include <iomanip>

using namespace std;

//inicializar veterinaria con datos prueba
void Veterinaria::inicializarDatos(){
    Mascota mascota1,mascota2,mascota3,mascota4;
    Propietario propietario1,propietario2,propietario3;


    propietario1.setDocumentoId(1);
    propietario1.setEmail("prop1@gmail.com");
    propietario1.setNombre("Jose");
    propietario1.setTelefono("3006441257");
    
    propietario2.setDocumentoId(2);
    propietario2.setEmail("prop2@gmail.com");
    propietario2.setNombre("Juan");
    propietario2.setTelefono("3016421457");

    propietario3.setDocumentoId(3);
    propietario3.setEmail("prop3@gmail.com");
    propietario3.setNombre("Alberto");
    propietario3.setTelefono("3017341260");

    mascota1.setDocumentoIdentidad(1);
    mascota1.setTipo("Perro");
    mascota1.setPeso(15.4);
    mascota1.setEdad(1);
    mascota1.setTipoSangre("A");
    mascota1.setNombre("Firulais");
    mascota1.setRaza("Bulldog");
    mascota1.setStatus("vivo");

    mascota2.setDocumentoIdentidad(2);
    mascota2.setTipo("Perro");
    mascota2.setPeso(20.4);
    mascota2.setEdad(2);
    mascota2.setTipoSangre("B");
    mascota2.setNombre("Coco");
    mascota2.setRaza("Doberman");
    mascota2.setStatus("vivo");

    mascota3.setDocumentoIdentidad(3);
    mascota3.setTipo("Perro");
    mascota3.setPeso(25);
    mascota3.setEdad(3);
    mascota3.setTipoSangre("A");
    mascota3.setNombre("Max");
    mascota3.setRaza("Pug");
    mascota3.setStatus("vivo");

    mascota4.setDocumentoIdentidad(4);
    mascota4.setTipo("Gato");
    mascota4.setPeso(5);
    mascota4.setEdad(1);
    mascota4.setTipoSangre("C");
    mascota4.setNombre("Sammy");
    mascota4.setRaza("Angora");
    mascota4.setStatus("vivo");
    
    propietario1.addMascota(1);
    propietario1.addMascota(2);
    propietario2.addMascota(3);
    propietario3.addMascota(4);

    mascota1.addPropietario(1);
    mascota2.addPropietario(1);
    mascota3.addPropietario(2);
    mascota4.addPropietario(3);

    Veterinaria::propietarios[1] = propietario1;
    Veterinaria::propietarios[2] = propietario2;
    Veterinaria::propietarios[3] = propietario3;

    Veterinaria::mascotas[1] = mascota1;
    Veterinaria::mascotas[2] = mascota2;
    Veterinaria::mascotas[3] = mascota3;
    Veterinaria::mascotas[4] = mascota4;

}

//Pide al usuario información para agregar un nuevo propietario
void Veterinaria::agregarPropietario(){
    int cedula;
    string email, nombre, telefono;
    
    cout << "Ingrese el id del usuario\n";
    cin >> cedula;
    
    cout << "Ingrese el nombre del usuario\n";
    getline(cin, nombre);

    cout << "Ingrese el email del usuario\n";
    cin >> email;

    cout << "Ingrese el telefono del usuario\n";
    cin >> telefono;

}

//Listar datos de propietarios
void Veterinaria::listarContactos(){

    cout
        << "\nListado de Propietarios\n"
        << "=====================\n"
        << left
        << setw(12)
        << "Cedula"
        << left
        << setw(15)
        << "Nombre"
        << left
        << setw(18)
        << "Email"
        << left
        << setw(10)
        << "Telefono"
        << endl;
    
    for (auto x : Veterinaria::propietarios){
        cout
            << left
            << setw(12)
            << x.second.getDocumentoId()
            << left
            << setw(15)
            << x.second.getNombre()
            << left
            << setw(18)
            << x.second.getEmail()
            << left
            << setw(10)
            << x.second.getTelefono()
            << endl;
    }
    cout << "\n\n";
}

//Listar datos de mascotas
void Veterinaria::listarMascotas(){

    cout
        << "\nListado de Mascotas\n"
        << "=====================\n"
        << left
        << setw(12)
        << "Id"
        << left
        << setw(10)
        << "Nombre"
        << left
        << setw(7)
        << "Tipo"
        << left
        << setw(6)
        << "Edad"
        << left
        << setw(10)
        << "Raza"
        << left
        << setw(10)
        << "Estatus"
        << endl;
    
    for (auto x : Veterinaria::mascotas){
        cout
            << left
            << setw(12)
            << x.second.getDocumentoIdentidad()
            << left
            << setw(10)
            << x.second.getNombre()
            << left
            << setw(7)
            << x.second.getTipo()
            << left
            << setw(6)
            << x.second.getEdad()
            << left
            << setw(10)
            << x.second.getRaza()
            << left
            << setw(10)
            << x.second.getStatus()
            << endl;
    }
    cout << "\n\n";
    
}

