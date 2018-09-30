#ifndef RETANGULO_H
#define RETANGULO_H
#include "poligono.h"

class Retangulo : public Poligono
{
    public:
        Retangulo():Poligono(4){};
        virtual ~Retangulo();
        Retangulo(float x, float y, float largura, float altura):Poligono(4){
    //ctor
    a[0].setXY(x,y);
    a[1].setXY(x+largura,y);
    a[2].setXY(x+largura,y-altura);
    a[3].setXY(x,y-altura);
    //for(int i=0; i<4; i++){
    //retan.a[i].setX(r[i].getX());
   // retan.a[i].setY(r[i].getY());
   // }
}
        //Poligono retan=4;
        //Ponto r[4];
    protected:

    private:
};

#endif // RETANGULO_H
