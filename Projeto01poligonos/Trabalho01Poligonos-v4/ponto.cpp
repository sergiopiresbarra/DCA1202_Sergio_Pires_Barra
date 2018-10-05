/**
 * pontoCPP - AQUI ESTAO AS FUNÇÕES DA CLASSE PONTO QUE SERÃO EXECUTADAS;
 */
#include <iostream>
#include <cmath>
#include "ponto.h"

using namespace std;

/**
 * @brief Ponto::Ponto
 * @param mx
 * @param my
 */
Ponto::Ponto(float mx, float my){
  x = mx; y = my; //guarda as coordenadas do novo ponto criado;
}

/**
 * @brief Ponto::~Ponto
 */
Ponto::~Ponto(){
  //cout << "chamando destrutor ponto\n";
}

/**
 * @brief Ponto::setX
 * @param mx
 */
void Ponto::setX(float mx){
  x = mx;
}

/**
 * @brief Ponto::getX
 * @return
 */
float Ponto::getX(void){
  return x;
}

/**
 * @brief Ponto::setY
 * @param my
 */
void Ponto::setY(float my){
  y = my;
}

/**
 * @brief Ponto::getY
 * @return
 */
float Ponto::getY(void){
  return y;
}

/**
 * @brief Ponto::print
 */
void Ponto::print(void){
  cout << "(" << x << ","
       << y << ")"<<"\n";
}

/**
 * @brief Ponto::add
 * @param p
 */
void Ponto::add(Ponto p){
  cout<<"Soma entre: ";
  cout<< "(" << x << ","<< y << ")"<<" + ";
  cout<< "(" << p.x << ","<< p.y << ")"<<"\n";
  x=x+p.x;
  y=y+p.y;
  cout<<"resultado da soma: ";
  cout<< "(" << x << ","<< y << ")"<<"\n";

}

/**
 * @brief Ponto::sub
 * @param p
 */
void Ponto::sub(Ponto p){
  cout<<"Subtracao entre: ";
  cout<< "(" << x << ","<< y << ")"<<" - ";
  cout<< "(" << p.x << ","<< p.y << ")"<<"\n";
  x=x-p.x;
  y=y-p.y;
  cout<<"resultado da subtracao: ";
  cout<< "(" << x << ","<< y << ")"<<"\n";

}

/**
 * @brief Ponto::norma
 * @return
 */
float Ponto::norma(void){
return sqrt(x*x+y*y); //Cálculo da norma;
}

/**
 * @brief Ponto::translada
 * @param a
 * @param b
 */
void Ponto::translada(float a, float b){
    cout<<"o ponto: "<<"("<< x << ","<< y << ") "<<"foi transladado: "<<"("<< x << " + ("<<a<<"),"<< y <<" + ("<<b<< "))";
    x=x+a;
    y=y+b;
    cout<<" foi transladado: "<< "(" << x << ","<< y << ")"<<"\n";
}

/**
 * @brief Ponto::setXY
 * @param mx
 * @param my
 */
void Ponto::setXY(float mx, float my){
  //define novas coordenadas para um ponto;
    x=mx;
    y=my;
}
