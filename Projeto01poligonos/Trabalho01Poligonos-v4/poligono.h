/**
 * CLASSE POLIGONO - AQUI CRIA UM POLIGONO DE NO MAXIMO 100 VÉRTICES.
 */
#ifndef POLIGONO_H
#define POLIGONO_H
#include "ponto.h"

/**
 * @brief The Poligono class
 */
class Poligono
{
public:
    /**
     * @brief Poligono
     * @param n
     */
    Poligono(int n=0);     //AQUI É DEFINIDO O NUMERO DE VÉRTICES DO POLIGONO;
    ~Poligono();          //DESTRUTOR DO POLIGONO;
    /**
     * @brief vertices
     */
    void vertices(void);   //Recupera a quantidade de vértices que foram inseridos no polígono;
    /**
     * @brief area
     */
    void area(void);       //Calcular a área do polígono;
    /**
     * @brief translada
     * @param A
     * @param B
     */
    void translada(float A=0, float B=0);   //Translada o polígono para (+a,+b);
    /**
     * @brief rotaciona
     * @param X1
     * @param Y1
     * @param graus
     */
    void rotaciona(float X1=0, float Y1=0, float graus=0); //Rotaciona o polígono de θ graus no sentido anti-horário em torno de um ponto (x0,y0) fornecido pelo usuário;
    /**
     * @brief print
     */
    void print(void);   //Imprimi o polígono armazenado da forma (x0,y0)→(x1,y1)→(x2,y2)→…→(Xn,Yn);
    /**
     * @brief centrodegravidade
     */
    void centrodegravidade(void); //Calcula o Centro de Gravidade do polígono;
    /**
        * @brief a
        */
       Ponto a[100];  //Número máximo de pontos do poligono;
protected:

private:
       /**
     * @brief npontos
     */
    int npontos; //Número de pontos do poligono definido pelo usuário;
};

#endif // POLIGONO_H
