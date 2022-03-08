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

//Pide al usuario información para agregar una nueva mascota
void Veterinaria::agregarMascota(){
    int edad;
    Mascota mascota;
    double idMascota;
    float peso;
    string status, fechaDefuncion, tipoSangre, nombre, raza, tipo;
    
    cout << "Ingrese el id de la mascota\n";
    cin >> idMascota;

    if (Veterinaria::mascotas.count(idMascota) != 0){
        cout << "El id ingresado ya existe en el sistema.\n\n";
        return;
    }

    cin.get(); 
    cout << "Ingrese el nombre de la mascota\n";
    getline(cin, nombre);

    cout << "Ingrese la edad de la mascota\n";
    cin >> edad;

    cout << "Ingrese el tipo de mascota (Perro/Gato)\n";
    cin >> tipo;

    cin.get(); 
    cout << "Ingrese la raza de la mascota\n";
    getline(cin, raza);

    cout << "Ingrese el peso de la mascota\n";
    cin >> peso;

    cout << "Ingrese el tipo de sangre de la mascota\n";
    cin >> tipoSangre;

    cout << "Ingrese el estatus de la mascota (Vivo/Muerto)\n";
    cin >> status;

    if (status == "Muerto" || status == "muerto"){
        cout << "Ingrese la fecha de defunción de la mascota\n";
        cin >> fechaDefuncion;
        mascota.setFechaDefuncion(fechaDefuncion);
    }

    mascota.setDocumentoIdentidad(idMascota);
    mascota.setNombre(nombre);
    mascota.setEdad(edad);
    mascota.setTipo(tipo);
    mascota.setRaza(raza);
    mascota.setPeso(peso);
    mascota.setTipoSangre(tipoSangre);
    mascota.setStatus(status);

    Veterinaria::mascotas[idMascota] = mascota;

    cout << nombre << " se ha registrado correctamente.\n\n";

}

