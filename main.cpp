#include <iostream>
#include "Veterinaria.h"


using std::cin;
using std::cout;
using std::string;

void menu(Veterinaria veterinaria)
{
    int opc = 0;
    double id;
    do
    {        
        cout << "Bienvenidos al directorio telefonico de la veterinaria \n";
        cout << "1. Agregar propietario \n";
        cout << "2. Agregar mascota \n";
        cout << "3. Modificar propietario \n";
        cout << "4. Eliminar propietario \n";
        cout << "5. Listar propietarios \n";
        cout << "6. Mostrar cantidad de propietarios \n";
        cout << "7. Listar mascotas \n";
        cout << "8. Mostrar propietarios de mascotas \n";
        cout << "9. Mostrar mascotas de propietarios \n";
        cout << "10. Asociar nuevas mascotas a un propietario \n";
        cout << "11. Asociar nuevos propietarios a una mascota \n";
        cout << "12. Cambiar status de mascota \n";
        cout << "13. Eliminar propietario de mascota \n";
        cout << "14. Listar contacto de propietario \n";
        cout << "0. Salir \n";

        cin >> opc;

        switch (opc)
        {
        case 1:       
            veterinaria.agregarPropietario();         
            break;
        
        case 2:            
            veterinaria.agregarMascota();
            break;

        case 3:
            cout <<"Ingrese la cedula del propietario:\n";
            cin >>id;
            veterinaria.modificarPropietario(id);
            break;
        
        case 4:
            cout <<"Ingrese la cedula del propietario:\n";
            cin >>id; 
            veterinaria.eliminarPropietario(id);
            break;
        
        case 5:
            veterinaria.listarContactos();
            break;
        
        case 6:
            cout << "Numero de propietarios: " << veterinaria.contarPropietarios() << "\n\n";
            break;
        
        case 7:
            veterinaria.listarMascotas();
            break;
        
        case 8:
            cout <<"Ingrese la identificacion de la mascota:\n";
            cin >>id;
            veterinaria.consultarPropietarios(id);
            break;
        
        case 9:
            cout <<"Ingrese la cedula del propietario:\n";
            cin >>id;
            veterinaria.consultarMascotas(id);
            break;
        
        case 10:
            cout <<"Ingrese la identificacion de la mascota:\n";
            cin >>id;
            veterinaria.asociarPropietario(id);
            break;
        
        case 11:
            cout <<"Ingrese la cedula del nuevo propietario:\n";
            cin >>id;
            veterinaria.asociarMascota(id);
            break;
        
        case 12:
            cout <<"Ingrese la identificacion de la mascota:\n";
            cin >>id;
            veterinaria.cambiarEstadoMascotas(id);
            break;

        case 13:
            cout <<"Ingrese la identificacion de la mascota a desasociar:\n";
            cin >>id;
            veterinaria.desasociarPropietario(id);
            break;

        case 14:
            cout <<"Ingrese la cedula del propietario a consultar:\n";
            cin >>id;
            veterinaria.listarContactoPropietario(id);
            
            break;

        default:
            break;
        }
    } while (opc != 0);
}


int main()
{

    Veterinaria veterinaria;
    veterinaria.inicializarDatos();
    menu(veterinaria);

    return 0;
}