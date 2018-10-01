//poligonoCPP
#include "Poligono.h"
#include <iostream>
#include <cmath>
using namespace std;

Poligono::Poligono(int n)
{
    npontos=n;
    for(int i=0; i<n; i++)
    {
        a[i].setX(0.0);
        a[i].setY(0.0);
    }
}

Poligono::~Poligono()
{
    cout << "chamando destrutor poligono\n";
}

void Poligono::vertices(void)
{
    cout<<"numero de vertices: "<<npontos<<"\n";
}

void Poligono::area(void){
int x=npontos;
float soma1=0,soma2=0;
cout<<"numero de vetices definidos: "<<npontos<<"\n";
float c[x];
float d[x];
/*float a[x];
float b[x];
for(int i=0; i<x; i++){
    cout<<"digite as coordenadas (x,y) do vertice "<<i<<"\n";
    cout<<"x= ";
    cin>>a[i];
    cout<<"\ny= ";
    cin>>b[i];
}
*/
/*for(int i=0; i<x-1; i++){
    c[i]=a[i]*b[i+1];
    d[i]=b[i]*a[i+1];
}
    c[x-1]=a[x-1]*b[0];
    d[x-1]=b[x-1]*a[0];
*/
for(int i=0; i<x-1; i++){
    c[i]=a[i].getX()*a[i+1].getY();
    d[i]=a[i].getY()*a[i+1].getX();
}
    c[x-1]=a[x-1].getX()*a[0].getY();
    d[x-1]=a[x-1].getY()*a[0].getX();

for(int i=0; i<x; i++){
    soma1=soma1+c[i];
    soma2=soma2+d[i];
}
cout<<"c[x]{";
for(int i=0; i<x; i++){
    cout<<c[i]<<" ,";
}
cout<<"}\n";
cout<<"d[y]{";
for(int i=0; i<x; i++){
    cout<<d[i]<<" ,";
}
cout<<"}\n";
cout<<"soma1="<<soma1;
cout<<"soma2="<<soma2;
float sub=soma1-soma2;
float area=abs(sub/2);
    cout<<"Area total e': "<<area<<"\n";
}

void Poligono::translada(float A, float B){
   int x=npontos;
    for(int i=0; i<x; i++){
       a[i].setX(a[i].getX()+A);
       a[i].setY(a[i].getY()+B);
    }
    cout<<"nova posicao do poligono:";
    for(int i=0; i<x; i++){
    cout<<"("<<a[i].getX()<<", "<<a[i].getY()<<") ";
    }
    cout<<"\n";
    }

void Poligono::rotaciona(float X1, float Y1, float graus){

//novoX = centroX + (pontoX - centroX) * Math.cos(angulo) - (pontoY - centroY) * Math.sin(angulo);
//novoY = centroY + (pontoX - centroX) * Math.sin(angulo) + (pontoY - centroY) * Math.cos(angulo);

//xf = (xo - xr) * cos (@) - (yo - yr) * sin (@) + xr
//yf = (yo - yr) * cos (@) + (xo - xr) * sin (@) + yr
//(xo,yo) = Ponto que você deseja rotacionar
//(xr,yr) = Ponto em que você vai rotacionar o ponto acima (no seu caso o centro do retangulo)
//(xf,yf) = O novo local do ponto rotacionado
//@ = Angulo de rotação


   int x=npontos;
    for(int i=0; i<x; i++){
             a[i].setX((a[i].getX() - X1) * cos(graus) - (a[i].getY() - Y1) * sin(graus) + X1);
             a[i].setY((a[i].getY() - Y1) * cos(graus) + (a[i].getX() - X1) * sin(graus) + Y1);
            //a[i].setX( X1 + (a[i].getX() - X1) * cos(graus) - (a[i].getY() - Y1) * sin(graus));
            //a[i].setY( Y1 + (a[i].getX() - X1) * sin(graus) + (a[i].getY() - Y1) * cos(graus));
    }
  cout<<"nova posicao do poligono:";
    for(int i=0; i<x; i++){
    cout<<"("<<a[i].getX()<<", "<<a[i].getY()<<") ";
    }
    cout<<"\n";
}

void Poligono::print(void){
    cout<<"npontos="<<npontos<<"\n";
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
void Poligono::centrodegravidade(void){
int x=npontos;
float soma1=0,soma2=0,area=0;
//area
for(int i=0; i<x-1; i++){
    area=area+(a[i].getX()*a[i+1].getY()-a[i+1].getX()*a[i].getY());
}
//centro x
for(int i=0; i<x-1; i++){
    soma1=soma1+((a[i].getX()+a[i+1].getX())*(a[i].getX()*a[i+1].getY()-a[i+1].getX()*a[i].getY()));
}
//centro y
for(int i=0; i<x-1; i++){
    soma2=soma2+((a[i].getY()+a[i+1].getY())*(a[i].getX()*a[i+1].getY()-a[i+1].getX()*a[i].getY()));
}
float A=abs(area/2);
cout<<"Area="<<A<<"\n";
float cx=soma1/(6*A);
float cy=soma2/(6*A);

cout<<"CGx="<<cx<<"\n";
cout<<"CGy="<<cy<<"\n";
}
