#ifndef BOTON_H
#define BOTON_H
#include "Modulo.h"


class Boton: public Modulo
{
public:
    Boton(int posicion[2], bool bot);
    bool boton;
    int led;
};

#endif // BOTON_H