//Pide al usuario información para agregar un nuevo propietario
void Veterinaria::agregarPropietario(){
    double cedula;
    string email, nombre, telefono;
    Propietario propietario;
    
    cout << "Ingrese el id del usuario\n";
    cin >> cedula;

    if (Veterinaria::propietarios.count(cedula) != 0){
        cout << "La cedula ingresada ya existe en el sistema.\n\n";
        return;
    }
    
    cin.get(); 
    cout << "Ingrese el nombre del usuario\n";
    getline(cin, nombre);

    cout << "Ingrese el email del usuario\n";
    cin >> email;

    cout << "Ingrese el telefono del usuario\n";
    cin >> telefono;

    propietario.setDocumentoId(cedula);
    propietario.setNombre(nombre);
    propietario.setEmail(email);
    propietario.setTelefono(telefono);

    Veterinaria::propietarios[cedula] = propietario;

    cout << nombre << " se ha registrado correctamente.\n\n";

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

//Devuelve el número de propietarios registrados
int Veterinaria::contarPropietarios(){
    return Veterinaria::propietarios.size();
}

//Devuelve la información de un propietario dada su cédula
void Veterinaria::listarContactoPropietario(double cedula){

    if (Veterinaria::propietarios.count(cedula) == 0){
        cout << "La cedula ingresada no existe en el sistema.\n\n";
        return;
    }

    Propietario propietario = Veterinaria::propietarios[cedula];

    cout << "Informacion de propietario\n";
    cout << "==========================\n";
    cout << "Cedula: " << propietario.getDocumentoId();
    cout << "\nTelefono:" << propietario.getTelefono();
    cout << "\nNombre: " << propietario.getNombre();
    cout << "\nEmail: " <<propietario.getEmail();
    cout << "\nMascotas: "<<propietario.getNumeroMascotas()<<"\n\n";

}

//Devuelve la información de las mascotas de un propietario dada su cédula
void Veterinaria::consultarMascotas(double cedula){
    
    if (Veterinaria::propietarios.count(cedula) == 0){
        cout << "La cedula ingresada no existe en el sistema.\n\n";
        return;
    }

    Propietario propietario = Veterinaria::propietarios[cedula];
    Mascota mascota;
    double documentoId;

    if (propietario.getNumeroMascotas()==0){
        cout << "El usuario "<<propietario.getNombre()<< " aun no tiene mascotas";
        return;
    }


    cout
        << "\nListado de Mascotas del propietario "<< propietario.getNombre() <<"\n"
        << "========================================\n"
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

    for (int i = 0; i < propietario.getNumeroMascotas(); i++)
    {
        documentoId = propietario.getMascotaId(i);
        mascota = Veterinaria::mascotas[documentoId];
        cout
            << left
            << setw(12)
            << mascota.getDocumentoIdentidad()
            << left
            << setw(10)
            << mascota.getNombre()
            << left
            << setw(7)
            << mascota.getTipo()
            << left
            << setw(6)
            << mascota.getEdad()
            << left
            << setw(10)
            << mascota.getRaza()
            << left
            << setw(10)
            << mascota.getStatus()
            << endl;
    }
}

//Devuelve la información de los propietarios de una mascota dado su id
void Veterinaria::consultarPropietarios(double id){
    
    if (Veterinaria::mascotas.count(id) == 0){
        cout << "El id ingresado no existe en el sistema.\n\n";
        return;
    }

    Mascota mascota = Veterinaria::mascotas[id];
    Propietario propietario;
    double cedula;

    if (mascota.getNumeroPropietarios()==0){
        cout << "La mascota "<<mascota.getNombre()<< " aun no tiene propietarios\n\n";
        return;
    }


    cout
        << "\nListado de propietarios de la mascota "<< mascota.getNombre() <<"\n"
        << "========================================\n"        
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

    for (int i = 0; i < mascota.getNumeroPropietarios(); i++)
    {
        cedula = mascota.getPropietarioId(i);
        propietario = Veterinaria::propietarios[cedula];
        cout
            << left
            << setw(12)
            << propietario.getDocumentoId()
            << left
            << setw(15)
            << propietario.getNombre()
            << left
            << setw(18)
            << propietario.getEmail()
            << left
            << setw(10)
            << propietario.getTelefono()
            << endl;
    }
}

//Cambia el estado de una mascota: de vivo a muerto
void Veterinaria::cambiarEstadoMascotas(double id){

    if (Veterinaria::mascotas.count(id) == 0){
        cout << "El id ingresado no existe en el sistema.\n\n";
        return;
    }

    string fechaDefuncion;

    Veterinaria::mascotas[id].setStatus("Muerto");
    cout << "Ingrese la fecha de defunción: \n";
    cin >> fechaDefuncion;
    Veterinaria::mascotas[id].setFechaDefuncion(fechaDefuncion);
    cout << Veterinaria::mascotas[id].getNombre() << " se ha actualizado correctamente.\n\n";


}

//Actualiza el contacto de un propietario dada su cédula
void Veterinaria::modificarPropietario(double cedula){

    if (Veterinaria::propietarios.count(cedula) == 0){
        cout << "La cedula ingresada no existe en el sistema.\n\n";
        return;
    }

    string email, nombre, telefono;
    Propietario propietario;
    
    cin.get(); 
    cout << "Ingrese el nuevo nombre del usuario\n";
    getline(cin, nombre);

    cout << "Ingrese el nuevo email del usuario\n";
    cin >> email;

    cout << "Ingrese el nuevo telefono del usuario\n";
    cin >> telefono;
    
    Veterinaria::propietarios[cedula].setNombre(nombre);
    Veterinaria::propietarios[cedula].setEmail(email);
    Veterinaria::propietarios[cedula].setTelefono(telefono);

    cout << nombre << " se ha actualizado correctamente.\n\n";

}

//Elimina un propietario del sistema dada su cédula
void Veterinaria::eliminarPropietario(double cedula){
    
    if (Veterinaria::propietarios.count(cedula) == 0){
        cout << "La cedula ingresada no existe en el sistema.\n\n";
        return;
    }    

    double id;
    // Eliminar referencias del propietario para cada mascota si existen
    for (auto x : Veterinaria::mascotas){
        id = x.second.getDocumentoIdentidad();
        Veterinaria::mascotas[id].eliminarPropietario(cedula);
    }

    Veterinaria::propietarios.erase(cedula);

    cout << "Se ha borrado correctamente.\n\n";

}

//Asocia una mascota a un propietario dada la cédula del propietario
void Veterinaria::asociarMascota(double cedula){

    if (Veterinaria::propietarios.count(cedula) == 0){
        cout << "La cedula ingresada no existe en el sistema.\n\n";
        return;
    }    

    double idMascota;

    cout << "Ingrese el id de la mascota para asociar a "<<Veterinaria::propietarios[cedula].getNombre()<<"\n";

    cin>>idMascota;

    if (Veterinaria::mascotas.count(idMascota) == 0){
        cout << "La identificacion ingresada no existe en el sistema.\n\n";
        return;
    }  

    if (Veterinaria::mascotas[idMascota].searchPropietario(cedula)){
        cout << "El propietario ya figura como responsable de la mascota.\n\n";
        return;
    }

    Veterinaria::mascotas[idMascota].addPropietario(cedula);
    Veterinaria::propietarios[cedula].addMascota(idMascota);

    cout << "Se ha añadido el nuevo propietario correctamente.\n\n";

}

//Asocia un propietario a una mascota dada la identificacion de la mascota
void Veterinaria::asociarPropietario(double id){

    if (Veterinaria::mascotas.count(id) == 0){
        cout << "La identificacion ingresada no existe en el sistema.\n\n";
        return;
    }  

    double cedula;

    cout << "Ingrese la cedula del propietario para asociar a "<<Veterinaria::mascotas[id].getNombre()<<"\n";

    cin>>cedula;

    if (Veterinaria::propietarios.count(cedula) == 0){
        cout << "La cedula ingresada no existe en el sistema.\n\n";
        return;
    }  

    if (Veterinaria::propietarios[cedula].searchMascota(id)){
        cout << "La mascota ya tiene como responsable al propietario especificado.\n\n";
        return;
    }

    Veterinaria::propietarios[cedula].addMascota(id);
    Veterinaria::mascotas[id].addPropietario(cedula);


    cout << "Se ha añadido la nueva mascota correctamente.\n\n";



}


//Desasocia un propietario de una mascota dada la identificacion de la mascota

void Veterinaria::desasociarPropietario(double idMascota){

    if (Veterinaria::mascotas.count(idMascota) == 0){
        cout << "La identificacion ingresada no existe en el sistema.\n\n";
        return;
    }  

    double cedula;

    cout << "Ingrese la cedula del propietario para desasociar de "<<Veterinaria::mascotas[idMascota].getNombre()<<"\n";

    cin>>cedula;

    if (Veterinaria::propietarios.count(cedula) == 0){
        cout << "La cedula ingresada no existe en el sistema.\n\n";
        return;
    }  

    Veterinaria::mascotas[idMascota].eliminarPropietario(cedula);
    Veterinaria::propietarios[cedula].eliminarMascota(idMascota);

    cout << "Se ha borrado correctamente.\n\n";

}



