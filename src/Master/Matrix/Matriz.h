#ifndef MATRIZ_H
#define MATRIZ_H
#include "Modulo.h"
#include <vector>
#include <thread>
#include "ofSerial.h"


class Matriz
{
   pthread_mutex_t mtx;
   std::vector <Modulo*> modulos;
   ofSerial serial;
   int addModule(int pos[2], char* message);
public:
    Matriz(char* port, int baud);
    Matriz();
    void setup (char* port, int baud);
    void readSerial();
    void writeSerial();
};

#endif // MATRIZ_H
