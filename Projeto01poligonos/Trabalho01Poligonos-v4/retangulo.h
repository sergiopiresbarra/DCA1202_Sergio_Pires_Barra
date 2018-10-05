/**
 * CLASSE RETANGULO - AQUI CRIA UM RETANGULO.
 */
#ifndef RETANGULO_H
#define RETANGULO_H
#include "poligono.h"
/**
 * @brief The Retangulo class
 */
class Retangulo : public Poligono
{
    public:
    /**
         * @brief Retangulo
         */
        Retangulo():Poligono(4){}; //Define 4 postos da classe polígono que será usada para formar o retangulo;
        /**
         * @brief ~Retangulo
         */
        virtual ~Retangulo();      //Destrutor da Classe Retangulo;
        /**
         * @brief Retangulo
         * @param x
         * @param y
         * @param largura
         * @param altura
         */
        Retangulo(float x, float y, float largura, float altura):Poligono(4){ //Aqui cria um retangulo com a coordenada do vértice superior esquerdo (x,y) e define sua altura e largura;
    //Cria o Retangulo com o ponto do vértice superior esquerdo definido anteriormente;
    a[0].setXY(x,y);
    a[1].setXY(x+largura,y);
    a[2].setXY(x+largura,y-altura);
    a[3].setXY(x,y-altura);
  }
    protected:

    private:
};

#endif // RETANGULO_H
