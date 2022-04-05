#include "JuegoRango.h"

float JuegoRango::jugar(float gonzosApostar) {
    int opcion;
    float gonzosResultado;
    int numMaxRandom = 80;
    int numMinRandom = 1;


    srand(time(nullptr));
    numeroJugador = numMinRandom + rand() % numMaxRandom;
    cout << "Tu numero aleatorio es: " << numeroJugador << endl;
    cout << "Quiere seguir jugando?" << endl;
    cout << "1. SI" << endl;
    cout << "2. NO" << endl;
    cout << "Opcion: ";
    cin >> opcion;

    if (opcion == 1) {
        return lowestResult * gonzosApostar;
    }

    numeroJugador = numMinRandom + rand() % numMaxRandom;
    cout << "Tu numero aleatorio es: " << numeroJugador << endl;
    cout << "Ingrese su numero: "<< numeroJugador << endl;
        // verificar que esté en el rango
        while(numeroJugador < 50 || numeroJugador > 80){
            cout <<"El numero esta mal digitado, intente de nuevo";
            cout <<"Ingrese su numero: ";
        }

        //verificar si es 71
        if(numeroJugador == 71){
                cout <<"Felicitaciones, venga manana por un premio!";
            }
            else{
                 cout <<"¡¡El numero es incorrecto!! ";
            }

    gonzosResultado = calcularResultado(gonzosApostar);
    return gonzosResultado;
}

void mostrarReglas(){

    cout <<" Rango es un juego simple pero dificil en el que el usuario debe insertar un numero del 1-80, si logra atinar el numero
    elegido por el sistem el jugador recivira un premio ";
}