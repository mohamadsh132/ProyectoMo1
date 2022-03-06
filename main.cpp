#include <iostream>
#include "Veterinaria.h"


using std::cin;
using std::cout;
using std::string;

void menu(Veterinaria veterinaria)
{
    int opc = 0;
    do
    {        
        cout << "Bienvenidos al directorio telefonico de la veterinaria \n";
        cout << "1. Agregar propietario \n";
        cout << "2. Agregar mascota \n";
        cout << "3. Agregar/Modificar contacto \n";
        cout << "4. Eliminar contacto \n";
        cout << "5. Listar contactos \n";
        cout << "6. Mostrar cantidad de propietarios \n";
        cout << "7. Listar mascotas \n";
        cout << "8. Mostrar propietarios de mascotas \n";
        cout << "9. Asociar nuevas mascotas a un propietario \n";
        cout << "10. Asociar nuevos propietarios a una mascota \n";
        cout << "11. Cambiar status de mascota \n";
        cout << "12. Eliminar propietario de mascota \n";
        cout << "0. Salir \n";

        cin >> opc;

        switch (opc)
        {
        case 1:                
            break;
        
        case 2:            
            break;

        case 3:
            break;
        
        case 4:
            break;
        
        case 5:
            veterinaria.listarContactos();
            break;
        
        case 6:
            break;
        
        case 7:
            veterinaria.listarMascotas();
            break;
        
        case 8:
            break;
        
        case 9:
            break;
        
        case 10:
            break;
        
        case 11:
            break;
        
        case 12:
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