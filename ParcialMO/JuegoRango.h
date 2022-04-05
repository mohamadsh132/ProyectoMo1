#ifndef RANGO_H
#define RANGO_H


#include "Juego.h"
#include<cstdlib>
#include<ctime>

class JuegoRango : public Juego {

protected:
    float calcularResultado(float gonzosApostar) override;

public:
    ~JuegoRango() override = default; // Los destructores deben ser sobreescritos y deben ser virtual en la clase papa. Si no tiene nada especial se puede marcar como default
    float jugar(float gonzosApostar) override;

    void mostrarReglas()=0;

};


#endif //RANGO_H