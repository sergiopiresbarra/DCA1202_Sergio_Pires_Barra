//pontoCPP
#include <iostream>
#include <cmath>
#include "ponto.h"

using namespace std;

Ponto::Ponto(float mx, float my){
  x = mx; y = my;
}

Ponto::~Ponto(){
  //cout << "chamando destrutor ponto\n";
}

void Ponto::setX(float mx){
  x = mx;
}

float Ponto::getX(void){
  return x;
}

void Ponto::setY(float my){
  y = my;
}

float Ponto::getY(void){
  return y;
}

void Ponto::print(void){
  cout << "(" << x << ","
       << y << ")"<<"\n";
}
void Ponto::add(Ponto p){
  cout<<"Soma entre: ";
  cout<< "(" << x << ","<< y << ")"<<" + ";
  cout<< "(" << p.x << ","<< p.y << ")"<<"\n";
  x=x+p.x;
  y=y+p.y;
  cout<<"resultado da soma: ";
  cout<< "(" << x << ","<< y << ")"<<"\n";

}
void Ponto::sub(Ponto p){
  cout<<"Subtracao entre: ";
  cout<< "(" << x << ","<< y << ")"<<" - ";
  cout<< "(" << p.x << ","<< p.y << ")"<<"\n";
  x=x-p.x;
  y=y-p.y;
  cout<<"resultado da subtracao: ";
  cout<< "(" << x << ","<< y << ")"<<"\n";

}

float Ponto::norma(void){
return sqrt(x*x+y*y);
}

void Ponto::translada(float a, float b){
    cout<<"o ponto: "<<"("<< x << ","<< y << ") "<<"foi transladado: "<<"("<< x << " + ("<<a<<"),"<< y <<" + ("<<b<< "))";
    x=x+a;
    y=y+b;
    cout<<" foi transladado: "<< "(" << x << ","<< y << ")"<<"\n";
}
void Ponto::setXY(float mx, float my){
    x=mx;
    y=my;
}
