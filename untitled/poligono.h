#ifndef POLIGONO_H
#define POLIGONO_H
#include "ponto.h"

class Poligono
{
public:
    Poligono(int n=0);
     ~Poligono();
    void vertices(void);
    void area(void);
    void translada(float A=0, float B=0);
    void rotaciona(float X1=0, float Y1=0, double graus=0);
    void print(void);
       Ponto a[100];
protected:
    //Ponto a[100];
private:
    int npontos;
};

#endif // POLIGONO_H
