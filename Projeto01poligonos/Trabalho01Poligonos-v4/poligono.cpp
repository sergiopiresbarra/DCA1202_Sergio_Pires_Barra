/**
 * poligonoCPP - AQUI ESTAO AS FUNÇÕES DA CLASSE POLIGONO QUE SERÃO EXECUTADAS;
 */
#include "poligono.h"
#include <iostream>
#include <cmath>
using namespace std;

/**
 * @brief Poligono::Poligono
 * @param n
 * Calcula a área de um polígono pelas suas coordenadas x e y;
 */
Poligono::Poligono(int n)
{
    npontos=n;
    for(int i=0; i<n; i++)
    {
        a[i].setX(0.0);
        a[i].setY(0.0);
    }
}
/**
 * @brief Poligono::~Poligono
 */
Poligono::~Poligono()
{
   // cout << "chamando destrutor poligono\n";
}

/**
 * @brief Poligono::vertices
 */
void Poligono::vertices(void)
{
    cout<<"numero de vertices: "<<npontos<<"\n";
}

/**
 * @brief Poligono::area
 * Calcula a área de um polígono pelas suas coordenadas x e y;
 */
void Poligono::area(void){
int x=npontos;
float soma1=0,soma2=0;
Ponto c[100];

for(int i=0; i<x-1; i++){
    c[i].setX(a[i].getX()*a[i+1].getY());
    c[i].setY(a[i].getY()*a[i+1].getX());
}
    c[x-1].setX(a[x-1].getX()*a[0].getY());
    c[x-1].setY(a[x-1].getY()*a[0].getX());

for(int i=0; i<x; i++){
    soma1=soma1+c[i].getX();
    soma2=soma2+c[i].getY();
}

float sub=soma1-soma2;
float area01=abs(sub/2);
    cout<<"Area total e': "<<area01<<"\n";
}

/**
 * @brief Poligono::translada
 * @param A
 * @param B
 */
void Poligono::translada(float A, float B){
   int x=npontos;
    for(int i=0; i<x; i++){
       a[i].setX(a[i].getX()+A);
       a[i].setY(a[i].getY()+B);
    }
    cout<<"translada - nova posicao do poligono: ";
    for(int i=0; i<x; i++){
    cout<<"("<<a[i].getX()<<", "<<a[i].getY()<<") ";
    }
    cout<<"\n";
    }

/**
 * @brief Poligono::rotaciona
 * @param X1
 * @param Y1
 * @param graus
 */
void Poligono::rotaciona(float X1, float Y1, float graus){
float rad = (graus * 3.1415)/180; //converte graus para radianos;
cout<<"radianos= "<<rad<<"\n";

int x=npontos;
     //Translada os pontos dos vértices;
    for(int i=0; i<x; i++){
       a[i].setX(a[i].getX()-X1);
       a[i].setY(a[i].getY()-Y1);
    }
     //Rotaciona em torno da origem;
    for(int i=0; i<x; i++){

            a[i].setXY(a[i].getX()*cos(rad)-a[i].getY()*sin(rad),a[i].getX()*sin(rad)+a[i].getY()*cos(rad));

    }
     //Translada os pontos de volta para suas posições anteriores;
    for(int i=0; i<x; i++){
       a[i].setX(a[i].getX()+X1);
       a[i].setY(a[i].getY()+Y1);
    }

  cout<<"rotacao - nova posicao do poligono: ";
    for(int i=0; i<x; i++){
    cout<<"("<<a[i].getX()<<", "<<a[i].getY()<<") ";
    }
    cout<<"\n";
}

/**
 * @brief Poligono::print
 * Imprime os pontos do poligono.
 */
void Poligono::print(void){
    cout<<"numero de pontos="<<npontos<<"\n";
    int x=npontos;
for(int i=0; i<x; i++){
        if(i<x-1){
    cout<<"("<<a[i].getX()<<", "<<a[i].getY()<<")->";
        }
        if(i==x-1){
         cout<<"("<<a[i].getX()<<", "<<a[i].getY()<<")";
        }
    }
    cout<<"\n";

}

/**
 * @brief Poligono::centrodegravidade
 * Cálcula o Centro de Gravidade do Polígono.
 */
void Poligono::centrodegravidade(void){
int x=npontos;
float soma1=0,soma2=0;

float s1=0,s2=0;
Ponto e[100];
//Cálcula a área;
for(int i=0; i<x-1; i++){
    e[i].setX(a[i].getX()*a[i+1].getY());
    e[i].setY(a[i].getY()*a[i+1].getX());
}
    e[x-1].setX(a[x-1].getX()*a[0].getY());
    e[x-1].setY(a[x-1].getY()*a[0].getX());

for(int i=0; i<x; i++){
    s1=s1+e[i].getX();
    s2=s2+e[i].getY();
}

float sub=s1-s2;
float A=(sub/2);


//Cálcula a coordenada x do Centro de Gravidade;
for(int i=0; i<x-1; i++){
    soma1=soma1+((a[i].getX()+a[i+1].getX())*(a[i].getX()*a[i+1].getY()-a[i+1].getX()*a[i].getY()));
}
  soma1=soma1+((a[x-1].getX()+a[0].getX())*(a[x-1].getX()*a[0].getY()-a[0].getX()*a[x-1].getY()));

//Cálcula a coordenada y do Centro de Gravidade;
for(int i=0; i<x-1; i++){
    soma2=soma2+((a[i].getY()+a[i+1].getY())*(a[i].getX()*a[i+1].getY()-a[i+1].getX()*a[i].getY()));
}
 soma2=soma2+((a[x-1].getY()+a[0].getY())*(a[x-1].getX()*a[0].getY()-a[0].getX()*a[x-1].getY()));

//cout<<"Area="<<A<<"\n";
//Cálculo das coordenadas;
float cx=(soma1/(6*A));
float cy=(soma2/(6*A));
cout<<"Centro de Gravidade:\n";
cout<<"CGx="<<cx<<"\n";
cout<<"CGy="<<cy<<"\n";
}
